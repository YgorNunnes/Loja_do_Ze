#ifndef MENU_H
#define MENU_H

int main();
int comprar();
int pagar(float valor);
void preencher_estoque();
int consulta_debitos();
int pagar_debitos();
void sorteio(float vet_crediario[]);


extern int estoque[10];
extern float vet_crediario[10];


#endif