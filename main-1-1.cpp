#include <iostream>
extern int array_sum(int array[],int n);
int main(){
    int array[5] = {2,4,5,7,10};
    
    std::cout <<"sum is :"<< array_sum(array,5)<<std::endl;
return 0;
}