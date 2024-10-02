#include <stdio.h>
#include <string.h>

// Définition de la structure Livre
struct Livre {
    char titre[100];
    char auteur[100];
    int annee;
};

// Fonction qui retourne une variable Livre initialisée
struct Livre creerLivre(char titre[], char auteur[], int annee) {
    struct Livre nouveauLivre;
    
    // Initialisation des champs de la structure
    strcpy(nouveauLivre.titre, titre);
    strcpy(nouveauLivre.auteur, auteur);
    nouveauLivre.annee = annee;

    return nouveauLivre;  // Retourner la structure initialisée
}

int main() {
    // Créer un livre en utilisant la fonction creerLivre
    struct Livre monLivre = creerLivre("Antigone", "Hugo", 1943);

    // Afficher les informations du livre
    printf("Titre: %s\n", monLivre.titre);
    printf("Auteur: %s\n", monLivre.auteur);
    printf("Annee: %d\n", monLivre.annee);

    return 0;
}
