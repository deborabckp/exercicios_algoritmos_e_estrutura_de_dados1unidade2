#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    FILE *fp;
    int s;
    fp = fopen("entrada.txt", "r");
    if(fp == NULL){
        printf("Erro");
        exit(1);
    }

    s = fgetc(fp);

    printf("%s", s);

    fclose(fp);

    return 0;
}
