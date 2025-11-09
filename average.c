#include <stdio.h>

double avg(double array[], int length); // function

int main() {
    double arr1[] = {5,11,32.2,34.1}; // arrays defined here
    double arr2[] = {5,11,23,2,56.33};
    printf("arr1 avg: %.2lf\n", avg(arr1,4)); // print average of each array
    printf("arr2 avg: %.2lf\n", avg(arr2,4)); // arr2 = which array | 4 = length of array

    return 0;
}

double avg(double array[], int length) // function calculates
{
    double sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum = sum + array[i];
    }
    return sum/length; // returns average
}
