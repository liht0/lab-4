#include <math.h>
#include "rascheti.h"
int proverka(double a, double b, double c) {
    return (a > 0 && b > 0 && c > 0 &&
            a + b > c &&
            a + c > b &&
            b + c > a);
}
double perimetr(double a, double b, double c) {
    return a + b + c;
}


double ploshad(double a, double b, double c) {
    double hp = perimetr(a, b, c) / 2;
    return sqrt(hp * (hp - a) * (hp - b) * (hp - c));
}
