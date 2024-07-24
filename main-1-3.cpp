#include <iostream>

using namespace std;

extern int num_count(int array[], int n, int number);

int main(){
    int array[10] = {2,4,6,3,5,5,7,5,7,5};

    cout << "number appears this many times: "<< num_count(array,10,5)<< endl;

}
