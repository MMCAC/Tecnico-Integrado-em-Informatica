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
				escreva("O n�mero � negativo!\n")
			}
			se(valor==0)
			{
				escreva("O n�mero � zero!\n")
			}
			se(valor > 0)
			{
				escreva("O n�mero � positivo!\n")
			}
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 220; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */