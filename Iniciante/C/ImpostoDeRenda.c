#include <stdio.h>
 
int main() {
 
    float salario;
    float imposto;
    
    scanf("%f",&salario);
    
    if(salario <= 2000){
        printf("Isento\n");
        return 0;
    }else if(salario <= 3000){
        salario -= 2000;
        imposto = salario * 0.08;
    }else if(salario <= 4500){
        salario -= 3000;
        imposto = salario*0.18 + 1000*0.08;
    }else{
        salario -= 4500;
        imposto = salario*0.28 + 1500*0.18 +1000*0.08;
    }
    printf("R$ %.2f\n",imposto);
 
    return 0;
}