programa
{
	funcao inicio()
	{
		inteiro n, contador, pares = 0, valor
		leia(n)
		limpa()
		
		para(contador = 1; contador <= n; contador++)
		{
			leia(valor)

			se(valor%2==0)
			{
				pares = pares + valor
			}
		}
		limpa()
		escreva("Soma dos pares: \n", pares)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 260; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */