programa
{
	funcao inicio()
	{
		inteiro n, contador, valor
		leia(n)
		limpa()

		para(contador = 1; contador <= n; contador++)
		{
			leia(valor)
			limpa()

			se(valor<0)
			{
				escreva("O número é negativo!\n")
			}
			se(valor==0)
			{
				escreva("O número é zero!\n")
			}
			se(valor > 0)
			{
				escreva("O número é positivo!\n")
			}
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 220; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */