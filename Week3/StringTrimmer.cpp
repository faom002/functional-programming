

#include <algorithm>
#include <iostream>
#include <string>
#include <cctype> // Include for std::isspace

bool is_not_space(char c) {
    return !std::isspace(static_cast<unsigned char>(c));
}


std::string trim_left(std::string s) {


    s.erase(
            s.begin(),
            std::find_if(s.begin(), s.end(), is_not_space)

            );

    return s;

}



int main () {



    std::string hello = "        HelloThereMyFriend";



    std::string test = trim_left(hello);


    std::cout << test << "\n";



    return 0;


}
