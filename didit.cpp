#include <iostream>

int printTriangle(int height) {
    int stars = 0;
    for (int row = 1; row <= height; row++) {
        for (int col = 1; col <= row; col++) {
            std::cout << "* ";
            stars++;
        }
        std::cout << std::endl;
    }
    return stars;
}

int main() {
    int numStars;
    std::cout << "here is a triangle with height 4 made by rizal" << std::endl;
    numStars = printTriangle(4);
    std::cout << "that triangle had " << numStars << " total stars" << std::endl;

    std::cout << "here is a triangle with height 7" << std::endl;
    numStars = printTriangle(7);
    std::cout << "that triangle had " << numStars << " total stars" << std::endl;

    return 0;
}
