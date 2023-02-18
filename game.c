#include <stdio.h>
#include <stdlib.h>  
#include <time.h>   

int main() {
    srand((unsigned int)time(NULL));
    int Number = rand() % 100 + 1;
    int yourn = 0;

    printf("%d \n", Number);
    printf("Un nombre aleatoire a ete genere. Entrez un nombre pour essayer de le trouver : \n");
    scanf_s("%d", &yourn);
    while (Number != yourn) // utilisation de l'opérateur de comparaison !=
    {
        printf("Vous n'avez pas trouve le bon nombre, reessayez : ");
        scanf_s("%d", &yourn);
    }
    printf("Vous avez gagne, felicitations !\n");
    return 0;
}