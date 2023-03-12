programa
{
	funcao inicio()
	{
		inteiro n1, n2, contador, media, aprovados = 0, reprovados = 0, na_media = 0
		cadeia nome

		para(contador=1; contador <= 20; contador++)
		{
			escreva("Informe o nome do aluno: \n")
			leia(nome)
			
			escreva("Informe a primeira nota do aluno: \n")
			leia(n1)

			escreva("Informe a segunda nota do aluno: \n")
			leia(n2)

			media = (n1 + n2)/2

			se(media < 0)
			{
				escreva("Média inválida! \n n")
			}
			se(media == 0 e media < 7)
			{
				escreva("Abaixo da média! \n \n")
				reprovados = reprovados + 1
			}
			se(media == 7)
			{
				escreva("Na média! \n \n")
				na_media = na_media + 1
			}
			se(media >7 e media <=10)
			{
				escreva("Acima da média! \n \n")
				aprovados = aprovados + 1
			}
			se(media > 10)
			{
				escreva("Média inválida! \n \n")
			}

		}		
		escreva("Total de alunos abaixo da média: \n", reprovados,"\n")
		escreva("Total de alunos na média: \n", na_media,"\n")
		escreva("Total de alunos acima da média: \n", aprovados,"\n")

	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 1009; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */