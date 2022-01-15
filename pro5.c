//Simular una ruleta (números aleatorios entre 0 y 38) Dejara de girar cuando se genere el cero en cada vuelta
//contara por separa cuantos elementos fueron pares y cuantos fueron impares. Al final imprimir el resultado.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main(){
  int n = 1, np = 0, ni = 0;
  srand(time(NULL));
  while(n != 0){
    n = rand() % 39;
    printf("%i - ", n);
    if(n != 0){
      if(n % 2 == 0){
        np++;
      }else{
       ni++;
      }
    }
  }
  printf("\nPares %i", np);
  printf("\nImpares %i", ni);

  getch();
}