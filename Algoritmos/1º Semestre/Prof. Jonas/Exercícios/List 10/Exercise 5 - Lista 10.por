programa
{
	funcao inicio()
	{
		inteiro v[40], total = 0

		escreva("Escreva uma sequ�ncia de 40 n�meros: \n")

		para(inteiro i = 0; i <= 39; i++)
		{
			leia(v[i])

			se(v[i]%2 == 0)
				{
					total = total++
				}
		}
		limpa()

	  	escreva("A quantidade de n�meros pares � de: \n", total)

	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 238; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */