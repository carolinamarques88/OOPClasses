//
// Created by Luccas on 02/10/2024.
//

#ifndef SAFE_H
#define SAFE_H
#include <string>
#include <iostream>

class safe {
    static const int safeSize = 20;
    bool isOpen = false;
    bool isBlocked = false;
    std::string code;
    int numAttempts;
    std::string unblockCode;
    std::string contents[safeSize];
    int changeCodeCounter;
public:
    safe(std::string _code, std::string _unblockCode);

    void open(std::string givenCode);
    void close();
    void unblock(std::string givenCode);

    void putOnSafe(std::string something);
    void takeFromSafe(std::string something);
    void showSafeContents();

    void changeCode(std::string oldCode, std::string newCode);
};



#endif //SAFE_H
