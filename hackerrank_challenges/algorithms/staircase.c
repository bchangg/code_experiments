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
    for(int row = 0; row < size; row++) {
        char output[] = "";
        for(int currentChar = 6; currentChar >= 0; currentChar--) {
            if(row + currentChar >= 6) {
                output += "#";
            }
        }
        println("%s", output);
    }
    return 0;
}
