#include <stdio.h>

int main() {

    unsigned long long int p;
    int x = 1;
    while(x!=-1){
        scanf("%llu",&p);
        x = p;
        if(p==0)printf("0\n");
        if(p>0 && x!=-1)printf("%llu\n",p-1);
    }

    return 0;
}