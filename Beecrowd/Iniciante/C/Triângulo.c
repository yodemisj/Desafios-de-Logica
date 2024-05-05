#include <stdio.h>

int main(){
    int a, b, c, d;

    scanf("%d %d %d %d",&a,&b,&c,&d);

    if((a+b)>c && (a+c)>b && (c+b)>a){
        printf("S\n");
    }else if((a+b)>d && (a+d)>b && (d+b)>a){
        printf("S\n");
    }else if((c+b)>d && (c+d)>b && (d+b)>c){
        printf("S\n");
    }else if((c+a)>d && (c+d)>a && (d+a)>c){
        printf("S\n");
    }else{
        printf("N\n");
    }

    return 0;
}