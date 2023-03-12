programa
{
	funcao inicio()
	{
		inteiro m[5][5]

		escreva("Informe uma matriz 5 x 5: \n")

		para(inteiro l = 0; l < 5; l++)
		{
			para(inteiro c = 0; c < 5; c++)
			{
				leia(m[l][c])

				se(l == c)
				{
					m[l][c] = 1
				}
				senao
				{
					m[l][c] = 0
				}
			}
		}
		limpa()


		para(inteiro l = 0; l < 5; l++)
		{
			para(inteiro c = 0; c < 5; c++)
			{
				escreva("[", m[l][c] ,"]")
			}

			escreva("\n")
		}
	}
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 423; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */