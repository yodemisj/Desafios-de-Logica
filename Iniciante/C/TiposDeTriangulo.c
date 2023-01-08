#include <stdio.h>
 
int main() {
    float aux;
    float A, B, C;
    scanf("%f %f %f",&A,&B,&C);
    
    if(A>B && A>C){
        if(C>B){
            aux = B;
            B = C;
            C = aux;
        }
    }else if(B>C && B>A) {
        aux = A;
        A = B;
        B = aux;
        if(C>B){
            aux = B;
            B = C;
            C= aux;
        }
    }else if(C>A && C>B){
        aux = A;
        A = C;
        C = aux;
        if(C>B){
            aux = B;
            B = C;
            C = aux;
        }
    }
    if(A >= (B+C)) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        if(A*A == (B*B + C*C)){
            printf("TRIANGULO RETANGULO\n");
        }
        if(A*A > (B*B + C*C)) {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if(A*A < (B*B + C*C)) {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if(A==B && B==C) {
            printf("TRIANGULO EQUILATERO\n");
        } else if(A==B || B==C || A==C ){
            printf("TRIANGULO ISOSCELES\n");
        }
    }
 
    return 0;
}