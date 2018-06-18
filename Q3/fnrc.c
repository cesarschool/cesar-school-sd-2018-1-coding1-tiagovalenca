#include <stdio.h>
/**
* Escreva uma função que encontra a primeira letra que não se repete em uma
* sentença.
* Função: char firstNonRepeatingChar(char[] sentence, int length)
* Input:
* - sentence: array não nulo de letras, formado apenas por ASCII em minúsculo.
* - length: tamanho do array - número de caracteres
* Output: A primeira letra que não se repete, ou -1, caso todas se repitam.
*/
char firstNonRepeatingChar(char sentence[], int length)
{
	printf("\nfirstNonRepeatingChar::START: %s, %d\n", sentence, length);

	int letra, check, repetiu = 0;
	int fim = length - 1;

	for (letra = 0; letra <= fim; letra++)
	{
		repetiu = 0;
		for (check = 0; check <= fim; check++)
		{
			if (sentence[letra] == ' ') {
				repetiu = 1;
				break;
			}
			else if (letra != check && sentence[letra] == sentence[check]) {
				repetiu = 1;
				break;
			}
		}

		if (repetiu == 0) {
			printf("%c", sentence[letra]);
			printf("\nfirstNonRepeatingChar::END\n");
			return sentence[letra];
		}
	}
	printf("-1");
	printf("\nfirstNonRepeatingChar::END\n");
	return -1;
}

int main()
{
	printf("\n### CESAR School :: Sistemas Digitais :: Coding1 :: firstNonRepeatingChar ###\n");

	firstNonRepeatingChar("ovo", 3);
	firstNonRepeatingChar("cesar school", 12);
	firstNonRepeatingChar("sistemas digitais", 17);
	firstNonRepeatingChar("arara", 5);
	firstNonRepeatingChar("ovo ovelha", 10);

	return 0;
}
