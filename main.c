#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	double altura, massa, imc, raiz_imc;
	char *grau;
	
	printf("Qual a massa corporal da pessoa em kg: ");
	scanf("%lf", &massa);
	
	printf("Qual é a altura da pessoa em metros: ");
	scanf("%lf", &altura);
	
	imc = massa / pow(altura,2);
	raiz_imc = sqrt(imc);
	
	printf("O índice da massa corporal é %.2f kg/m². \n", imc);
	
	if (imc < 18.5) {
		if(imc < 16) {
			grau = "Grau I";
		} else if (imc < 17) {
			grau = "Grau II";
		} else {
			grau = "Grau III";
		}
		printf("Você está abaixo do peso. (%s)", grau);
	} else if (imc < 25) {
		printf("Você está no peso adequado.");
	} else if (imc < 30) {
		printf("Você está em sobrepeso.");
	} else {
		if(imc < 35) {
			grau = "Grau I";
		} else if (imc < 40) {
			grau = "Grau II";
		} else {
			grau = "Grau III";
		}
		printf("Você está em obesidade. (%s)", grau);
	}
	
	return 0;
	
}
