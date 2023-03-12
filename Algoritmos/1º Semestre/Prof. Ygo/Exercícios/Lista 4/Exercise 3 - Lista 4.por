programa
{
	funcao inicio()
	{
		inteiro n1, n2, contador = 1, valor
		leia(n1, n2)
		limpa()

		se(n1 >= n2)
		{
			valor = n1
			contador = n2
		}
		senao
		{
			valor = n2
			contador = n1
		}
		
		escreva("Divisores: \n")
		
		enquanto(contador <= valor)
		{
			se(contador%3==0)
			{
				escreva(contador ,"\n")
			}
			contador++
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 198; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */