#include "Geometria.h"

double Geometria::areaTrapecio(double baseMayor, double baseMenor, double altura)
{
    return ((baseMenor + baseMayor) / 2) * altura;
}

double Geometria::areaTriangulo(double base, double altura)
{
    return (base * altura) / 2;
}

double Geometria::areaCuadrado(double lado)
{
    return (lado * lado);
}

double Geometria::areaRectangulo(double base, double altura)
{
    return (base * altura);
}

double Geometria::areaCirculo(double radio)
{
    return M_PI * (radio * radio);
}
