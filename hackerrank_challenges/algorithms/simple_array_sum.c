#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int size;
    int sum = 0;
    scanf("%d",&size);

    for(int i = 0; i < size; i++){
        int current;
        scanf("%d", &current);
        sum += current;
    }

    printf("%d", sum);
}
