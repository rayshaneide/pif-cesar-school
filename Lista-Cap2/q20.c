#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, hipotenusa;

    printf("Digite os dois catetos: ");
    scanf("%lf %lf", &a, &b);

    hipotenusa = sqrt(a * a + b * b);

    printf("Hipotenusa: %.2f\n", hipotenusa);

    return 0;
}