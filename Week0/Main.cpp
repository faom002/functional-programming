#include <algorithm>
#include <fstream>
#include <iostream>
#include <iterator>
#include <ostream>
#include <string>
#include <vector>
int count_lines(const std::string &filename) {

  std::ifstream in(filename);

  return std::count(

      std::istreambuf_iterator<char>(in), std::istreambuf_iterator<char>(),
      '\n');
}

std::vector<int> count_lines_in_files(const std::vector<std::string> &files) {

  std::vector<int> results;

  for (const auto &file : files) {

    results.push_back(count_lines(file));
  }

  return results;
}

int main() {

  std::string myText;

  std::vector<std::string> files;

  std::ifstream MyReadFile("test.txt");

  while (getline(MyReadFile, myText)) {

    files.push_back(myText);
  }

  MyReadFile.close();

  for (const auto &lines : count_lines_in_files(files)) {

    std::cout << lines << "\n";
  }

  return 0;
}
