#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    //From line 10 to line 19 is code that was given to us in the example. We use a int variable "size" to store the size of the array gotten by the user's input
    int size;
    scanf("%d",&size);
    int a[size][size];
    for(int a_i = 0; a_i < size; a_i++){
       for(int a_j = 0; a_j < size; a_j++){
          scanf("%d",&a[a_i][a_j]);
       }
    }

    int left_down_sum = 0, left_up_sum = 0; //declare variables for the individual sums, left down being [0][0],[1][1],[2][2], and left up being [2][0],[1][1],[0][2]
    for(int i = 0; i < size; i++) { //add the sums
        left_down_sum += a[i][i];
        left_up_sum += a[size-1-i][i];
    }

    int diagonal_diff = abs(left_up_sum - left_down_sum); //find the absolute difference between the sums
    printf("%d", diagonal_diff); //print out to screen
    return 0;
}
