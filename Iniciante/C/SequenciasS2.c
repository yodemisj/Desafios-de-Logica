#include <stdio.h>

int main() {

    float s;
    int a,b;
    int i;
    s = 1;
    a = 1;
    b = 1;
    for(i = 0; i < 19; i++){
        a += 2;
        b *= 2;
        s += ((float)a)/(b);
    }
    printf("%.2f\n",s);

    return 0;
}