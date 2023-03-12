programa
{
	funcao inicio()
	{
		inteiro v[10], impares[10]

		escreva("Informe uma sequência de 10 números: \n")

		para(inteiro i = 0; i < 10; i++)
		{
			leia(v[i])
		}
		limpa()

		inteiro z = 0

		para(inteiro i = 0; i < 10; i++)
		{
			se(v[i]%2 != 0)
				{
					impares[z] = v[i]
					z++
				}
		}

		escreva("Números ímpares na sequência: \n")

		para(inteiro i = 0; i < z; i++)
		{
			escreva(impares[i]," ")
		}
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 379; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {v, 5, 10, 1}-{impares, 5, 17, 7};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */