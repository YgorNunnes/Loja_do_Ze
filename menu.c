#include <stdio.h>
#include <string.h>
#include "menu.h"

int estoque[10] = {0};
float vet_crediario[10] = {0};

int consultar_estoque();
void preencher_estoque();
int comprar();
int contusta_debitos();
int pagar_debitos();
void sorteio(float vet_crediario[]);

int main(){
    int opc_menu;
    printf(" \n");
    printf("Bem vindo ao Ferro Velho do Zé!\n");
    printf("Escolha o que deseja fazer pelo menu: \n");
    printf(" \n");


    while(opc_menu != 0){
        printf("---------------------Menu---------------------\n");
        printf("1 - Comprar \n");
        printf("2 - Consultar débitos\n");
        printf("3 - Preencher estoque\n");
        printf("4 - Consultar estoque\n");
        printf("5 - Pagar débitos\n");
        printf("6 - Sortear um cliente para perdoar as dívidas\n");
        printf("0 - Sair\n");
        printf(" \n");

        scanf("%d", &opc_menu);

        switch(opc_menu){
            case 0:
                printf("Saindo...\n");
                return 0;
            case 1:
                printf("Abrindo menu compras...\n");
                printf(" \n");
                comprar();
                break;
            case 2:
                printf("Abrindo Consulta de Débitos...\n");
                printf(" \n");
                consulta_debitos();
                break;
            case 3:
                printf("Abrindo Preenchimento de Estoque...\n");
                printf(" \n");
                preencher_estoque();
                break;
            case 4:
                printf("Abrindo Consulta de Estoque...\n");
                printf(" \n");
                consultar_estoque();
                break;
            case 5:
                printf("Abrindo Quitação de Débitos...\n");
                printf(" \n");
                pagar_debitos();
                break;
            case 6:
                printf("Sorteando...\n");
                printf(" \n");
                sorteio(vet_crediario);
                break;
            }
        }
    return 0;
}
