programa
{
	funcao inicio()
	{
		inteiro v[20], x

		escreva("Informe 20 números: \n")

		para(inteiro i = 0; i < 20; i++)
		{
			leia(v[i])
		}
		limpa()

		escreva("Informe 1 número da sequência de números anterior: \n")
		leia(x)

		para(inteiro i = 0; i <= 19; i++)
		{
			se(v[i] == x)
				{
					escreva("\nO número está localizado no vetor ", i ," !")
				}
			se(v[i] != x e i == 19)
				{
					escreva("\n\nO número não foi encontrado na sequência!")
				}
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 459; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */