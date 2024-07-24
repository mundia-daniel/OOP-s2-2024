#include <iostream>

using namespace std;

extern int sum_two_arrays(int array[], int secondarray[], int n);

int main(){
    int A[5] = {1,2,4,5,7};
    int B[5] = {12,54,9,-4,-20};

    cout << "sum of the two arrays is: "<< sum_two_arrays(A,B,5)<<endl;
    return 0;
}