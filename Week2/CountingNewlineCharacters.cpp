
#include <iostream>
#include <numeric>
#include <string>
int f(int previous_count, char c) {

  return (c != '\n') ? previous_count : previous_count + 1;
}

int count_lines(const std::string &s) {

  return std::accumulate(s.cbegin(), s.cend(), 0, f);
}

int main() {

  std::string hello_world = "hello \n world \n faisal \n";

  std::cout << count_lines(hello_world) << "\n";

  return 0;
}
