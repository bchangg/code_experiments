#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void checkInputs(int first, int second, int third, char* which) {
    while((first > 100 || first < 1) || (second > 100 || second < 1) || (third > 100 || third < 1)) {
        if(first > 100 || first < 1) {
            printf("%d is not a valid number. Please enter a new number for %s0.\n", first, which);
            scanf("%d",&first);
        } else if(second > 100 || second < 1) {
            printf("%d is not a valid number. Please enter a new number for %s1.\n", second, which);
            scanf("%d",&second);
        } else if(third > 100 || third < 1) {
            printf("%d is not a valid number. Please enter a new number for %s2.\n", third, which);
            scanf("%d",&third);
        }
    }
}

int main(){
    int a0, a1, a2;
    int b0, b1, b2;
    int alice = 0, bob = 0;
    scanf("%d %d %d",&a0,&a1,&a2);
    checkInputs(a0,a1,a2,"a");
    scanf("%d %d %d",&b0,&b1,&b2);
    checkInputs(b0,b1,b2,"b");

    if(a0 > b0) {
        alice++;
    } else if (a0 < b0) {
        bob++;
    }
    if(a1 > b1) {
        alice++;
    } else if (a1 < b1) {
        bob++;
    }
    if(a2 > b2) {
        alice++;
    } else if (a2 < b2) {
        bob++;
    }

    printf("%d %d", alice, bob);
    return 0;
}
