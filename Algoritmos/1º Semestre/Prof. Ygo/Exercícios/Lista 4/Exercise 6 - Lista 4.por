programa
{
	funcao inicio()
	{

		inteiro n , contador = 1, pares=0, valor
		leia(n)
		limpa()

		enquanto(contador <= n)
		{
			leia(valor)

			se(valor%2==0)
				{
					pares = pares + valor
				}
			contador++
		}
		limpa()
		escreva("Soma dos pares: \n",pares)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 226; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */