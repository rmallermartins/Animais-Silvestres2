#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arvoreB.h"
#include "manipulaArquivos.h"

void criaArvoreB{
    FILE *arvoreb = abrirArq(arvoreb, "r+");
    
    header = malloc(sizeof(offsetRaiz));
    
    
}

char *buscaArvoreB(int rrn,int chave, int offset){
    FILE *arvoreb = abrirArq(arvoreb, "r+");
    char buffer[sizeof(int)];
    pagina *page;
    page = malloc(sizeof(pagina));
    
    if rrn == NULL{
        return(nao);
    } else {
        fseek(arvoreb,sizeof(offsetRaiz) + (rrn * sizeof(pagina)),SEEK_SET);
        while (buffer = fgetc(arvoreb) != "|") {
            
}


