#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *fp;
    fp = fopen("entrada.txt","wt");
    if(fp == NULL){
        printf("Erro, arquivo nao encontrado\n");
        exit(1);
    }
    else{
        printf("Arquivo criado\n");
    }

    int valor = fclose(fp);

    if(valor != 0){
        printf("Nao foi possivel fechar o arquivo\n");
    }
    else{
        printf("Arquivo fechado");
    }
    return 0;
}
