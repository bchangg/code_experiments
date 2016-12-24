#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int size;
    scanf("%d",&size);
    int a[size][size];
    for(int a_i = 0; a_i < size; a_i++){
       for(int a_j = 0; a_j < size; a_j++){
          scanf("%d",&a[a_i][a_j]);
       }
    }
    int left_down_sum = 0, left_up_sum = 0;
    for(int i = 0; i < size; i++) {
        left_down_sum += a[i][i];
        left_up_sum += a[size-1-i][i];
    }

    int diagonal_diff = abs(left_up_sum - left_down_sum);
    printf("%d", diagonal_diff);
    return 0;
}
