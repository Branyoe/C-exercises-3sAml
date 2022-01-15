//Simular una ruleta (números aleatorios entre 0 y 38) Dejara
//de girar cuando se genere el cero en cada vuelta
//contara por separa cuantos elementos fueron pares y cuantos
//fueron impares. Al final imprimir el resultado.
Algoritmo pro5
	Definir n, np, ni Como Entero;
	n = 1;
	np = 0;
	ni = 0;
	Mientras n <> 0 Hacer
		n = Aleatorio(0, 38);
		Escribir n, " -" Sin Saltar;
		si n <> 0 Entonces
			si n mod 2 == 0 Entonces
				np = np + 1;
			SiNo
				ni = ni + 1;
			FinSi
		FinSi
	Fin Mientras
	Escribir "";
	Escribir "Pares ", np;
	Escribir "Impares ", ni;
FinAlgoritmo
