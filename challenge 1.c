#include <stdio.h>

int main() {
    
    typedef struct {
        char nom[25];
        char prenom[25];
        int age;
    } Personne;

    Personne p1 = {"OUGHLANE", "Med", 20};

    printf("Nom: %s, Prénom: %s, Âge: %d\n", p1.nom, p1.prenom, p1.age);

    return 0;
}
