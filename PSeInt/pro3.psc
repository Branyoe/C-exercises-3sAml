//Leer las horas trabajas por una persona como también la paga por hora para calcular el sueldo semanal de un
//empleado. Cuando las horas trabajadas exceden de 40 se consideran horas extras; las primeras 8 se pagan al
//doble y si las horas extras exceden de 8 se pagan las primeras 8 al doble de lo que pagan las horas normales y el
//resto al triple.
Algoritmo pro3
	definir horas, valorHora, sueldo, horasNormales Como Real;
	definir horasExtrasPrimeras, horasExtrasSegundas Como Real;
	Escribir "Horas trabajadas: ";
	leer horas;
	Escribir "valor por de hora: ";
	leer valorHora;
	si horas <= 40 Entonces
		horasNormales = horas;
		sueldo = horas * valorHora;
	FinSi
	si horas > 40 y horas <= 48 Entonces
		horasExtrasPrimeras = horas - 40;
		horasNormales = horas - horasExtrasPrimeras;
		sueldo = (horasExtrasPrimeras * valorHora*2) + (horasNormales * valorHora);
	FinSi
	si horas > 48 Entonces
		horasExtrasSegundas = horas - 48;
		horasExtrasPrimeras = horas - 40 - horasExtrasSegundas;
		horasNormales = horas - horasExtrasPrimeras - horasExtrasSegundas;
		sueldo = (horasExtrasSegundas * valorHora * 3) + (horasExtrasPrimeras * valorHora * 2) + (horasNormales * valorHora);
	FinSi
	Escribir "Tu sueldo semanal es: ", sueldo;
	Escribir "horas normales: ", horasNormales;
	Escribir "horas extras 1: ", horasExtrasPrimeras;
	Escribir "horas extras 2: ", horasExtrasSegundas;
FinAlgoritmo
