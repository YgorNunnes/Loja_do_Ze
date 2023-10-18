#include <stdio.h>
#include "menu.h"

void prod(int opc){
    char* produtos[10] = {"Radiador","Velas de Ignição","Filtro de Óleo", "Pastilhas de Freio", "Filtro de Ar", "Bateria", "Alternador", "Pneus", "Calotas", "Faróis"};
    printf("%s", produtos[opc]);
}

void zerar_estoque(int vet[]) {
    for (int i = 0; i < 10; i++) {
        vet[i] = 0;
    }
}


void max_estoque(int vet[]) {
    for (int i = 0; i < 10; i++) {
        vet[i] = 100;
    }
}


void sub_estoque(int flag[], int estoque[]){
    for(int i = 0; i < 10; i++){
        if(flag[i] > 0){
            estoque[i] -= flag[i];
        }
    }
}


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
            printf("Produto selecionado: ");
            prod(cod);
            printf(" \n");
            printf("Estoque disponível: %d\n", estoque[cod]);
        }
    }
    while(cod != 10);
    printf("Voltando ao menu...\n");
    return main();
}

void preencher_estoque(){
    int cod = 0, qtd_repor = 0;

    while(cod != 11){
        printf(" \n");
        printf("digite o código do produto que deseja reestocar:\n");
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
        printf("Cód 10. Todos (100 und)\n");
        printf("11. Finalizar\n");
        printf(" \n");
        scanf("%d", &cod);

        if ((cod >= 0) && (cod <= 9)) {
            printf("Digite a quantidade desejada:\n");
            scanf("%d", &qtd_repor);
            estoque[cod] += qtd_repor;
            printf("%d unidades adicionadas de ", estoque[cod]);
            prod(cod);
            printf(" \n");
        }

        else if(cod == 10){
            max_estoque(estoque);
        }
        else if(cod == 11){
            printf("Finalizando... \n");
            printf(" \n");
            break;
        }
        else{
            printf("Código inválido! \n");
        }
    }  
}


int comprar() {
    int escolha = -1, carrinho = 0, qtd = 0, flag[10] = {0};
    float total = 0;
    
    printf(" \n");
    printf("Bem-vindo ao Menu de Vendas do Ferro Velho do Zé!\n");
    printf("Desconto de 5%% para compras acima de R$300\n");
    printf("-------------------------------------------\n");
    
    while (escolha < 10) {
        printf("Digite o código do produto:\n");
        printf("Cód 0. Radiador           - R$200\n");
        printf("Cód 1. Velas de Ignição   - R$20,59\n");
        printf("Cód 2. Filtro de Óleo     - R$10,50\n");
        printf("Cód 3. Pastilhas de Freio - R$50\n");
        printf("Cód 4. Filtro de Ar       - R$15,99\n");
        printf("Cód 5. Bateria            - R$80\n");
        printf("Cód 6. Alternador         - R$150\n");
        printf("Cód 7. Pneu               - R$300 \n");
        printf("Cód 8. Calotas            - R$50\n");
        printf("Cód 9. Faróis             - R$299,90\n");
        printf("10. Finalizar\n");
        printf("11. Cancelar\n");
        printf(" \n");
        scanf("%d", &escolha);

        switch (escolha) {
            case 0:
                printf("Você selecionou: Radiador (unidades disponíveis: %d)\n", estoque[escolha] - carrinho);            
                printf("Digite a quantidade: \n");
                scanf("%d", &qtd);
                if(estoque[escolha] <= 0 || estoque[escolha] < qtd){
                    printf("Estoque Insuficiente\n");
                    printf(" \n");
                    break;
                }else{
                    flag[0] += qtd;
                }
                total = total + 200 * qtd;
                printf("Carrinho: R$%.2f\n", total);
                printf(" \n");
                break; 

            case 1:
                printf("Você selecionou: Velas de Ignição (unidades disponíveis: %d)\n", estoque[escolha] - carrinho);            
                printf("Digite a quantidade: \n");
                scanf("%d", &qtd);
                if(estoque[escolha] <= 0 || estoque[escolha] < qtd){
                    printf("Estoque Insuficiente\n");
                    printf(" \n");
                    break;
                }else{
                    flag[1] += qtd;
                }
                total = total + 20.59 * qtd;
                printf("Carrinho: R$%.2f\n", total);
                printf(" \n");
                break;

            case 2:
                printf("Você selecionou: Filtro de Óleo (unidades disponíveis: %d)\n", estoque[escolha]);            
                printf("Digite a quantidade: \n");
                scanf("%d", &qtd);
                if(estoque[escolha] <= 0 || estoque[escolha] < qtd){
                    printf("Estoque Insuficiente\n");
                    break;
                }else{
                    flag[2] += qtd;
                }                
                total = total + 10.50 * qtd;
                printf("Carrinho: R$%.2f\n", total);
                printf(" \n");
                break;

            case 3:
                printf("Você selecionou: Pastilhas de Freio (unidades disponíveis: %d)\n", estoque[escolha]);            
                printf("Digite a quantidade: \n");
                scanf("%d", &qtd);
                if(estoque[escolha] <= 0 || estoque[escolha] < qtd){
                    printf("Estoque Insuficiente\n");
                    printf(" \n");
                    break;
                }else{
                    flag[3] += qtd;
                }
                total = total + 50 * qtd;
                printf("Carrinho: R$%.2f\n", total);
                printf(" \n");
                break;  

            case 4:
                printf("Você selecionou: Filtro de Ar (unidades disponíveis: %d)\n", estoque[escolha]);            
                printf("Digite a quantidade: \n");
                scanf("%d", &qtd);   
                if(estoque[escolha] <= 0 || estoque[escolha] < qtd){
                    printf("Estoque Insuficiente\n");
                    printf(" \n");
                    break;
                }else{
                    flag[4] += qtd;
                }
                total = total + 15.99 * qtd;
                printf("Carrinho: R$%.2f\n", total);
                printf(" \n");
                break;

            case 5:
                printf("Você selecionou: Bateria (unidades disponíveis: %d)\n", estoque[escolha]);            
                printf("Digite a quantidade: \n");
                scanf("%d", &qtd);
                
                if(estoque[escolha] <= 0 || estoque[escolha] <= carrinho){
                    printf("Estoque Insuficiente\n");
                    printf(" \n");
                    break;
                }
                else{
                    flag[5] += qtd;
                }
                total = total + 80 * qtd;
                printf("Carrinho: R$%.2f\n", total);
                printf(" \n");
                break;  

            case 6:
                printf("Você selecionou: Alternador (unidades disponíveis: %d)\n", estoque[escolha]);            
                printf("Digite a quantidade: \n");
                scanf("%d", &qtd);                
                if(estoque[escolha] <= 0 || estoque[escolha] <= carrinho){
                    printf("Estoque Insuficiente\n");
                    printf(" \n");
                    break;
                }
                else{
                    flag[6] += qtd;
                }
                total = total + 150 * qtd;
                printf("Carrinho: R$%.2f\n", total);
                printf(" \n");
                break;  

            case 7:
                printf("Você selecionou: Pneus (unidades disponíveis: %d)\n", estoque[escolha]);            
                printf("Digite a quantidade: \n");
                scanf("%d", &qtd);                
                if(estoque[escolha] <= 0 || estoque[escolha] <= carrinho){
                    printf("Estoque Insuficiente\n");
                    printf(" \n");
                    break;
                }
                else{
                    flag[7] += qtd;
                }
                total = total + 300 * qtd;
                printf("Carrinho: R$%.2f\n", total);
                printf(" \n");
                break;

            case 8:
                printf("Você selecionou: Calotas (unidades disponíveis: %d)\n", estoque[escolha]);            
                printf("Digite a quantidade: \n");
                scanf("%d", &qtd);
                if(estoque[escolha] <= 0 || estoque[escolha] <= carrinho){
                    printf("Estoque Insuficiente\n");
                    printf(" \n");
                    break;
                }
                else{
                    flag[8] += qtd;
                }
                total = total + 50 * qtd;
                printf("Carrinho: R$%.2f\n", total);
                printf(" \n");
                break;

            case 9:
                printf("Você selecionou: Faróis (unidades disponíveis: %d)\n", estoque[escolha]);            
                printf("Digite a quantidade: \n");
                scanf("%d", &qtd);
                if(estoque[escolha] <= 0 || estoque[escolha] <= carrinho){
                    printf("Estoque Insuficiente\n");
                    printf(" \n");
                    break;
                }
                else{
                    flag[9] += qtd;
                }
                total = total + 299.90 * qtd;
                printf("Carrinho: R$%.2f\n", total);
                printf(" \n");
                break;

            case 10:
                if(total >= 300){
                    sub_estoque(flag, estoque);
                    printf("Total: R$%.2f. Desconto de R$%.2f \n", total - (total * 0.05), total * 0.05);
                    printf(" \n");
                    total = total - (total * 0.05);
                    pagar(total);
                }
                else{
                    sub_estoque(flag, estoque);
                    printf("Total: R$%.2f\n", total);
                    printf(" \n");
                    pagar(total);
                }
                break;  

            case 11:
                printf("Voltando para o menu inicial...\n");
                printf(" \n");
                break;
                
            default:
                printf("Escolha Inválida!\n");
                printf(" \n");
                break;
        }
    printf("\n");
    }
    return 0;
}