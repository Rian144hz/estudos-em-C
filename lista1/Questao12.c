#include <stdio.h>
void main()
{
    int horas = 0;
    int minutos = 0;
    int segundos = 0;
    int totalDesegundos = 0;
    printf("Digite a duração da fábrica (em segundos:)");
    scanf(" %d", &totalDesegundos);
    horas = totalDesegundos / 3600;
    minutos = (totalDesegundos % 3600) / 60;
    segundos = totalDesegundos % 60;


    printf("Duração expressa em horas: %d \n", horas);
    printf("Duração expressa em minutos: %d\n", minutos);
    printf("Duração expressa em segundos: %d\n", segundos);
}
