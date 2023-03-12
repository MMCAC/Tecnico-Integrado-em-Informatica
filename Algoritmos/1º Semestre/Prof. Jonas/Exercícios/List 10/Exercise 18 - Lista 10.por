programa
{
	funcao inicio()
	{
		inteiro m[8][8], maior, soma = 0

		escreva("Informe uma matriz 8x8: \n")

		para(inteiro l = 0; l < 8; l++)
		{
			para(inteiro c = 0; c < 8; c++)
			{
				leia(m[l][c])
			}
		}
		limpa()

		para(inteiro l = 0; l < 8; l++)
		{
			para(inteiro c = 0; c < 8; c++)
			{
				escreva("[",m[l][c],"]")
			}
			escreva("\n")
		}

		maior = m[0][0]

		para(inteiro l = 0; l < 8; l++)
		{
			para(inteiro c = 0; c < 8; c++)
			{
				se(l == c)
				{
					se(m[l][c] >= maior)
					{
						maior = m[l][c]
					}
				}
			}
		}

		para(inteiro c = 0 , l = 7; l >= 0; l--)
		{
			soma = m[l][c] + soma
			c++
		}

		escreva("\n\nSoma dos números da diagonal secundária: \n", soma)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 625; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */