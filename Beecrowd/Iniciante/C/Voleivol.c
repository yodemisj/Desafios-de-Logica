#include <stdio.h>

int main() {
    char nome[50];
    int s1,b1,a1;
    int x1,y1,z1;
    int qtd, i;
    float saques = 0, bloqueios = 0, ataques = 0;
    float saquesCertos = 0, bloqueiosCertos = 0, ataquesCertos = 0;

    scanf("%d",&qtd);

    for(i=0; i<qtd; i++){
        scanf("%s",&nome);
        scanf("%d %d %d",&s1,&b1,&a1);
        scanf("%d %d %d",&x1,&y1,&z1);

        saques += s1;
        bloqueios += b1;
        ataques += a1;

        saquesCertos += x1;
        bloqueiosCertos += y1;
        ataquesCertos += z1;
    }

    saques = saquesCertos*100/saques;
    bloqueios = bloqueiosCertos*100/bloqueios;
    ataques = ataquesCertos*100/ataques;
    printf("Pontos de Saque: %.2f %%.\n",saques);
    printf("Pontos de Bloqueio: %.2f %%.\n",bloqueios);
    printf("Pontos de Ataque: %.2f %%.\n",ataques);

    return 0;
}