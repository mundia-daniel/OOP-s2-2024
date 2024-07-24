#include <iostream>

using namespace std;

extern double array_mean(int array[], int n);

int main(){
    int array[5] = {2.23,4.56,6.7,3,5};

    cout << "average is: "<< array_mean(array,5) << endl;

}