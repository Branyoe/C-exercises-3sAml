//Leer las horas trabajas por una persona como también la paga por hora para calcular el sueldo semanal de un
//empleado. Cuando las horas trabajadas exceden de 40 se consideran horas extras; las primeras 8 se pagan al
//doble y si las horas extras exceden de 8 se pagan las primeras 8 al doble de lo que pagan las horas normales y el
//resto al triple.
#include <stdio.h>
#include <conio.h>

int main (){
  float horas = 0, valorHora = 0, sueldo = 0, horasNormales = 0;
  float horasExtrasPrimeras = 0, horasExtrasSegundas = 0;
  printf("Horas trabajadas: ");
  scanf("%f", &horas);
  printf("valor por hora: ");
  scanf("%f", &valorHora);
  if(horas <= 40){
    horasNormales = horas;
    sueldo = horas * valorHora;
  }
  if(horas > 40 && horas <= 48){
    horasExtrasPrimeras = horas - 40;
    horasNormales = horas - horasExtrasPrimeras;
    sueldo = (horasExtrasPrimeras * valorHora*2) + (horasNormales * valorHora);
  }
  if(horas > 48){
    horasExtrasSegundas = horas - 48;
    horasExtrasPrimeras = horas - 40 - horasExtrasSegundas;
    horasNormales = horas - horasExtrasPrimeras - horasExtrasSegundas;
    sueldo = (horasExtrasSegundas * valorHora * 3) + (horasExtrasPrimeras * valorHora * 2) + (horasNormales * valorHora);
  }

  printf("Tu sueldo semanal es: %f\n", sueldo);
  printf("Horas normales: %f\n", horasNormales);
  printf("Horas extras dobles: %f\n", horasExtrasPrimeras);
  printf("Horas extras triples: %f\n", horasExtrasSegundas);

  getch();
}