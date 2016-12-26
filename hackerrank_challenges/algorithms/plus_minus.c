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
    int arr[size];
    for(int arr_i = 0; arr_i < size; arr_i++){
       scanf("%d",&arr[arr_i]);
    }

    float pos = 0, neg = 0, zero = 0;
    float posFrac, negFrac, zeroFrac;
    for(int i = 0; i < size; i++) {
        if(arr[i] < 0) {
            neg++;
        } else if(arr[i] > 0) {
            pos++;
        } else {
            zero++;
        }
    }
    posFrac = pos/size;
    negFrac = neg/size;
    zeroFrac = zero/size;
    printf("%6f\n%6f\n%6f", posFrac, negFrac, zeroFrac);
    return 0;
}
