#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int n = 0;
    int achou = 0;
    char entrada[121];
    char subcadeia[121];
    char linha[121];

    FILE *fp;
    printf("Digite o nome do arquivo de entrada:\t");
    scanf("%120s", entrada);
    printf("\nDigite a subcadeia:\t");
    scanf("%120s", subcadeia);

    fp = fopen(entrada, "rt");
        if(fp == NULL){
            printf("Erro, arquivo não encontrado");
            exit(1);
        }

    while(fgets(linha, 121, fp) != NULL){
        n++;
        if(strstr(linha, subcadeia) != NULL){
            achou = 1;
            break;
        }
    }

    fclose(fp);

    if(achou){
        printf("Achou na linha %d\n", n);
    }
    else{
        printf("Nao achou");
    }

    return 0;
}
