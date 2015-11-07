#include "ErrorHandler.h"
#include "string.h"


int verifierCheminAbsolu(char * chemin){
    if (strlen(chemin) > 40){
        printf("\nLe chemin absolu est trop long : 40 caracteres maximum.\n");
        return 1;
    }
    return 0;
}

int verifierExist(char * chemin){
    return 0;
}

int verifierRepParent(char * chemin){
    char * nom = strrchr(chemin, '/');
    if (!nom){
        return 0;
    }

    if (!strcmp(nom, chemin)){
        return 1;
    }
    char tmp[50];
    int lenNom = strlen(nom);
    int len = strlen(tmp);

    int pos = len - lenNom;

    strncpy(tmp, chemin, pos);

   // tmp[pos + 1] = '\0';
    printf("%s", tmp);



    return 0;
}

int verifierFicVide(char * chemin){
    return 0;
}

int verifierFicVolume(char * chemin){
    return 0;
}
