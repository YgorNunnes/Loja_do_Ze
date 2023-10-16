#include <stdio.h>
#include "menu.h"

int consultar_estoque(){
    int cod;
    do{
        printf(" -Menu de Consulta de Estoque- \n");
        printf("Digite o código do produto: \n");
        printf("Cód 0. Radiador\n");
        printf("Cód 1. Velas de Ignição\n");
        printf("Cód 2. Filtro de Óleo\n");
        printf("Cód 3. Pastilhas de Freio\n");
        printf("Cód 4. Filtro de Ar\n");
        printf("Cód 5. Bateria\n");
        printf("Cód 6. Alternador\n");
        printf("Cód 7. Pneus\n");
        printf("Cód 8. Calotas\n");
        printf("Cód 9. Faróis\n");
        printf("Cód 10.Finalizar\n");
        printf(" \n");
        scanf("%d", &cod);
        
        if(cod != 10){
            printf("Produto selecionado: %s\n", produtos[cod]);
            printf("Estoque disponível: %d\n", estoque[cod]);
        }
    }
    while(cod != 10);
    printf("Voltando ao menu...\n");
    return main();
}