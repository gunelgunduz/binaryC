#include<stdlib.h>
#include<stdio.h>
#include<math.h>

//Converting decimal numbers to binary

int main(int argc, char *argv[]) {
    int number, duality;
    printf("Enter Number: ");
    scanf("%d", &number);

    for (int i =8 ; i >= 0; i--) {
        duality = number >> i;
        if (duality & 1)
            printf("1 ");
        else
            printf("0 ");
    }

    return 0;
}