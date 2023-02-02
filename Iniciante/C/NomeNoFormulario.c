#include <stdio.h>
#include <string.h>
int main() {
    char c[501];    

    fgets(c,500,stdin);

    if(strlen(c)-1<=80){
        printf("YES\n");
    }else{
        printf("NO\n");
    }

    return 0;
}