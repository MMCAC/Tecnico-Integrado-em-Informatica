programa
{
	funcao inicio()
	{
		real n1, n2, n3, media
		
		escreva("Informe a sua primeira nota: \n")
		leia(n1)
		
		escreva("Informe a sua segunda nota: \n")
		leia(n2)
		
		escreva("Informe a sua terceira nota: \n")
		leia(n3)

		media = (n1+n2+n3)/3

		se(media>=7)
		{
			escreva("A m�dia do aluno � maior do que a m�dia requerida. O aluno est� aprovado!")
		}
		senao
		{
			escreva("A m�dia do aluno � insuficiente para a aprova��o.")
		}
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 298; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */