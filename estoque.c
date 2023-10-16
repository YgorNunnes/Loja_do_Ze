/*#include <stdio.h>
#include "menu.h"

int preencher_estoque(){
    int cod;

    while(1){
        printf("digite o código do produto que deseja reestocar:\n");
        printf("Cód 0. %s\n", produtos[0]);
        printf("Cód 1. Velas de Ignição\n");
        printf("Cód 2. Filtro de Óleo\n");
        printf("Cód 3. Pastilhas de Freio\n");
        printf("Cód 4. Filtro de Ar\n");
        printf("Cód 5. Bateria\n");
        printf("Cód 6. Alternador\n");
        printf("Cód 7. Pneus\n");
        printf("Cód 8. Calotas\n");
        printf("Cód 9. Faróis\n");
        printf("10. Finalizar\n");
        printf(" \n");
        scanf("%d", &cod);

        if((cod >= 0) && (cod <= 9)){
            printf("digite a quantidade desejada:\n");
            scanf("%d", &estoque[cod]);
            printf("%d unidades adicionadas de %s.\n", estoque[cod], produtos[cod]);
        }
        else if(cod == 10){
            break;
        }
        else{
            printf("Código inválido! \n");
        }
    }
    return main();
}*/