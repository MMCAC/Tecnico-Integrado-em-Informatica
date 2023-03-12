programa
{
	funcao inicio()
	{
		inteiro total=0, soma=0
		cadeia peso[5]
		inteiro idade[5], t = 0

		para(inteiro i=0; i<=4; i++)
		{
			escreva("Digite a idade: \n")
			leia(idade[i])
		
			escreva("Digite o peso correspondente: \n")
			leia(peso[i])

			escreva("\n")
			se(idade [i] > 10 e idade [i] < 20)
			{
				total = total + 1
				t = total
			}
			
			soma = soma + i
		}
		
		escreva("Total de pessoas que pessoas possuem em idade entre 10 e 20:\n", t , "\n")
		escreva ("\n")
		escreva("Soma dos pesos das pessoas: \n", soma)
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 489; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */