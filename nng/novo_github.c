#include <stdio.h>

void nada (int n, int b){

    printf("%d", (n+b));
}

int main() {
    int n, b;

    scanf("%d %d", &n, &b);
    nada(n, b);
}