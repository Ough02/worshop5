#include <stdio.h>

#define MAX_NOTES 5  // Définir le nombre maximum de notes

// Définition de la structure Etudiant
struct Etudiant {
    char nom[50];
    char prenom[50];
    int notes[MAX_NOTES];  // Tableau pour stocker les notes
};

int main() {
    // Déclaration d'une variable de type Etudiant
    struct Etudiant etudiant;

    // Assigner des valeurs aux champs nom et prenom via l'entrée utilisateur
    printf("Entrez le nom de l'étudiant: ");
    scanf("%s", etudiant.nom);  // Lire le nom

    printf("Entrez le prenom de l'étudiant: ");
    scanf("%s", etudiant.prenom);  // Lire le prénom

    // Assigner des valeurs aux notes
    printf("Entrez les %d notes de l'étudiant:\n", MAX_NOTES);
    for (int i = 0; i < MAX_NOTES; i++) {
        printf("Note %d: ", i + 1);
        scanf("%d", &etudiant.notes[i]);  // Lire les notes
    }

    // Afficher les informations de l'étudiant
    printf("\nInformations de l'étudiant:\n");
    printf("Nom: %s\n", etudiant.nom);
    printf("Prenom: %s\n", etudiant.prenom);
    
    // Afficher les notes
    printf("Notes: ");
    for (int i = 0; i < MAX_NOTES; i++) {
        printf("%d ", etudiant.notes[i]);
    }
    printf("\n");

    return 0;
}