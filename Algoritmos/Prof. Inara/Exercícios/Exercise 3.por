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
			escreva("A média do aluno é maior do que a média requerida. O aluno está aprovado!")
		}
		senao
		{
			escreva("A média do aluno é insuficiente para a aprovação.")
		}
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 298; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */