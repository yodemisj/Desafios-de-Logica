#include <stdio.h> 

int main() {
    int x,i;
    int repetir = 1;
    while (repetir)
    {
        scanf("%d",&x);

        if(x != 0){
            for(i = 1 ; i < x; i++){
                printf("%d ",i);
            }
            printf("%d\n",x);
        }else{
            repetir = 0;
        }
    }
    
    return 0;
}