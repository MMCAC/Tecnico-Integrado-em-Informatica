programa
{
	funcao inicio()
	{
		inteiro m[6][6], maior = 0

		escreva("Informe uma sequ�ncia de 36 n�meros: \n")

		para(inteiro l = 0; l < 6; l++)
		{
			para(inteiro c = 0; c < 6; c++)
			{
				leia(m[l][c])

				se(m[l][c] > 10)
				{
					maior = maior++
				}
			}
		}
		limpa()

		escreva("Quantidade de n�meros maiores que 10: \n", maior)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 333; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {m, 5, 10, 1};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */