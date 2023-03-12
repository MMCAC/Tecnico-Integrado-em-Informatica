programa
{
	funcao inicio()
	{
		inteiro v[20], a[10], b[10], c[20]

		escreva("Informe 20 números (sendo os 10 primeiros diferentes entre si): \n")
		
		para(inteiro i = 0; i <= 19; i++)
			{
				leia(v[i])
			}

		para(inteiro i = 0; i <= 9; i++)
			{
				a[i] = v[i]
			}
		
		para(inteiro i = 10; i <= 19; i++)
			{
				b[i-10] = v[i]
			}
		para(inteiro i = 0; i <= 9; i++)
			{
				c[i] = v[i]
			}
		limpa()


		escreva("Conjunto A: \n")
		
		para(inteiro i = 0; i <= 9; i++)
			{
				escreva(a[i]," ")
			}


		escreva("\n\nConjunto B: \n")

		para(inteiro i = 0; i <= 9; i++)
			{
				escreva(b[i]," ")
			}


		escreva("\n\nConjunto C (União dos Conjuntos A e B): \n")

		inteiro z = 10
		
		para(inteiro j = 0; j <= 9; j++)
			{
				para(inteiro i = 0; i <= 9; i++)
				{
					se(b[j] == c[i])
					{
						pare
					}
					se(i == 9)
					{
						c[z] = b[j]
						z++
					}

				}
			
			}
		para(inteiro i = 0; i < z; i++)
		{
			escreva(c[i], " ")
		}
		

		

	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 151; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */