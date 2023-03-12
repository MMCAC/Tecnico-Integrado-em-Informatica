programa
{
	funcao inicio()
	{
		inteiro v[40]

		escreva("Informe 40 números inteiros: \n")

		para(inteiro i = 0; i <= 39; i++)
		{
			leia(v[i])

			se(v[i] < 0)
			{
				v[i] = 0
			}
		}
		limpa()

		para(inteiro i = 0; i <= 39; i++)
		{
			escreva(v[i])

			se(i != 39)
				{
					escreva(", ")
				}
			se(i == 39)
				{
					escreva(".")
				}
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 343; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */