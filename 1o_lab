#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * arq;
    char caractere,arq_aux,nome[30];
    int idade1,idade2;
    arq = fopen("texto.txt","r");
    if(arq==NULL){
        printf("Erro na abertura do arquivo");
        return 0;
    }
    arq_aux = fscanf(arq,"%d %d %s",&idade1,&idade2,&nome);
    while(arq_aux != EOF){
        printf("%d ",idade1);
        printf("%d ",idade2);
        printf("%s\n",nome);
        arq_aux = fscanf(arq,"%d %d %s",&idade1,&idade2,&nome);
}
    /*putc('z',arq);//adc o caractere //adc o que eu quiser
    fprintf(arq,"\n %d %d %s",1428,1825,"Will");
    fprintf(arq,"\n %d %d %s",1542,1625,"Nay");
    fprintf(arq,"\n %d %d %s",1424,1525,"Enri");*/

    /*caractere=getc(arq);
    while(caractere!=EOF){
        printf("%c",caractere);
        caractere=getc(arq);
    }*/

    fclose(arq);
    return 0;
}
