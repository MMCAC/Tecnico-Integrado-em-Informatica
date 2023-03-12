programa
{
	funcao inicio()
	{
		inteiro n, soma = 0, rest
		leia(n)
		
		rest = n%10
		n = n/10
		
		se(rest == 1)
		{
			soma = soma + 1
		}

		rest = n%10
		n = n/10

		se(rest == 1)
		{
			soma = soma + 2
		}

		rest = n%10
		n = n/10

		se(rest == 1)
		{
			soma = soma + 4
		}

		rest = n%10
		n = n/10

		se(rest == 1)
		{
			soma = soma + 8
		}
		
		limpa()
		escreva(soma)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 329; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */