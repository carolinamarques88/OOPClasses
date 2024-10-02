#include <iostream>
#include "safe.h"

int main() {
    safe safe1("1234", "12345678");

    safe1.open("1234");

    safe1.close();
    safe1.close();

    safe1.open("1233");
    safe1.open("1233");
    safe1.open("1233");

    safe1.unblock("123456789");
    safe1.unblock("12345678");

    safe1.open("1234");
    safe1.open("1234");

    safe1.putOnSafe("A toy car");
    safe1.putOnSafe("A purse");
    safe1.putOnSafe("A trillion dollars");

    safe1.showSafeContents();

    safe1.takeFromSafe("A purse");

    safe1.showSafeContents();

    safe1.changeCode("1234", "5678");
    safe1.changeCode("1234", "5678");

    safe1.close();

    safe1.open("5678");
    return 0;
}
