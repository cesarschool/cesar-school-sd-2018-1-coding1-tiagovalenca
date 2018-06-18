#include <stdio.h>
#include <stdbool.h>

/**
 * Escreva uma função que analisa uma dada palavra ou frase, retornando se a mesma é um palíndromo ou não.
 * 
 * Função: bool isPalindrome (char[] sentence, int length)
 * Input:
 * - sentence: array de caracteres em minúsculo da palavra ou frase a ser analisada.
 * - length: tamanho do array - número de caracteres
 * Output: true se a sentença é um palídromo, falso caso negativo.
 */

bool isPalindrome (char sentence[], int length) {
    printf("\nisPalindrome::START: %s, %d\n", sentence, length);

    int inicio, meio, fim = length - 1;
	meio = length / 2;
	inicio = 0;
    
	while (inicio < meio) {
		if (sentence[inicio] != sentence[fim]) {
			printf("false");
			printf("\nisPalindrome::END\n");
			return false;
		}
		inicio++;
		fim--;
	}
    
	printf("true");
    
    printf("\nisPalindrome::END\n");
    return true;
}

int main()
{
    printf("\n### CESAR School :: Sistemas Digitais :: Coding1 :: Palindrome ###\n");
    
    // true cases
    isPalindrome("ovo", 3);
    isPalindrome("arara", 5);

    // false cases
    isPalindrome("cesar", 5);
    isPalindrome("school", 6);

    return 0;
}
 
