programa
{
	funcao inicio()
	{
		inteiro n1, n2, contador, valor
		leia(n1)
		leia(n2)
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

		para(contador=1; contador <= valor; contador++)
		{
			se(contador %3 == 0)
			{
				escreva(contador, "\n")
			}
		}
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 351; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */