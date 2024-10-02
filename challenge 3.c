#include <stdio.h>

// Définition de la structure Rectangle
struct Rectangle {
    float longueur;
    float largeur;
};

// Fonction pour calculer l'aire d'un rectangle
float calculerAire(struct Rectangle rect) {
    return rect.longueur * rect.largeur;  // Aire = longueur * largeur
}

int main() {
    // Déclaration d'une variable de type Rectangle
    struct Rectangle monRectangle;

    // Lecture des valeurs de longueur et largeur
    printf("Entrez la longueur du rectangle: ");
    scanf("%f", &monRectangle.longueur);

    printf("Entrez la largeur du rectangle: ");
    scanf("%f", &monRectangle.largeur);

    // Calcul et affichage de l'aire
    float aire = calculerAire(monRectangle);
    printf("L'aire du rectangle est: %.2f\n", aire);

    return 0;
}
