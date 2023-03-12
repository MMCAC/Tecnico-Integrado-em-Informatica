programa
{
	funcao inicio()
	{
		inteiro n, contador = 1, impar = 0, par = 0, valor
		leia(n)

		enquanto(contador <= n)
		{
			leia(valor)

		se(valor%2==0)
			{
				par = par + 1
			}
		senao
			{
				impar = impar + 1
			}
		contador++
		}
		limpa()
		escreva("Pares:\n", par,"\n")
		escreva("Ímpares:\n", impar)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 252; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */