#include <iostream>

#include "MSG.h"

int main() {
    MSG a;
    MSG b('b');

    MSG& c = a;
    MSG d = b;

    a = b;
    return 0;
}
