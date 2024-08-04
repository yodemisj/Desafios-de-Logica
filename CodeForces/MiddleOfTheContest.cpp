#include <iostream>

using namespace std;

int main() {
    int h1, h2, m1, m2;
    char aux;
    int min1, min2;

    cin >> h1 >> aux >> m1 >> h2 >> aux >> m2;

    min1 = h1 * 60 + m1;
    min2 = h2 * 60 + m2;
    int middle = (min2 + min1)/2;
    int middleh = middle/60;
    int middlem = middle % 60;

    printf("%.2d:%.2d\n", middleh, middlem);

    return 0;
}