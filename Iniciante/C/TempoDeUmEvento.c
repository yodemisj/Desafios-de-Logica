#include <stdio.h>
#include <string.h>

int main() {

    int diaInicio, horaInicio, minutoInicio,segundoInicio, diaFim, horaFim, minutoFim,segundoFim;
    int dias, horas, minutos, segundos;
    char lixo[20];

    scanf("%s",&lixo);
    scanf("%d",&diaInicio);
    scanf("%d",&horaInicio);
    scanf("%s",&lixo);
    scanf("%d",&minutoInicio);
    scanf("%s",&lixo);
    scanf("%d",&segundoInicio);

    scanf("%s",&lixo);
    scanf("%d",&diaFim);
    scanf("%d",&horaFim);
    scanf("%s",&lixo);
    scanf("%d",&minutoFim);
    scanf("%s",&lixo);
    scanf("%d",&segundoFim);

    if(diaInicio < diaFim){ 
        dias = diaFim - diaInicio;
        if(horaInicio == horaFim){ 
            if(minutoInicio == minutoFim){
                if(segundoInicio == segundoFim){
                    horas = 0;
                    minutos = 0;
                    segundos = 0;
                } else if(segundoInicio > segundoFim) {
                    dias--;
                    horas = 24 - horaInicio + horaFim - 1;
                    minutos = 60 - minutoInicio + minutoFim - 1;
                    segundos = 60  - segundoInicio + segundoFim;
                } else{
                    horas = 0;
                    minutos = 0;
                    segundos = segundoFim - segundoInicio;
                }
            } else if(minutoInicio > minutoFim) {
                if(segundoInicio == segundoFim){
                    dias--;
                    horas = 24 - horaInicio + horaFim - 1;
                    minutos = 60 - minutoInicio + minutoFim;
                    segundos = 0;
                } else if(segundoInicio > segundoFim) {
                    dias--;
                    horas = 24 - horaInicio + horaFim - 1;
                    minutos = 60 - minutoInicio + minutoFim - 1;
                    segundos = 60 - segundoInicio + segundoFim;
                } else{
                    dias--;
                    horas = 24 - horaInicio + horaFim - 1;
                    minutos = 60 - minutoInicio + minutoFim;
                    segundos = segundoFim - segundoInicio;
                }
            } else { // Minuto inicio < Minuto Final
                if(segundoInicio == segundoFim){
                    horas = 0;
                    minutos = minutoFim - minutoInicio;
                    segundos = 0;
                } else if(segundoInicio > segundoFim) {
                    horas = 0;
                    minutos = minutoFim - minutoInicio;
                    segundos = 60 - segundoInicio + segundoFim;
                } else{
                    horas = 0 ;
                    minutos = minutoFim - minutoInicio;
                    segundos = segundoFim - segundoInicio;
                }
            }
        }else if(horaInicio > horaFim){ // Segunfo if de fora
            if(minutoInicio == minutoFim){
                if(segundoInicio == segundoFim){
                    dias--;
                    horas = 24 - horaInicio + horaFim;
                    minutos = 0;
                    segundos = 0;
                } else if(segundoInicio > segundoFim) {
                    dias--;
                    horas = 24 - horaInicio + horaFim - 1;
                    minutos = 60 - minutoInicio + minutoFim - 1;
                    segundos = 60  - segundoInicio + segundoFim;
                } else{
                    dias--;
                    horas = 24 - horaInicio + horaFim;
                    minutos = 0;
                    segundos = segundoFim - segundoInicio;
                }
            } else if(minutoInicio > minutoFim) {
                if(segundoInicio == segundoFim){
                    dias--;
                    horas = 24 - horaInicio + horaFim - 1;
                    minutos = 60 - minutoInicio + minutoFim;
                    segundos = 0;
                } else if(segundoInicio > segundoFim) {
                    dias--;
                    horas = 24 - horaInicio + horaFim - 1;
                    minutos = 60 - minutoInicio + minutoFim - 1;
                    segundos = 60 - segundoInicio + segundoFim;
                } else{
                    dias--;
                    horas = 24 - horaInicio + horaFim - 1;
                    minutos = 60 - minutoInicio + minutoFim;
                    segundos = segundoFim - segundoInicio;
                }
            } else { // Minuto inicio < Minuto Final
                if(segundoInicio == segundoFim){
                    dias--;
                    horas = 24 - horaInicio + horaFim;
                    minutos = minutoFim - minutoInicio;
                    segundos = 0;
                } else if(segundoInicio > segundoFim) {
                    dias--;
                    horas = 24 - horaInicio + horaFim;
                    minutos = minutoFim - minutoInicio - 1;
                    segundos = 60 - segundoInicio + segundoFim;
                } else{
                    dias--;
                    horas = 24 - horaInicio + horaFim;
                    minutos = minutoFim - minutoInicio;
                    segundos = segundoFim - segundoInicio;
                }
            }
        }else{ //Hora fim maior que inicio
            if(minutoInicio == minutoFim){
                if(segundoInicio == segundoFim){
                    horas = horaFim - horaInicio;
                    minutos = 0;
                    segundos = 0;
                } else if(segundoInicio > segundoFim) {
                    horas = horaFim - horaInicio - 1;
                    minutos = 60 - minutoInicio + minutoFim - 1;
                    segundos = 60  - segundoInicio + segundoFim;
                } else{
                    horas = horaFim - horaInicio;
                    minutos = 0;
                    segundos = segundoFim - segundoInicio;
                }
            } else if(minutoInicio > minutoFim) {
                if(segundoInicio == segundoFim){
                    horas = horaFim - horaInicio - 1;
                    minutos = 60 - minutoInicio + minutoFim;
                    segundos = 0;
                } else if(segundoInicio > segundoFim) {
                    horas = horaFim - horaInicio - 1;
                    minutos = 60 - minutoInicio + minutoFim - 1;
                    segundos = 60 - segundoInicio + segundoFim;
                } else{
                    horas = horaFim - horaInicio - 1;
                    minutos = 60 - minutoInicio + minutoFim;
                    segundos = segundoFim - segundoInicio;
                }
            } else { // Minuto inicio < Minuto Final
                if(segundoInicio == segundoFim){
                    horas = horaFim - horaInicio;
                    minutos = minutoFim - minutoInicio;
                    segundos = 0;
                } else if(segundoInicio > segundoFim) {
                    horas = horaFim - horaInicio;
                    minutos = minutoFim - minutoInicio - 1;
                    segundos = 60 - segundoInicio + segundoFim;
                } else{
                    horas = horaFim - horaInicio;
                    minutos = minutoFim - minutoInicio;
                    segundos = segundoFim - segundoInicio;
                }
            }
        }
    }else if(diaInicio == diaFim){
        dias = 0;
        if(horaInicio == horaFim){ 
            if(minutoInicio == minutoFim){
                if(segundoInicio == segundoFim){
                    horas = 0;
                    minutos = 0;
                    segundos = 0;
                } else if(segundoInicio > segundoFim) {
                    horas = 24 - horaInicio + horaFim - 1;
                    minutos = 60 - minutoInicio + minutoFim - 1;
                    segundos = 60  - segundoInicio + segundoFim;
                } else{
                    horas = 0;
                    minutos = 0;
                    segundos = segundoFim - segundoInicio;
                }
            } else if(minutoInicio > minutoFim) {
                if(segundoInicio == segundoFim){
                    horas = 24 - horaInicio + horaFim - 1;
                    minutos = 60 - minutoInicio + minutoFim;
                    segundos = 0;
                } else if(segundoInicio > segundoFim) {
                    horas = 24 - horaInicio + horaFim - 1;
                    minutos = 60 - minutoInicio + minutoFim - 1;
                    segundos = 60 - segundoInicio + segundoFim;
                } else{
                    horas = 24 - horaInicio + horaFim - 1;
                    minutos = 60 - minutoInicio + minutoFim;
                    segundos = segundoFim - segundoInicio;
                }
            } else { // Minuto inicio < Minuto Final
                if(segundoInicio == segundoFim){
                    horas = 0;
                    minutos = minutoFim - minutoInicio;
                    segundos = 0;
                } else if(segundoInicio > segundoFim) {
                    horas = 0;
                    minutos = minutoFim - minutoInicio;
                    segundos = 60 - segundoInicio + segundoFim;
                } else{
                    horas = 0 ;
                    minutos = minutoFim - minutoInicio;
                    segundos = segundoFim - segundoInicio;
                }
            }
        }else if(horaInicio > horaFim){ // Segunfo if de fora
            if(minutoInicio == minutoFim){
                if(segundoInicio == segundoFim){
                    horas = 24 - horaInicio + horaFim;
                    minutos = 0;
                    segundos = 0;
                } else if(segundoInicio > segundoFim) {
                    horas = 24 - horaInicio + horaFim - 1;
                    minutos = 60 - minutoInicio + minutoFim - 1;
                    segundos = 60  - segundoInicio + segundoFim;
                } else{
                    horas = 24 - horaInicio + horaFim;
                    minutos = 0;
                    segundos = segundoFim - segundoInicio;
                }
            } else if(minutoInicio > minutoFim) {
                if(segundoInicio == segundoFim){
                    horas = 24 - horaInicio + horaFim - 1;
                    minutos = 60 - minutoInicio + minutoFim;
                    segundos = 0;
                } else if(segundoInicio > segundoFim) {
                    horas = 24 - horaInicio + horaFim - 1;
                    minutos = 60 - minutoInicio + minutoFim - 1;
                    segundos = 60 - segundoInicio + segundoFim;
                } else{
                    horas = 24 - horaInicio + horaFim - 1;
                    minutos = 60 - minutoInicio + minutoFim;
                    segundos = segundoFim - segundoInicio;
                }
            } else { // Minuto inicio < Minuto Final
                if(segundoInicio == segundoFim){
                    horas = 24 - horaInicio + horaFim;
                    minutos = minutoFim - minutoInicio;
                    segundos = 0;
                } else if(segundoInicio > segundoFim) {
                    horas = 24 - horaInicio + horaFim;
                    minutos = minutoFim - minutoInicio - 1;
                    segundos = 60 - segundoInicio + segundoFim;
                } else{
                    horas = 24 - horaInicio + horaFim;
                    minutos = minutoFim - minutoInicio;
                    segundos = segundoFim - segundoInicio;
                }
            }
        }else{ //Hora fim maior que inicio
            if(minutoInicio == minutoFim){
                if(segundoInicio == segundoFim){
                    horas = horaFim - horaInicio;
                    minutos = 0;
                    segundos = 0;
                } else if(segundoInicio > segundoFim) {
                    horas = horaFim - horaInicio - 1;
                    minutos = 60 - minutoInicio + minutoFim - 1;
                    segundos = 60  - segundoInicio + segundoFim;
                } else{
                    horas = horaFim - horaInicio;
                    minutos = 0;
                    segundos = segundoFim - segundoInicio;
                }
            } else if(minutoInicio > minutoFim) {
                if(segundoInicio == segundoFim){
                    horas = horaFim - horaInicio - 1;
                    minutos = 60 - minutoInicio + minutoFim;
                    segundos = 0;
                } else if(segundoInicio > segundoFim) {
                    horas = horaFim - horaInicio - 1;
                    minutos = 60 - minutoInicio + minutoFim - 1;
                    segundos = 60 - segundoInicio + segundoFim;
                } else{
                    horas = horaFim - horaInicio - 1;
                    minutos = 60 - minutoInicio + minutoFim;
                    segundos = segundoFim - segundoInicio;
                }
            } else { // Minuto inicio < Minuto Final
                if(segundoInicio == segundoFim){
                    horas = horaFim - horaInicio;
                    minutos = minutoFim - minutoInicio;
                    segundos = 0;
                } else if(segundoInicio > segundoFim) {
                    horas = horaFim - horaInicio;
                    minutos = minutoFim - minutoInicio - 1;
                    segundos = 60 - segundoInicio + segundoFim;
                } else{
                    horas = horaFim - horaInicio;
                    minutos = minutoFim - minutoInicio;
                    segundos = segundoFim - segundoInicio;
                }
            }
        }
    }



    printf("%d dia(s)\n",dias);
    printf("%d hora(s)\n",horas);
    printf("%d minuto(s)\n",minutos);
    printf("%d segundo(s)\n",segundos);



    return 0;
} 