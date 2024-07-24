#include <iostream>

using namespace std;
extern int count_evens(int number);

int main(){

    cout<<"Number of evens: "<< count_evens(100)<<endl;

    return 0;
}