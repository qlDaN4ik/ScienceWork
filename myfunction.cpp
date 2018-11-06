#include "myfunction.h"

bool equal(double a, double b)
{
    if (fabs(a - b) < 0.000001)
        return true;
    else
        return false;
}

double bellShaped(double x)
{
    double result = 0;
    if (x * x <= 5)
        result = 0.335 - 0.067 * x * x;
    return result;
}

double Parabola(double x)
{
    double result;
    result = -(x - 1) * (x - 1);
    return result;
}

double Multiextremal(double x)
{
    double result;
    result = (0.05 * (x - 1.) * (x - 1.) + (3. - 2.9 * exp(-2.77257 * x * x))
              * (1 - cos(x * (4. - 50 * exp(-2.77257 * x * x)))));
    return result;
}

double Multiextremal2(double x)
{
    double result;
    result = 1.-0.5*cos(1.5 * (10. * x - 0.3)) * cos(31.4 * x)
            + 0.5 * cos(sqrt(5.) * 10. * x) * cos(35. * x);
    return result;
}

double Wave(double x)
{
    double result;
    result = (exp(-x * x) + 0.01 * cos(200 * x));
    return result;
}
