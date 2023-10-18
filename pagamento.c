#include <stdio.h>
#include "menu.h"
#include <stdlib.h>
#include <time.h>

void sorteio(float cliente[]){
    int cliente_sorteado = 0, flag = 0;
    srand(time(0));

    cliente_sorteado = rand()%9;

    if(cliente[cliente_sorteado] == 0){
        for(int i = 0; i < 10; i++){
            if(cliente[i] != 0){
                printf("Cliente numero %d foi o ganhador. A divida de R$%.2f foi abatida.\n", i, cliente[i]);
                printf(" \n");
                flag++;
                cliente[i] -= cliente[i];
                break;
            }
        }
        if(flag == 0){
            printf("Nao ha clientes endividados para sortear.\n");
        }
    }
    else{
        printf("Cliente numero %d foi o ganhador. A divida de R$%.2f foi abatida.\n", cliente_sorteado, cliente[cliente_sorteado]);
        printf(" \n");
        cliente[cliente_sorteado] -= cliente[cliente_sorteado];
    }

}


int pagar_debitos(){
    int cod_cliente;
    float valor_a_pagar;
    do{
        printf("Digite seu codigo de cliente: \n");
        scanf("%d", &cod_cliente);
        printf("Seu saldo devedor e de? R$%.2f\n", vet_crediario[cod_cliente]);

        if(vet_crediario[cod_cliente] == 0){
            printf("Nao e necessario efetuar nenhum pagamento. (Nenhuma divida encontrada)\n");
        }
        else{
            while(1){
                printf("Quanto voce deseja pagar?\n");
                scanf("%f", &valor_a_pagar);

                if(valor_a_pagar > vet_crediario[cod_cliente]){
                    printf("Nao e aceitamos pagamentos acima do valor devido. \n");
                    printf("saldo devedor atual: R$%.2f\n", vet_crediario[cod_cliente]);
                }
                else{
                    vet_crediario[cod_cliente] -= valor_a_pagar;
                    printf("Pagamento efetuado! \n");
                    printf("saldo devedor atual: R$%.2f\n", vet_crediario[cod_cliente]);
                    return 0;
                }
            }
        }
        
    }while(cod_cliente != 10);
    return 0;
}


int consulta_debitos(){
    int cod_cliente;
    while(1){
        printf("Digite seu código de cliente: (10 - Sair)\n");
        scanf("%d", &cod_cliente);

        if(cod_cliente >= 0 && cod_cliente < 10){
            printf(" \n");
            printf("Seu saldo negativo é de: R$%.2f\n", vet_crediario[cod_cliente]);
        }
        else if(cod_cliente == 10){
            printf(" \n");
            printf("Fechando consulta...\n");
            printf(" \n");
            return 0;
        }
        else{
            printf("Código inválido\n");
        }
    }
}

int pagar(float valor){
    int forma_pagamento, cod_cliente;

    while(1){
        printf("Escolha a forma de pagamento: \n");
        printf("1 - Pix (desconto de 5%%)\n");
        printf("2 - Cartão\n");
        printf("3 - Dinheiro (desconto de 2%%)\n");
        printf("4 - Crediário\n");
        scanf("%d", &forma_pagamento);

        switch(forma_pagamento)
        {
            case 1:
                printf("Pagamento efetuado. Desconto de R$%.2f. Total: R$%.2f \n", (valor * 0.05), valor - (valor * 0.05));
                valor = valor - (valor * 0.05);
                break;

            case 2:
                printf("Pagamento efetuado.\n");
                break;

            case 3:
                printf("Pagamento efetuado. Desconto de R$%.2f. Total: R$%.2f \n", (valor * 0.02), valor - (valor * 0.02));
                break;   

            case 4:
                printf("Digite seu código de cliente:\n");
                scanf("%d", &cod_cliente);
                vet_crediario[cod_cliente] += valor;
                printf("R$%.2f adicionados ao seu saldo.\n", valor);
                break;

            default:
                printf("Entrada Inválida\n");
                break;
        }
        return 0;
    }
}