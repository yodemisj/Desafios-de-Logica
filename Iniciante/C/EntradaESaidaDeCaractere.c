#include <stdio.h>

int main(){
    char a,b,c;

    scanf("%c %c %c",&a,&b,&c);

    printf("A = %c, B = %c, c = %c\n",a,b,c);
    printf("A = %c, B = %c, c = %c\n",b,c,a);
    printf("A = %c, B = %c, c = %c\n",c,a,b);
    
    return 0;
}