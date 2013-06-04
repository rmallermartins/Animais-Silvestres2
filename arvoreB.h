#ifndef ARVOREB_H
#define ARVOREB_H

#define ordem 5

typedef struct pagina {
        int numeroChaves;
        int chaves[ordem-1];
        int offsets[ordem-1];
        int filhos[ordem];
} pagina;

typedef int offsetRaiz;

#endif
