//funnily enough, I did not use an array in this example called "simple array sum"
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    //declare a variable for the size of the array, and also grab it from user input
    int size;
    scanf("%d",&size);

    int sum = 0; //declare a variable sum, to be printed later
    for(int i = 0; i < size; i++) {
        int current; //declare a variable for the current number to be added
        scanf("%d", &current); //get the number from the user
        sum += current; //add the number to sum
    }

    printf("%d", sum); //output the added number
    return 0;
}
