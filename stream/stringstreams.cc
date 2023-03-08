#include <iostream>
#include <fstream>
#include <sstream>

int main() {
    std::ifstream file("data.txt");
    std::string line;
    int lineNum = 1;
    while (std::getline(file, line)) {
        std::stringstream ss(line);
        int a, b, c;
        ss >> a >> b >> c;
        std::cout << "The sum of the numbers on line " <<  lineNum << " is: " << a + b + c << std::endl;
        lineNum++;
    }

    return 0;
}

