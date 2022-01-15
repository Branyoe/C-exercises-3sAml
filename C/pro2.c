//Construir un programa que calcule la hipotenusa de un triángulo rectángulo (utilizar funciones exponenciales y
//funciones de raíz)
#include <stdio.h>
#include <math.h>
#include <conio.h>

int main(){
  printf("introuduce un cateto:\n");
  float a, b, h;
  scanf("%f", &a);
  printf("introuduce otro cateto\n");
  scanf("%f", &b);
  h = sqrt(pow(a, 2) + pow(b, 2));
  printf("%f", h);
  getch();
}