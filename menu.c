#include <stdio.h>
#include <string.h>
#include "menu.h"

char *produtos[10] = {"Radiador","Velas de Ignição","Filtro de Óleo", "Pastilhas de Freio", 
"Filtro de Ar", "Bateria", "Alternador", "Pneus", "Calotas", "Faróis"};

int estoque[10];// = {100,100,100,100,100,100,100,100,100,100};

float vet_crediario[10];
int consultar_estoque();
int preencher_estoque();

int main(){
    int opc_menu;
    float precos[10];
    
    printf("Bem vindo ao Ferro Velho do Zé!\n");
    printf("Escolha o que deseja fazer pelo menu: \n");
    printf(" \n");

    //max_estoque(estoque);

    while(1){
        printf("---------------------Menu---------------------\n");
        printf("1 - Comprar \n");
        printf("2 - Consultar débitos\n");
        printf("3 - Preencher estoque\n");
        printf("4 - Consultar estoque\n");
        printf("5 - Pagar débitos\n");
        printf("6 - Sortear um cliente para perdoar as dívidas\n");
        printf("0 - Sair\n");

        scanf("%d", &opc_menu);

        switch(opc_menu){
            case 0:
                printf("Saindo...\n");
                return 0;
            case 1:
                printf("Abrindo menu compras...\n");
                return comprar();
                /*
            case 2:
                printf("Abrindo Consulta de Débitos...");
                return contulta_debitos();
                break;*/
            case 3:
                printf("Abrindo Preenchimento de Estoque...");
                return preencher_estoque();
            case 4:
                printf("Abrindo Consulta de Estoque...");
                return consultar_estoque();
                /*
            case 5:
                printf("Abrindo Quitação de Débitos...");
                return pagar_debitos();
                break;
            case 6:
                printf("Sorteando...");
                return sorteio();
                break;*/
            }
        }
    return 0;
}
