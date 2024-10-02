//
// Created by Luccas on 02/10/2024.
//

#include "safe.h"

#include <iostream>


safe::safe(std::string _code, std::string _unblockCode) {
    isOpen = false;
    isBlocked = false;

    numAttempts = 3;

    changeCodeCounter = 0;

    if(_code.size() == 4)
        code = _code;

    if(_unblockCode.size() == 8)
        unblockCode = _unblockCode;

    for(int i = 0; i < safeSize; i++) {
        contents[i] = "0";
    }
}

void safe::close() {
    if(isOpen) {
        isOpen = false;
        std::cout << "The safe is now closed." << std::endl;
        return;
    }
    std::cout << "The safe is already closed, dummy." << std::endl;
}

void safe::open(std::string givenCode) {
    if(!isOpen) {
        if(givenCode == code) {
            isOpen = true;
            std::cout << "Opened the safe successfully " << std::endl;
            return;
        }

        --numAttempts;

        if(numAttempts > 0) {
            std::cout << "Error in opening the safe. You have "
            << numAttempts << " Attempts remaining before blocking this safe."
            << std::endl;
            return;
        }
        std::cout << "You have blocked the safe. Insert unblocking code to continue."
        << std::endl;
        isBlocked = true;
        return;
    }
    std::cout << "The safe is already open, dummy." << std::endl;
}

void safe::unblock(std::string givenCode) {
    if(isBlocked) {
        if(givenCode == unblockCode) {
            std::cout << "The safe was sucessfully unblocked." << std::endl;
            isBlocked = false;
            numAttempts = 3;
            return;
        }
        std::cout << "The inserted code is invalid." << std::endl;
        return;
    }
    std::cout << "The safe is already unblocked, dummy." << std::endl;
}

void safe::putOnSafe(std::string something) {
    if(isOpen) {
        for(int i = 0; i < safeSize; i++) {
            if(contents[i] == "0") {
                contents[i] = something;
                std::cout << "The safe now contains: " << something << std::endl;
                return;
            }
        }
    } else {
    std::cout << "Open the safe first, dummy." << std::endl;
    }
}

void safe::takeFromSafe(std::string something) {
    if(isOpen) {
        for(int i = 0; i < safeSize; i++) {
            if(contents[i] == something) {
                contents[i] = "0";
                std::cout << "You have taken " << something << " from the safe." << std::endl;
                return;
            }
        }
    } else {
    std::cout << "Open the safe first, dummy." << std::endl;
    }
}

void safe::showSafeContents() {
    if(isOpen) {
        for(int i = 0; i < safeSize; i++) {
            if(contents[i] == "0") {
                contents[i] = "This space is empty";
                std::cout << "[" << i << "]: " << contents[i] << std::endl;
            } else {
            std::cout << "[" << i << "]: " << contents[i] << std::endl;
            }
        }
    }else {
    std::cout << "Open the safe first, dummy." << std::endl;
    }
}

void safe::changeCode(std::string oldCode, std::string newCode) {
    if(isOpen) {
        if(changeCodeCounter < 2) {
            if(oldCode == code) {
                ++changeCodeCounter;
            }else {
                std::cout << "The current password does not match the password inserted." << std::endl;
            }
        }
        if(changeCodeCounter == 2) {
            code = newCode;
            changeCodeCounter = 0;
        }
    }else {
        std::cout << "Open the safe first, dummy." << std::endl;
    }
}
