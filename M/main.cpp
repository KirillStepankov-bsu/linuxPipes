#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::stringstream in_stream(input);
    int x;
    while (in_stream >> x) {
        std::cout << x * 7 << " ";
    }
    return 0;
}
