#ifndef ELEMENTREP_H
#define ELEMENTREP_H

typedef struct element{
    char * chemin;
    element parent;
    int adresseInode = -1;
} element;


#endif
