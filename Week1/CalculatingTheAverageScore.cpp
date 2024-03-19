
#include <iostream>
#include <numeric>
#include <vector>
double average_score(const std::vector<int> &scores) {

  return std::accumulate(

             scores.cbegin(), scores.cend(), 0

             ) /
         (double)scores.size();
}

int main() {

  std::vector<int> usersScore;

  usersScore.push_back(10);
  usersScore.push_back(1);
  usersScore.push_back(6);
  usersScore.push_back(4);
  usersScore.push_back(2);

  std::cout << "opponheimer got the following rating"
            << "\n";
  std::cout << average_score(usersScore) << "\n";

  return 0;
}
