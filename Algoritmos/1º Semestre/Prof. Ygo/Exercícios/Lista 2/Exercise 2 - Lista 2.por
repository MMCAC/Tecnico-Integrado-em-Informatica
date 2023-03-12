programa
{
	funcao inicio()
	{
		inteiro contador = 1
		real soma = 0.0
		
		enquanto(contador <= 10000)
		{
		se(contador % 2 != 0)
		{
			soma = soma + (1.0 / contador)
	
		}
		senao
		{
			soma = soma - (1.0 / contador)
		}
		contador++
		}
		escreva(soma)
}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 270; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */