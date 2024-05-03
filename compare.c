#include <stdio.h>

int main (void) {
    int x, y;
    
    printf("Enter X: ");
    scanf("%i", &x);
    printf("Enter Y: ");
    scanf("%i", &y);

    if(x > y){
        printf("X is greater then Y ");
    }
    else if (x < y){
        printf("X is less than Y");
    }
    else{
        printf("X is equal to Y");
    }
}