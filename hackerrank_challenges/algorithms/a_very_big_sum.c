#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int size; //declare an int variable for the size of the array, or in our case, how many numbers there are to be added
    scanf("%d",&size); //get said value
    int arr[size]; //declare an array that is of "size" size
    for(int arr_i = 0; arr_i < size; arr_i++) {
        scanf("%d",&arr[arr_i]); //load numbers into the array from user input
    }

    long sum = 0; //declare a long varaible to store very large numbers
    for(int i = 0; i < size; i++) {
        sum += arr[i]; //add up each value of the numbers in the array
    }
    printf("%ld", sum); //print out the sum to screen
    return 0;
}
