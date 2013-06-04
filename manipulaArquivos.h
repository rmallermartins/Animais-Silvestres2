#ifndef MANIPULAARQUIVOS_H
#define MANIPULAARQUIVOS_H

#include <stdio.h>

#define arquivos "Arquivos/"

#define especies arquivos"especies.txt"

#define arvoreb arquivos"arvoreb.txt"

#define especieImportacao arquivos"especiesImportacao.txt"

void verificaPasta(char *nome);

void verificaArquivo(char *nome);

FILE *abrirArq(char *arquivo, char *tipoAbertura);

#endif
