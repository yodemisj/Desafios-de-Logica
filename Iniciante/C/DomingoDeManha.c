#include <stdio.h>

int main() {
    int horas, minutos,atraso;
    char lixo;
    while(scanf("%d",&horas) != EOF){
        scanf("%c",&lixo);
        scanf("%d",&minutos);

        horas++;
        if(horas > 8){
            atraso = (horas - 8) * 60 + minutos;
            printf("Atraso maximo: %d\n",atraso);
        }else if(horas == 8) {
            printf("Atraso maximo: %d\n",minutos);
        }else{
            printf("Atraso maximo: 0\n");
        }
    }

    return 0;
}