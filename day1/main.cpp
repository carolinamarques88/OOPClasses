//
// Created by Luccas on 13/09/2024.
//
#include <iostream>

int main() {
    float age;
    std::string word;

    std::cout << "Insert your age (positive whole number): ";
    std::cin >> age;

    //
    while(age < 0 || (int)age != age) {
        std::cout << "Insert your age (positive whole number): ";
        std::cin >> age;
        std::cout << std::endl;
    }

    std::cout << "Now, a word: ";

    std::cin.ignore();
    getline(std::cin, word);

    std::cout << "Number: " << age << " Word: " << word << std::endl;

    int letterCounter = 0;
    for(int i = 0; i < word.length(); i++) {
        if(word[i] != ' ')
            letterCounter++;
    }

    std::cout << "Your sentence has " << letterCounter << " Letters!" << std::endl;

    for(int i = 0; i < word.length(); i++) {
        std::cout << word[i] << std::endl;
    }

    //for (const char letter: word) {\
        std::cout << letter << std::endl;\
    }

    std::string completeName;

    std::cout << "Insert your complete name: ";

    getline(std::cin, completeName);

    std::string isFernando;

    for(int i = 0; i < completeName.length(); i++) {
        isFernando += completeName[i];
        if(completeName[i] == ' ') {
            std::cout << std::endl;
            isFernando.clear();
        }

        std::cout << completeName[i];

        if(isFernando == "Fernando")
            std::cout << "\nI know you, fernando!" << std::endl;

    }

    std::string possiblePalindrome;
    std::cout << "\nInsert a word to see if it is a palindrome " << std::endl;
    getline(std::cin, possiblePalindrome);

    while(possiblePalindrome != "end") {
        std::string aux = possiblePalindrome;
        for (int i = 0; i < possiblePalindrome.length(); i++) {
            aux[i] = possiblePalindrome[possiblePalindrome.length() - (i + 1)];
        }
        aux[possiblePalindrome.length()] = '\0';
        if(possiblePalindrome == aux) {
            std::cout<<"Your word is a palindrome! " << aux << std::endl;
        } else {
            std::cout<<"Your word is not a palindrome! " << aux<< std::endl;
        }
        aux.clear();
        getline(std::cin, possiblePalindrome);
    }

    return 0;
}
