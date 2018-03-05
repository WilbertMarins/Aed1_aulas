#include <stdio.h>
#include <stdlib.h>
#define MAX 2
typedef struct {
char nome[30];
char end[40];
char rg[10];
char fone[12];
}tCliente;
int main(){

FILE * arqCliente;
tCliente vetCli[MAX], vetLeCli[MAX];
int retorno;
//Abrindo o arquivo binário
arqCliente = fopen("dadosCli.bin","w+b");
if (arqCliente == NULL){
    printf("\nErro na abertura do arquivo!!");
}

//lendo uma coleção de clientes do teclado
for(int i = 0; i < MAX; i++){
puts("Nome ? ");
gets(vetCli[i].nome);
puts("Endereco ? ");
gets(vetCli[i].end);
puts("Telefone ? ");
gets(vetCli[i].fone);
puts("RG ? ");
gets(vetCli[i].rg);

}

puts("Gravando .....");

for(int i = 0; i < MAX; i++){

    retorno =fwrite(&vetCli[i],sizeof(tCliente),1,arqCliente);

if (retorno != 1){

puts("Erro na escrita do arquivo!!!");
}
}
rewind(arqCliente);

puts("Lendo .....");
for(int i = 0; i < MAX; i++){

retorno =fread(&vetLeCli[i],sizeof(tCliente),1,arqCliente);
if (retorno != 1){
    if (feof(arqCliente)){
        break;

}
puts("Erro na escrita do leitura!!!");

}
}

puts("Mostrando dados .....");
for(int i = 0; i < MAX; i++){
    printf("\nNome: %s",vetLeCli[i].nome);
    printf("\nEndereco: %s",vetLeCli[i].end);
    printf("\nFone: %s",vetLeCli[i].fone);
    vn printf("\nRG: %s",vetLeCli[i].rg);

}

fclose(arqCliente);

}
