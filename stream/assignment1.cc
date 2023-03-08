#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
/* 统计一本书内各个word的出现次数 */
int main() {
    std::ifstream file("words.txt");
    std::string line;
    std::map<std::string, int> wordCount;

    while (std::getline(file, line)) {
        /* use std::stringstream to extract each word from a line(as a stream)*/
        std::stringstream ss(line);
        std::string word;
        while (ss >> word) {
            wordCount[word]++;
        }
    }

    for (const auto& pair : wordCount) {
        std::cout << pair.first << " : " << pair.second << std::endl;
    }

    return 0;
}