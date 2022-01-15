//En un supermercado, se realizan descuentos por las compras a partir de unas bolitas de colores: Verde 20%,
//amarilla 25%, negra del 30%, la blanca no aplica ningún descuento. Leer el importe de la compra y el color de la
//bolita e imprimir lo que debe pagar.
Algoritmo pro4
	definir importe, verde, amarilla, negra, blanca Como Real;
	Definir total Como Real;
	Definir colorBolita Como Caracter;
	verde = .80;
	amarilla = .75;
	negra = .70;
	Escribir "Introduce el importe: ";
	leer importe;
	Escribir "Introduce el color de la bolita";
	leer colorBolita;
	si colorBolita == "blanco" Entonces
		total = importe;
	FinSi
	si colorBolita == "verde" Entonces
		total = importe * verde;
	FinSi
	si colorBolita == "amarillo" Entonces
		total = importe * amarilla;
	FinSi
	si colorBolita == "negro" Entonces
		total = importe * negra;
	FinSi
	Escribir "total a pagar: " total;
FinAlgoritmo
