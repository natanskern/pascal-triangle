#include <stdio.h>
#include <stdlib.h>

/* Este código foi gerado por fins estudantis, e por estudantes */
/* Este, segue a clásula BSD-3, use como desejar */

int binominal_coef(int n, int k);

/* Triangulo que imprime n linhas para o triângulo */

void print_triangle(int n)
{
    for (int linha = 0; linha < n; linha++){
	for (int i = 0; i <= linha; i++)
	    printf("%d ", binominal_coef(linha, i));
	printf("\n");
    }
}

int binominal_coef(int n, int k)
{
    int res = 1;
    if (k > n - k)
	k = n - k;
    for (int i = 0; i <k; i++){
	res *= (n - i);
	res /= (i + 1);
    }

    return res;
}

int main()
{
    int n = 12;
    print_triangle(n);
    
    return EXIT_SUCCESS;
}
