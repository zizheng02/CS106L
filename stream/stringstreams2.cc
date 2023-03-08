#include <iostream>
#include <sstream>

int main(int argc, char const *argv[])
{
    std::string input = "123";
    std::stringstream stream(input);
    int number;
    stream >> number;
    std::cout << number << std::endl; // Outputs "123" 

    return 0;
}
