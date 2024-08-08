
double arrayMin(double* array, int size){
    double min_val = array[0];

    for(int i = 0; i<size; i++){
        if(array[i]<min_val){
            min_val = array[i];
        }
    }

    return min_val;
}