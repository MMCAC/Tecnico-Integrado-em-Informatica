programa
{
	funcao inicio()
	{
		inteiro m[10][10], maior

		escreva("Informe uma sequ�ncia de 100 n�meros: \n")

		para(inteiro l = 0; l < 2; l++)
		{
			para(inteiro c = 0; c < 2; c++)
			{
				leia(m[l][c])
			}
		}
		limpa()

		maior = m[0][0]

		para(inteiro l = 0; l < 2; l++)
		{
			para(inteiro c = 0; c < 2; c++)
			{
				se(m[l][c] >= maior)
				{
					maior = m[l][c]
				}
			}
		}

		escreva("O maior n�mero �: \n", maior,"\n\nEle se encontra na linha: \n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 468; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */