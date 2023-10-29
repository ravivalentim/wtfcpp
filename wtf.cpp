#include <iostream>
#include <vector>

class {
public:
    void log(const char* log) {
        std::cout << log << std::endl;
    }
    template<typename T>
    void log(const std::vector<T>& array) {
        std::cout << "{ ";
        for (int i = 0; T element : array) {
            std::cout << element;
            if (i < array.size() - 1) 
                std::cout << ", ";
            i++;
        }
        std::cout << " }";
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

    std::vector<int> a { 8, 5, 2, 3, 9, 8, 7};

    console.log(a);
    console.log("Hello, world");
    System.out.println("Hello, world");

    return 0;
}