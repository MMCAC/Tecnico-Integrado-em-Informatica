programa
{
	funcao inicio()
	{
		inteiro n, contador = 1, menor=0, maior=0, valor
		leia(n)
		limpa()

		enquanto(contador <= n)
			{	
				leia(valor)
				
				se(valor > maior)
				{
					maior = valor
				}
				se(valor < menor)
				{
					menor = valor
				}
				contador++
			}
			limpa()
			escreva("Maior: \n", maior, "\n")
			escreva("Menor: \n", menor)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 208; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */