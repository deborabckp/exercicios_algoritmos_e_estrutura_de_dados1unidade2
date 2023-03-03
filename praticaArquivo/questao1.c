#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    float n1, n2, n3, media = 0;
    char nome[100];
    char linha[100];
    FILE *e;
    FILE *s;

    e = fopen("entrada.txt", "r");
        if(e == NULL){
            printf("Erro");
            exit(1);
        }

    s = fopen("saida.txt", "w");
        if(s == NULL){
            printf("Erro");
            exit(1);
        }

    while (fgets(linha,100,e) != NULL){
        sscanf(linha, "%20[^\t]\t%f\t%f\t%f", nome, &n1, &n2, &n3);
        media = (n1 + n2 + n3)/3;
        printf("%f\n",media);
        fprintf(s, "%s\t%.1f\t %s\n", nome, media, (media>=7.0)?"aprovado":"reprovado");

    }

    fclose(e);
    fclose(s);

    return 0;
}
