/*
Leia um caractere maiúsculo, que indica uma operação que deve ser realizada e uma matriz M[12][12]. 
Em seguida, calcule e mostre a soma ou a média considerando somente aqueles elementos que estão acima 
da diagonal principal da matriz, conforme ilustrado abaixo (área verde).




Entrada
A primeira linha de entrada contem um único caractere Maiúsculo O ('S' ou 'M'), indicando a operação 
(Soma ou Média) que deverá ser realizada com os elementos da matriz. Seguem os 144 valores de ponto 
flutuante que compõem a matriz.

Saída
Imprima o resultado solicitado (a soma ou média), com 1 casa após o ponto decimal.

*/


#include <iostream>
#include<stdio.h>
#include <string>
#include <iomanip>
 //by Matheus Souza
//omegania

using namespace std;

int main() {
	float med[12][12], med2 = 0.0;
	int n;
	char op;

	cin >> op;

	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++) {
			cin >> med[i][j];
		}
	}
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++) {
			if (j == i) {
				for(int k =j+1;k<12;k++)
				med2 += med[i][k];
			}

		}
	}

	if (op == 'S') {
		printf("%.1f\n", med2);
	}
	else {
		printf("%.1f\n", med2 / 66);
	}

}


