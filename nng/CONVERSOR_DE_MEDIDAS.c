#include <stdio.h>

int main(){
    double altura_pes, altura_metros;
    double peso_libras, peso_quilos;

    printf("Digite o valor da altura (pés): ");
    scanf("%lf", &altura_pes);
    printf("\nDigite o valor do peso em (libras): ");
    scanf("%lf", &peso_libras);
    
    altura_metros = 0.3038 * altura_pes;
    peso_quilos = 0.454  * peso_libras;

    printf("Resultado:\n");
    printf("Altura em metros: %.2lf\n", altura_metros);
    printf("Peso em quilos: %.2lf", peso_quilos);

    return 0;
}