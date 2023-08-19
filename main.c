#include <stdio.h>

int main() {
    int m, n, p, q;

    // Demander les dimensions de la première matrice
    printf("Entrez le nombre de lignes et de colonnes de la première matrice : ");
    scanf("%d %d", &m, &n);

    // Demander les dimensions de la deuxième matrice
    printf("Entrez le nombre de lignes et de colonnes de la deuxième matrice : ");
    scanf("%d %d", &p, &q);

    // Vérifier si la multiplication est possible
    if (n != p) {
        printf("La multiplication de matrices n'est pas possible.\n");
        return 1;
    }

    // Saisir les éléments de la première matrice
    int matrice1[m][n];
    printf("Saisissez les éléments de la première matrice :\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrice1[i][j]);
        }
    }

    // Saisir les éléments de la deuxième matrice
    int matrice2[p][q];
    printf("Saisissez les éléments de la deuxième matrice :\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &matrice2[i][j]);
        }
    }

    // Calculer le produit des matrices
    int produit[m][q];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            produit[i][j] = 0;
            for (int k = 0; k < n; k++) {
                produit[i][j] += matrice1[i][k] * matrice2[k][j];
            }
        }
    }

    // Afficher le produit des matrices
    printf("Le produit des matrices est :\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d ", produit[i][j]);
        }
        printf("\n");
    }

    return 0;
}
