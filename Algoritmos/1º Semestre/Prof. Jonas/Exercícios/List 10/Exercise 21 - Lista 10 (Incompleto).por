programa
{
	funcao inicio()
	{
		caracter m[100][10], v[10]
		cadeia respostas[100][10]

		escreva("Informe as respostas dos alunos: \n")

		para(inteiro l = 0; l < 100; l++)
		{
			para(inteiro c = 0; c < 10; c++)
			{
				leia(m[l][c])
			}
		}
		limpa()

		escreva("Informe o gabarito: \n")

		para(inteiro i = 0; i < 10; i++)
		{
			leia(v[i])
		}
		limpa()


		para(inteiro l = 0; l < 100; l++)
		{
			para(inteiro c = 0; c < 10; c++)
			{
				se(m[l][c] == v[c])
				{
					respostas[l][c] = "Correto"
				}
				se(m[l][c] != v[c])
				{
					respostas[l][c] = "Errado"
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
 * @POSICAO-CURSOR = 535; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */