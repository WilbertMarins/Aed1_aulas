#include <iostream>
#include<stdlib.h>

using namespace std;
typedef struct elemento{
int dado;
struct elemento *prox;
}no;

void criaLista(no **cabeca);

int main()
{
    no *cabeca,*novo;
    int op;
    criaLista(&cabeca);

    do{
        cout<< "1-Inserir "<<endl;
        cout<< "2-Excluir "<<endl;
        cout<< "3-Mostrar "<<endl;
        cout<< "4-Vazia? "<<endl;
        cout<< "Informe ?"<<endl;
        cin>>op;

        if(op==1){
            novo=(no*)malloc(sizeof(no));
            if (novo==NULL){
                cout<<"Erro!!"<<endl;
                return 1;
            }
            cout<<"Informe um valor"<<endl;
            cin>>novo->dado;
            novo->prox = NULL;
        }
}while(op!=6);
free(novo);
return 0;
}

void criaLista(no **cabeca){
    (*cabeca)=NULL;
}
