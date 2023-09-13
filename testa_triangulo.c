#include <stdio.h>
#include <math.h>

int testa_triangulo(int a, int b, int c){

    if (a > abs(b-c) && a < (b+c) && b > abs(a-c) && b < a+c && c > abs(a-b) && c < a + b){
        return 1;
    }
    else{
        return 0;
    }
}
void testa_tipo_triangulo(int a, int b, int c){

    if (a == b && a == c && b == c){
        printf("É um triângulo equilátero.");
    }
    else if (a == b && a != c || a == c && a != b || b == c && b != a){
        printf("É um triângulo isóceles.");
    }
    else {
        printf("É um trinângulo escaleno.");
    }
}
int main () {
    
    int a, b, c;
    printf("Digite os três lados do triângulo:\n" );
    scanf("%d %d %d", &a, &b, &c);

    if (testa_triangulo(a, b, c)){
        testa_tipo_triangulo(a, b,c);
    }
    else {
        printf("\nNão é um triângulo");
    }
    return 0;
}