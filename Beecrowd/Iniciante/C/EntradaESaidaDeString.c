#include <stdio.h>
#include <string.h>

int main(){
    char str1[101], str2[101], str3[102];
    int i;
    fgets(str1,100,stdin);
    fgets(str2,100,stdin);
    fgets(str3,100,stdin);

    for(i=0; i<strlen(str1)-1; i++){
        printf("%c",str1[i]);
    }
    for(i=0; i<strlen(str2)-1; i++){
        printf("%c",str2[i]);
    }
    for(i=0; i<strlen(str3)-1; i++){
        printf("%c",str3[i]);
    }
    printf("\n");
    
    for(i=0; i<strlen(str2)-1; i++){
        printf("%c",str2[i]);
    }
    for(i=0; i<strlen(str3)-1; i++){
        printf("%c",str3[i]);
    }
    for(i=0; i<strlen(str1)-1; i++){
        printf("%c",str1[i]);
    }
    printf("\n");
    
    for(i=0; i<strlen(str3)-1; i++){
        printf("%c",str3[i]);
    }
    for(i=0; i<strlen(str1)-1; i++){
        printf("%c",str1[i]);
    }
    for(i=0; i<strlen(str2)-1; i++){
        printf("%c",str2[i]);
    }
    printf("\n");

    for(i=0; i<10; i++){
        if(strlen(str1)-1 > i)printf("%c",str1[i]);
    }
    for(i=0; i<10; i++){
        if(strlen(str2)-1 > i)printf("%c",str2[i]);
    }
    for(i=0; i<10; i++){
        if(strlen(str3)-1 > i)printf("%c",str3[i]);
    }
    printf("\n");

    return 0;
}