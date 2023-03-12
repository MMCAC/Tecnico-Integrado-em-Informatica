programa
{
	funcao inicio()
	{
		inteiro a[20], b[20], v[40]

		para(inteiro i = 0; i <= 19; i++)
		{
			leia(a[i])
		}
		limpa()

		para(inteiro i = 0; i <= 19; i++)
		{
			leia(b[i])
		}
		limpa()
		
		inteiro z = 0, y = 0

		para(inteiro i = 0; i <= 39; i++)
		{
			se(i % 2 == 0)
				{
					v[i] = a[z]
					z++
				}
			senao
				{
					v[i] = b[y]
					y++
				}
		}

		para(inteiro i = 0; i <= 39; i++)
		{
			escreva(v[i] ,", ")
		}

	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 430; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */