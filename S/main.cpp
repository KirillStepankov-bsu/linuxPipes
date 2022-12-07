#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::stringstream in_stream(input);
    int sum = 0;
    int x;
    while (in_stream >> x) {
        sum += x;
    }
    std::cout << sum << "\n";
    return 0;
}