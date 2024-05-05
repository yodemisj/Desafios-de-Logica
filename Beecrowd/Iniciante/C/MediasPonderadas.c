#include <stdio.h>
 
int main() {
 
    int quantidade, i;
    float valor1[1000], valor2[1000],valor3[1000], resultado[1000];

    scanf("%d",&quantidade);
    
    for(i = 0; i < quantidade; i++) {
        scanf("%f %f %f",&valor1[i],&valor2[i],&valor3[i]);
        resultado[i] = (valor1[i] * 2 + valor2[i] * 3 + valor3[i] * 5) / 10;
    }

    for(i = 0; i < quantidade; i++) {
        printf("%.1f\n",resultado[i]);
    }

    return 0;
}