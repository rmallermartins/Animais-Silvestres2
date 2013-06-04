#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "especies.h"
#include "manipulaArquivos.h"

void inserirEspecie(){
     
}

void buscarEspecie(){
     
}

void removerEspecie(){
     
}

void importarEspecies(){
     int id;
     char nomeCientifico[100];
     char nomePopular[100];
     char descricao[1000];
     char arquivoImportacao[100];
     
     system("clear");
     printf("\n***Importação de Dados de Espécie***");
     
     FILE *arquivoImportado = abrirArq(especiesImportacao, "r+");
     FILE *arquivo = abrirArq(especies, "r+");
     
     while (fgets(linha,1001,arquivoImportacao)!=NULL){
            fprintf(arquivo,"%d\n%s\n%s\n%s\n#\n",id,nomeCientifico,nomePopular,descricao);
     }
     
     fclose(arquivoImportacao);
     fclose(arquivo);
     
     printf("Arquivos Importados. Precione ENTER para continuar");
     while (getchar()!='\n');
}
