#include <stdio.h>

int suma (int n) {
    if (n == 0) return 0;
    return n + suma (n-1);
}

int main() {
    printf("¡Hola Mundo!, como estas?\n");
    return 0;
}

int factorial(int n ){
    if (n == 0) return 1 ;
    return n * factorial(n-1);
}