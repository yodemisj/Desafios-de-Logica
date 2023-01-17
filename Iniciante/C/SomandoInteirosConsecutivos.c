#include <stdio.h> 

int main() {
    int x,i,a;
    int soma = 0;
    int repetir = 1;
    
    scanf("%d",&a);

    while (repetir)
    {
        scanf("%d",&x);

        if(x > 0){
            for(i = 0 ; i < x; i++){
                soma += a + i;
            }
            repetir = 0;
        }
    }
    
    printf("%d\n",soma);

    return 0;
}