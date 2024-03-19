
#include <functional>
#include <iostream>
#include <numeric>
#include <vector>
double score_product(const std::vector<int> &score) {

  return std::accumulate(

      score.cbegin(), score.cend(), 1, std::multiplies<int>()

  );
}

int main() {


    std::vector<int> scores;

    scores.push_back(10);
    scores.push_back(10);



    // this does not mutate the scores vector which makes it pure function
    std::cout << score_product(scores) << "\n";
   


    for (auto numbers : scores) {
    
    std::cout << numbers << "\n";
    }

    return 0;


}
