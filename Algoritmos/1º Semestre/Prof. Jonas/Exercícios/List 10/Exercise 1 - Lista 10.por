programa
{
	funcao inicio()
	{
		inteiro v[12], x, y, soma

		escreva("Informe uma sequ�ncia de 12 n�meros: \n")

		para(inteiro i = 0; i < 12; i++)
		{
			leia(v[i])
		}
		limpa()

		escreva("Informe uma posi��o x: \n")
		leia(x)

		escreva("Informe uma posi��o y: \n")
		leia(y)

		soma = v[x] + v[y]

		limpa()

		escreva("A soma dos n�meros das posi��es dadas: \n", soma)

		

		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 42; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {v, 5, 10, 1};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */