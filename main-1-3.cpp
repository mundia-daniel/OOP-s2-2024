#include <iostream>

extern double* duplicateArray(double* array, int size);

int main(){

    double array[] = {1.1,-2.3,6,9,-30,4};
    

    std::cout<<duplicateArray(array,5)<<std::endl;

    return 0;
}