#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else


int main() {
    int array[5] = {4,5,6,7,8};
    int n = 5;
    extern int count(int array[], int n);

    std::cout << "The number is: " << count(array, 5) << std::endl;
    return 0;
}