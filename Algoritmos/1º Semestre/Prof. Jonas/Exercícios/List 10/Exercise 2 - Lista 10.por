programa
{
	funcao inicio()
	{
		inteiro v[10], impares[10]

		escreva("Informe uma sequ�ncia de 10 n�meros: \n")

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

		escreva("N�meros �mpares na sequ�ncia: \n")

		para(inteiro i = 0; i < z; i++)
		{
			escreva(impares[i]," ")
		}
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 379; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {v, 5, 10, 1}-{impares, 5, 17, 7};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */