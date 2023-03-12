programa
{
	funcao inicio()
	{
		inteiro m[6][6]

		escreva("Informe uma sequência de 36 números: \n")

		para(inteiro l = 0; l < 6; l++)
		{
			para(inteiro c = 0; c < 6; c++)
			{
				leia(m[l][c])

				se(m[l][c] < 0)
				{
					m[l][c] = 0
				}
			}
		}
		limpa()

		escreva("Números negativos igual a zero: \n")

		para(inteiro l = 0; l < 6; l++)
		{
			para(inteiro c = 0; c < 6; c++)
			{
				escreva(m[l][c]," ")
			}
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 421; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */