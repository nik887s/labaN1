#include<stdio.h>
int main() {
    float rebro, volume, sidearea;
    printf("input the rebro of the cube: ");
    if (scanf_s("%f", &rebro) == 1 && rebro >= 0)
    {
        volume = rebro * rebro * rebro;
         sidearea = 4 * rebro * rebro;
        printf("Volume of a cube= %.3f\nSide surface area of a cube= %.3f\n", volume, sidearea);

    }
    else
    {
        printf("Uncorrect input");
    }
    return 0;
}
