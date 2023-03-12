programa
{
	funcao inicio()
	{
		inteiro m1[20][20], m2[20][20]

		escreva("Informe uma matriz 20x20: \n")

		para(inteiro l = 0; l < 20; l++)
		{
			para(inteiro c = 0; c < 20; c++)
			{
				leia(m1[l][c])
			}
		}
		limpa()

		escreva("Informe uma outra matriz 20x20: \n")

		para(inteiro l = 0; l < 20; l++)
		{
			para(inteiro c = 0; c < 20; c++)
			{
				leia(m2[l][c])
			}
		}
		limpa()

		escreva("Números semelhantes: \n")

		para(inteiro l1 = 0; l1 < 20; l1++)
		{
			para(inteiro c1 = 0; c1 < 20; c1++)
			{
				para(inteiro l2 = 0; l2 < 20; l2++)
				{
					para(inteiro c2 = 0; c2 < 20; c2++)
					{
						se(m1[l1][c1] == m2[l2][c2])
						{
							escreva(m1[l1][c1]," ")
							pare
						}
					}
				}
			}
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 598; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {m1, 5, 10, 2}-{m2, 5, 22, 2};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */