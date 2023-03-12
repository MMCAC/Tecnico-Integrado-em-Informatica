programa
{
	funcao inicio()
	{
		inteiro idade[5], p_a = 0
		real peso[5], soma = 0

		para(inteiro i = 0; i <= 4; i++)
		{
			escreva("Informe a sua idade: \n")
			leia(idade[i])

			se(idade[i] >= 10 e idade[i] <= 20)
			{
				p_a = p_a + 1
			}

			escreva("\nInforme o seu peso: \n")
			leia(peso[i])

			se(peso[i] > 30 e peso[i] < 50)
			{
				soma = soma + peso[i]
			}

			escreva("\n\n")
		}
		limpa()

		escreva("Total de pessoas que possuem idade entre 10 e 20: \n", p_a)
		escreva("\n\nSoma dos pesos das pessoas entre 30 e 50: \n", soma)

	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 394; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */