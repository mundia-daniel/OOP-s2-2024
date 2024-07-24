#include <iostream>
#include <cmath>
int count(int array[], int n){
    int count = 0;
        for (int i = 0; i < n; i++) {
            if (fmod(array[i],2)==0) {
                count++;
            }
        }

    return count;
}