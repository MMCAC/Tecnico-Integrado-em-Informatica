programa
{
	funcao inicio()
	{
		inteiro idade, contador

		para(contador = 1; contador <= 75; contador++)
		{
			leia(idade)
			limpa()

			se(idade <= 18)
			{
				escreva("Menor de idade!\n")
			}
		
			senao
			{
				escreva("Maior de idade!\n")
			}
		}
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 139; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */