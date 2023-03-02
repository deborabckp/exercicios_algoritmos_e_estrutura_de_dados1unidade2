#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void){
    int c;
    char entrada[121];
    char saida[121];
    FILE *e;
    FILE *s;
    
    printf("Digite o nome do arquivo de entrada:\t");
    scanf("%120s", entrada);
    printf("Digite o nome do arquivo de saida:\t");
    scanf("%120s", saida);

    e = fopen(entrada, "rt");
    if(e == NULL){
        printf("Erro, arquivo nao encontrado\n");
        exit(1);
    }
    
    s = fopen(saida, "wt");
    if(s == NULL){
        printf("Erro, arquivo nao encontrado\n");
        fclose(e);
        exit(1);
    }

    while((c = fgetc(e)) != EOF){
        fputc(toupper(c), s);
    }

    fclose(e);
    fclose(s);

    return 0;
}
