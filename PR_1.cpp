#include <stdio.h>
#include <math.h>


float calculate(float x, int k, float M, int i);



int main()
{
    int i;
    float x, calculated, M;

    printf("Enters two numbers: ");
    scanf_s("%f %d %f", &x, &i, &M);
    calculated = calculate(x, 2, M, i);
    printf("calculated = %f", calculated);
    return 0;
}

float calculate(float x, int k, float M, int i)
{   

    float F;
    if (k <= i)
    {
        M *= -1 * (x * (2 * k - 3) / (2 * k - 2));
        k++;
        F = calculate(x, k, M, i); 
    }
    else 
    {
        F = 1.0 - M;
    }
    F += M;
    return F;
}   