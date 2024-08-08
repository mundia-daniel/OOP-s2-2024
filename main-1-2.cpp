#include <iostream>

extern void modifyArray(double* array, int size, double value);

int main(){

    double array[] = {1.1,-2.3,6,9,-30,4};
    modifyArray(array,5,2.5);

    std::cout<<array<<std::endl;

    return 0;
}
