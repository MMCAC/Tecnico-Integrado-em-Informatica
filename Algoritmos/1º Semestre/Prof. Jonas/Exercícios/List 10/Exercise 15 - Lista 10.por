programa
{
	funcao inicio()
	{
		cadeia m[20][20], x

		escreva("Informe uma matriz 20x20: \n")

		para(inteiro l = 0; l < 20; l++)
		{
			para(inteiro c = 0; c < 20; c++)
			{
				leia(m[l][c])
			}
		}
		limpa()

		escreva("Informe um número: \n")
		leia(x)
		limpa()

		para(inteiro l = 0; l < 20; l++)
		{
			para(inteiro c = 0; c < 20; c++)
			{
				se(x == m[l][c])
				{
					escreva("O número informado localiza-se na linha ",l," e na coluna ",c,"\n")
				}
				se(x != m[l][c] e l == 19 e c == 19)
				{
					escreva("O número não foi encontrado!")
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
 * @POSICAO-CURSOR = 457; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {m, 5, 9, 1};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */