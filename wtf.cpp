#include <iostream>

class {
public:
    void log(const char* log) {
        std::cout << log << std::endl;
    }
} console;

class {
public:
    struct {
        void println(const char* str) {
            std::cout << str << std::endl;
        }
    } out;
} System;

int main() {

    console.log("Hello, world");
    System.out.println("Hello, world");

    return 0;
}