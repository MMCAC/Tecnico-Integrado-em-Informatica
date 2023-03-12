programa
{
	funcao inicio()
	{
		inteiro v[12], x, y, soma

		escreva("Informe uma sequência de 12 números: \n")

		para(inteiro i = 0; i < 12; i++)
		{
			leia(v[i])
		}
		limpa()

		escreva("Informe uma posição x: \n")
		leia(x)

		escreva("Informe uma posição y: \n")
		leia(y)

		soma = v[x] + v[y]

		limpa()

		escreva("A soma dos números das posições dadas: \n", soma)

		

		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 42; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {v, 5, 10, 1};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */