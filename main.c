#include <stdio.h>
#include <stdlib.h>

#define NOMBRE_CARACTERE 16

int main()
{
    int nombreAmis = 0;
    char* listepseudoAmis = NULL;

    printf("Entrer votre nombre d'ami(e)s : ");
    scanf("%d", &nombreAmis);

    if(nombreAmis > 0) {
        listepseudoAmis = malloc(nombreAmis * sizeof(char) * NOMBRE_CARACTERE);

        if(listepseudoAmis == NULL) {
            exit(0);
        }

        for(int i = 0; i < nombreAmis; i++) {
            printf("Pseudo ami(e) : ");
            scanf("%s", listepseudoAmis + i * NOMBRE_CARACTERE);
        }
    }

    for(int i = 0; i < nombreAmis; i++) {
        char pseudo[NOMBRE_CARACTERE] = "";
        for(int j = 0; j < NOMBRE_CARACTERE; j++) {
            pseudo[j] = listepseudoAmis[i * NOMBRE_CARACTERE + j];
        }
        printf("Pseudo %d: %s\n", i + 1, pseudo);
    }

    free(listepseudoAmis);
}
