#include <stdio.h>

int main() {

    float s;
    int a,b;
    int i;
    s = 0;
    for(i = 1; i <= 100; i++){
        s += 1/(float)i;
    }

    printf("%.2f\n",s);

    return 0;
}