programa
{
	funcao inicio()
	{
		real n1, n2, media

		escreva("Informe a primeira nota do aluno: \n")
		leia(n1)

		escreva("Informe a segunda nota do aluno: \n")
		leia(n2)
		

		media = (n1 + n2)/2

		se(media>=7)
		{
			escreva("Aluno aprovado!")
		}
		senao
		{
			escreva("Reprovado!")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 289; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */