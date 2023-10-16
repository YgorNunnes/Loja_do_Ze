#include <stdio.h>
#include "menu.h"

void zerar_estoque(int arr[]) {
    for (int i = 0; i < 10; i++) {
        arr[i] = 0;
    }
}

void max_estoque(int arr[]) {
    for (int i = 0; i < 10; i++) {
        arr[i] = 100;
    }
}

void finalizar(float total){
    if(total >= 300){
        printf("Total: %.2f. Desconto de %.2f \n", total, total * 0.05);
        total = total - (total * 0.05);
        pagar(total);
    }
    else{
        printf("Total: %.2f\n", total);
        pagar(total);
    }
}

int preencher_estoque(){
    int cod = 0, qtd_repor = 0;

    while(cod != 11){
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
        printf("Cód 10. Todos (100 und)\n");
        printf("11. Finalizar\n");
        printf(" \n");
        scanf("%d", &cod);

        if ((cod >= 0) && (cod <= 9)) {
            printf("Digite a quantidade desejada:\n");
            scanf("%d", &qtd_repor);
            estoque[cod] += qtd_repor;
            printf("%d unidades adicionadas de %s.\n", estoque[cod], produtos[cod]);
        }

        else if(cod == 10){
            max_estoque(estoque);
        }
        else if(cod == 11){
            printf("Finalizando... \n");
            return main();
        }
        else{
            printf("Código inválido! \n");
        }
    }  
}



int comprar() {
    int escolha = -1, carrinho, qtd = 0;
    float total = 0;
    
    printf("Bem-vindo ao Menu de Vendas do Ferro Velho do Zé!\n");
    printf("Desconto de 5%% para compras acima de R$300\n");
    printf("-------------------------------------------\n");
    
    while (escolha != 11) {
        printf("Digite o código do produto:\n");
        printf("Cód 0. Radiador - R$200\n");
        printf("Cód 1. Velas de Ignição - R$20\n");
        printf("Cód 2. Filtro de Óleo - R$10\n");
        printf("Cód 3. Pastilhas de Freio - R$50\n");
        printf("Cód 4. Filtro de Ar - R$15\n");
        printf("Cód 5. Bateria - R$80\n");
        printf("Cód 6. Alternador - R$150\n");
        printf("Cód 7. Pneu - R$300 \n");
        printf("Cód 8. Calotas - R$50 cada\n");
        printf("Cód 9. Faróis - R$290\n");
        printf("10. Finalizar\n");
        printf("11. Cancelar\n");
        printf(" \n");
        scanf("%d", &escolha);

        //printf("%d mamoes", estoque[escolha]);

        switch (escolha) {
            case 0:
                printf("Você selecionou: %s (unidades disponíveis: %d)\n", produtos[escolha], estoque[escolha]);            
                printf("Digite a quantidade: \n");
                scanf("%d", &qtd);
                if(estoque[escolha] <= 0 || estoque[escolha] <= carrinho){
                    //printf("###%d ###%d", estoque[escolha], carrinho);
                    printf("Estoque Insuficiente");
                    break;
                }
                carrinho = carrinho + qtd;
                total = total + 200 * qtd;
                printf("Carrinho: R$%.2f\n", total);
                estoque[escolha] = estoque[escolha] - carrinho; 
                //printf("## quantia restante: %d\n", estoque[escolha]);
                break;   
            case 1:
                printf("Você selecionou: %s (unidades disponíveis: %d)\n", produtos[escolha], estoque[escolha]);            
                printf("Digite a quantidade: \n");
                scanf("%d", &qtd);
                if(estoque[escolha] <= 0 || estoque[escolha] <= carrinho){
                    //printf("###%d ###%d", estoque[escolha], carrinho);
                    printf("Estoque Insuficiente");
                    break;
                }
                carrinho = carrinho + qtd;
                total = total + 20 * qtd;
                printf("Carrinho: R$%.2f\n", total);
                estoque[escolha] = estoque[escolha] - carrinho; 
                //printf("## quantia restante: %d\n", estoque[escolha]);
                break;
            case 2:
                printf("Você selecionou: %s (unidades disponíveis: %d)\n", produtos[escolha], estoque[escolha]);            
                printf("Digite a quantidade: \n");
                scanf("%d", &qtd);
                if(estoque[escolha] <= 0 || estoque[escolha] <= carrinho){
                    //printf("###%d ###%d", estoque[escolha], carrinho);
                    printf("Estoque Insuficiente");
                    break;
                }
                carrinho = carrinho + qtd;
                total = total + 10 * qtd;
                printf("Carrinho: R$%.2f\n", total);
                estoque[escolha] = estoque[escolha] - carrinho; 
                //printf("## quantia restante: %d\n", estoque[escolha]);
                break;
            case 3:
                printf("Você selecionou: %s (unidades disponíveis: %d)\n", produtos[escolha], estoque[escolha]);            
                printf("Digite a quantidade: \n");
                scanf("%d", &qtd);
                if(estoque[escolha] <= 0 || estoque[escolha] <= carrinho){
                    //printf("###%d ###%d", estoque[escolha], carrinho);
                    printf("Estoque Insuficiente");
                    break;
                }
                carrinho = carrinho + qtd;
                total = total + 50 * qtd;
                printf("Carrinho: R$%.2f\n", total);
                estoque[escolha] = estoque[escolha] - carrinho; 
                //printf("## quantia restante: %d\n", estoque[escolha]);
                break;  
            case 4:
                printf("Você selecionou: %s (unidades disponíveis: %d)\n", produtos[escolha], estoque[escolha]);            
                printf("Digite a quantidade: \n");
                scanf("%d", &qtd);
                if(estoque[escolha] <= 0 || estoque[escolha] <= carrinho){
                    //printf("###%d ###%d", estoque[escolha], carrinho);
                    printf("Estoque Insuficiente");
                    break;
                }
                carrinho = carrinho + qtd;
                total = total + 15 * qtd;
                printf("Carrinho: R$%.2f\n", total);
                estoque[escolha] = estoque[escolha] - carrinho; 
                //printf("## quantia restante: %d\n", estoque[escolha]);
                break;
            case 5:
                printf("Você selecionou: %s (unidades disponíveis: %d)\n", produtos[escolha], estoque[escolha]);            
                printf("Digite a quantidade: \n");
                scanf("%d", &qtd);
                if(estoque[escolha] <= 0 || estoque[escolha] <= carrinho){
                    //printf("###%d ###%d", estoque[escolha], carrinho);
                    printf("Estoque Insuficiente");
                    break;
                }
                carrinho = carrinho + qtd;
                total = total + 80 * qtd;
                printf("Carrinho: R$%.2f\n", total);
                estoque[escolha] = estoque[escolha] - carrinho; 
                //printf("## quantia restante: %d\n", estoque[escolha]);
                break;  
            case 6:
                printf("Você selecionou: %s (unidades disponíveis: %d)\n", produtos[escolha], estoque[escolha]);            
                printf("Digite a quantidade: \n");
                scanf("%d", &qtd);
                if(estoque[escolha] <= 0 || estoque[escolha] <= carrinho){
                    //printf("###%d ###%d", estoque[escolha], carrinho);
                    printf("Estoque Insuficiente");
                    break;
                }
                carrinho = carrinho + qtd;
                total = total + 150 * qtd;
                printf("Carrinho: R$%.2f\n", total);
                estoque[escolha] = estoque[escolha] - carrinho; 
                //printf("## quantia restante: %d\n", estoque[escolha]);
                break;  
            case 7:
                printf("Você selecionou: %s (unidades disponíveis: %d)\n", produtos[escolha], estoque[escolha]);            
                printf("Digite a quantidade: \n");
                scanf("%d", &qtd);
                if(estoque[escolha] <= 0 || estoque[escolha] <= carrinho){
                    //printf("###%d ###%d", estoque[escolha], carrinho);
                    printf("Estoque Insuficiente");
                    break;
                }
                carrinho = carrinho + qtd;
                total = total + 300 * qtd;
                printf("Carrinho: R$%.2f\n", total);
                estoque[escolha] = estoque[escolha] - carrinho; 
                //printf("## quantia restante: %d\n", estoque[escolha]);
                break;
            case 8:
                printf("Você selecionou: %s (unidades disponíveis: %d)\n", produtos[escolha], estoque[escolha]);            
                printf("Digite a quantidade: \n");
                scanf("%d", &qtd);
                if(estoque[escolha] <= 0 || estoque[escolha] <= carrinho){
                    //printf("###%d ###%d", estoque[escolha], carrinho);
                    printf("Estoque Insuficiente");
                    break;
                }
                carrinho = carrinho + qtd;
                total = total + 50 * qtd;
                printf("Carrinho: R$%.2f\n", total);
                estoque[escolha] = estoque[escolha] - carrinho; 
                //printf("## quantia restante: %d\n", estoque[escolha]);
                break;
            case 9:
                printf("Você selecionou: %s (unidades disponíveis: %d)\n", produtos[escolha], estoque[escolha]);            
                printf("Digite a quantidade: \n");
                scanf("%d", &qtd);
                if(estoque[escolha] <= 0 || estoque[escolha] <= carrinho){
                    //printf("###%d ###%d", estoque[escolha], carrinho);
                    printf("Estoque Insuficiente");
                    break;
                }
                carrinho = carrinho + qtd;
                total = total + 290 * qtd;
                printf("Carrinho: R$%.2f\n", total);
                estoque[escolha] = estoque[escolha] - carrinho; 
                //printf("## quantia restante: %d\n", estoque[escolha]);
                break;
            case 10:
                finalizar(total);
                break;  

            case 11:
                printf("Voltando para o menu inicial...\n");
                break;
            default:
                printf("Escolha Inválida!");
                break;
        }
    printf("\n");
    }
    return main();
}