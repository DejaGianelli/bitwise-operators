#include <stdio.h> 

int main() {
    int a = 7; //0111
    int b = 4; //0100
    int c = (a | b);
    printf("%d \n", c); //0111
    return 0;
}