#ifndef GEOMETRIA_H
#define GEOMETRIA_H

#ifndef CMATH_H
#define CMATH_H
#include <cmath>
#endif

class Geometria
{
public:
    static double areaTrapecio(double baseMayor, double baseMenor, double altura);
    static double areaTriangulo(double base, double altura);
    static double areaCuadrado(double lado);
    static double areaRectangulo(double base, double altura);
    static double areaCirculo(double radio);
};

#endif // GEOMETRIA_H
