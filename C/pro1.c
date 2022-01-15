//Construir un programa que te solicite tu nombre y tu año de nacimiento y calcule tu edad actual
#include <stdio.h>
#include <conio.h>

int main (){
  printf("Introduce tu nombre ");
  char n[100];
  gets(n);
  printf("Introuce tu ano de nacimiento:");
  int f;
  scanf("%i", &f);
  int a;
  a = 2022;
  printf("Hola %s tu edad es %i\n", n, a - f);
  getch();
}