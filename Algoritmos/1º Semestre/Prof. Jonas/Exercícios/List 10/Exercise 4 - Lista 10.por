programa
{
	funcao inicio()
	{
		inteiro v[20], x

		escreva("Informe 20 n�meros: \n")

		para(inteiro i = 0; i < 20; i++)
		{
			leia(v[i])
		}
		limpa()

		escreva("Informe 1 n�mero da sequ�ncia de n�meros anterior: \n")
		leia(x)

		para(inteiro i = 0; i <= 19; i++)
		{
			se(v[i] == x)
				{
					escreva("\nO n�mero est� localizado no vetor ", i ," !")
				}
			se(v[i] != x e i == 19)
				{
					escreva("\n\nO n�mero n�o foi encontrado na sequ�ncia!")
				}
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 459; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */