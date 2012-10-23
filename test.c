#include <stdio.h>
#include <stdlib.h>

void print10Asterisks() {
    printf("10 Asterisks\n");
    for(int i=0; i<10; i++) {
        printf("*");
    }
    printf("\n");
}

int main() {
    print10Asterisks();
}
