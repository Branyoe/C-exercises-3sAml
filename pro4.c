//En un supermercado, se realizan descuentos por las compras a partir de unas bolitas de colores: Verde 20%,
//amarilla 25%, negra del 30%, la blanca no aplica ningún descuento. Leer el importe de la compra y el color de la
//bolita e imprimir lo que debe pagar.
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
  float importe=0, verde, amarilla, negra, blanca;
  float total;
  verde = 0.80;
  amarilla = 0.75;
	negra = 0.70;
  printf("introduce el importe: ");
  scanf("%f", &importe);
  printf("introduce el color de la bolita: ");
  fflush(stdin);
  char colorBolita[10];
  scanf("%[^\n]s", &colorBolita);
  if(strcmp(colorBolita, "blanco") == 0){
    total = importe;
  }
  if(strcmp(colorBolita, "verde") == 0){
    total = importe * verde;
  }
  if(strcmp(colorBolita, "amarillo") == 0){
    total = importe * amarilla;
  }
  if(strcmp(colorBolita, "negro") == 0){
    total = importe * negra;
  }

  printf("total a pagar: %f", total);

  getch();
}