#include <iostream>
#include <string>
#include <vector>
#include <random>

std::vector<std::string> words = { "word1", "word2", "word3", "word4", "word5" };
std::random_device rd;
std::mt19937 rng(rd());

void printPyramid(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            std::cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            std::cout << words[j % words.size()] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    std::cout << "Enter the number of word pyramids to generate: ";
    int numPyramids;
    std::cin >> numPyramids;

    std::cout << "Enter the size of each pyramid: ";
    int size;
    std::cin >> size;

    for (int i = 0; i < numPyramids; i++) {
        std::cout << "Pyramid " << i + 1 << ": " << std::endl;
        printPyramid(size);
        std::cout << std::endl;
    }

    return 0;
}
