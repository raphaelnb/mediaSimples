#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // armazena os valores de entrada para p(provas), t(trabalho), l(listas)
    float p1, p2, p3;
    float t;
    float l1, l2, l3, l4, l5;

    // recebe os valores para as provas 1, 2 e 3
    do {
        scanf("%f %f %f", &p1, &p2, &p3);
    }
    while (0 >p1>10 || 0>p2>10 || 0>p3>10);
  
    // recebe o valor para o Trabalho
    do {
        scanf("\n%f", &t);
    } 
    while (0 > t > 10);
    // recebe os valores para as listas 1, 2, 3, 4 e 5
    do {
        scanf("\n%f %f %f %f %f", &l1, &l2, &l3, &l4, &l5);    
    }
    while (0>l1>1 || 0>l2>1 || 0>l3>1 || 0>l4>1 || 0>l5>1);

    float ml = (l1 + l2 + l3 + l4 +l5) / 10; // armazena o valor da média das listas
    float mf = ((p1 + (2 * p2) + (3 * p3) + (2 * t)) / 8) + ml; // cálculo das médias

    printf("%.2f\n", mf);

    return 0;
}