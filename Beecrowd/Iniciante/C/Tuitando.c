#include <stdio.h>
#include <string.h>
int main() {
    char c[501];    

    fgets(c,500,stdin);

    if(strlen(c)-1<=140){
        printf("TWEET\n");
    }else{
        printf("MUTE\n");
    }

    return 0;
}