#include <stdio.h>
#include "menu.h"


int pagar(float valor){
    int forma_pagamento, cod_cliente, perfil;

    while(1){
        printf("Escolha a forma de pagamento: \n");
        printf("1 - Pix (desconto de 5%%)\n");
        printf("2 - Cartão\n");
        printf("3 - Dinheiro (desconto de 2%%)\n");
        printf("4 - Crediário\n");
        printf("####%.2f####", valor);
        
        scanf("%d", &forma_pagamento);

        switch(forma_pagamento)
        {
            case 1:
                printf("Pagamento efetuado. Desconto de %.2f. Total: %.2f \n", (valor * 0.05), valor - (valor * 0.05));
                valor = valor - (valor * 0.05);
                return main();
            case 2:
                printf("Pagamento efetuado.\n");
                return main();
            case 3:
                printf("Pagamento efetuado. Desconto de %.2f. Total: %.2f \n", (valor * 0.02), valor - (valor * 0.02));
                return main();                
            case 4:
                printf("Digite seu código de cliente:\n");
                scanf("%d", &cod_cliente);
                perfil = vet_crediario[cod_cliente];
                perfil + valor;
                printf("R$%.2f adicionados ao seu saldo.\n", valor);
                printf("## saldo do cliente %d == %.2f\n");
            default:
                printf("Entrada Inválida\n");
        }
    }
    return valor;
}