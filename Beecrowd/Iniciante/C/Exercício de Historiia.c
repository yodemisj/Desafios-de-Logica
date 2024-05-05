#include <stdio.h>
 
int main() {
    long long int n;
    while (  scanf("%lld",&n) == 1){
       n = n/100 + 1;
       printf("%lld\n",n);
    }
 
    return 0;
}
