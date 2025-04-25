#include <stdio.h>
#include "rascheti.h"
int main() {
    double a, b, c;

    printf("vvedite dlinu storon a, b and c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Chisla pishi.\n");
        return 1;
    }

    if (!proverka(a, b, c)) {
        printf("Takogo treugolnika ne sushestvuet.\n");
        return 2;
    }

    printf("Perimetr: %.2f\n", perimetr(a, b, c));
    printf("Ploshad: %.2f\n", ploshad(a, b, c));

    return 0;
}
