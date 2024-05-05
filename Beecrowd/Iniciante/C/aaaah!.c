#include <stdio.h>
#include <string.h>

int main() {
    char ah[1001];
    char aah[1001];

    scanf("%s",ah);
    scanf("%s",aah);

    if(strlen(ah) >= strlen(aah))printf("go\n");
    else printf("no\n");

}