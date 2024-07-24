

double array_mean(int array[], int n){
    double sum = 0;
    for(int i=0;i<n;i++){
        sum += array[i];
    }
    double avg = sum/n;

    return avg;
}