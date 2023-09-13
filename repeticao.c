#include <stdio.h>

int main() {
    int i, x, n_linhas, n_numero;
    n_numero = 1;
    scanf("%d", &n_linhas);

    if (n_linhas <= 0){
        printf("Você entrou com %d, tente de novo na próxima", n_linhas);
    }
    else{
    for (i = 1; i <= n_linhas; i++){
        for (x = 1; x <= i; x++){
            if (n_numero <= 9){
            printf("%d  ", n_numero);
            n_numero += 1;
            }
            else{
                printf("%d  ", n_numero);
                n_numero += 1;
            }
        }
        printf(" \n");
    }
    }

   
   return 0;
}