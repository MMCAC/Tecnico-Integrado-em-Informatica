package exercises;
/*
1 – Tamanho de strings. Faça um programa que leia 2 strings e informe o conteúdo delas seguido
do seu comprimento. Informe também se as duas strings possuem o mesmo comprimento e são
iguais ou diferentes no conteúdo.
Compara duas strings
String 1: Brasil Hexa 2006
String 2: Brasil! Hexa 2006!
Tamanho de "Brasil Hexa 2006": 16 caracteres
Tamanho de "Brasil! Hexa 2006!": 18 caracteres
As duas strings são de tamanhos diferentes.
As duas strings possuem conteúdo diferente.
2 – Nome ao contrário em maiúsculas. Faça um programa que permita ao usuário digitar o seu
nome e em seguida mostre o nome do usuário de trás para frente utilizando somente letras
maiúsculas. Dica: lembre−se que ao informar o nome o usuário pode digitar letras maiúsculas ou
minúsculas.
3 – Data por extenso. Faça um programa que solicite a data de nascimento (dd/mm/aaaa) do
usuário e imprima a data com o nome do mês por extenso.
Data de Nascimento: 29/10/1973
Você nasceu em 29 de Outubro de 1973.
4 – Palíndromo. Um palíndromo é uma sequência de caracteres cuja leitura é idêntica se feita da
direita para esquerda ou vice−versa. Por exemplo: OSSO e OVO são palíndromos. Em textos mais
complexos os espaços e pontuação são ignorados. A frase SUBI NO ONIBUS é o exemplo de uma
frase palíndroma onde os espaços foram ignorados. Faça um programa que leia uma seqüência de
caracteres, mostre−a e diga se é um palíndromo ou não.
*/
import java.util.*;

public class Exercises {


    public static void main(String[] args) {
        
        Scanner imput = new Scanner(System.in);
        
        System.out.printf("----------Exercício 1----------\n");
        
        System.out.printf("Informe a primeira frase:\n");
        String first = imput.nextLine();
        
        System.out.printf("Informe a segunda frase:\n");
        String second = imput.nextLine();
        
        System.out.println("\nTamanho de '"+first+"': "+first.length());
        System.out.println("Tamanho de '"+second+"': "+second.length());
        
        if(first.equals(second))
        {
            System.out.println("\nAs frases são iguais!");
        }
        else
        {
            System.out.println("\nAs frases são diferentes!");
        } 
        
        
        
        
        
        
        
        System.out.printf("\n\n----------Exercício 2----------\n");
        Scanner imput1 = new Scanner(System.in);
        
        System.out.printf("Informe o seu nome:\n");
        String nome = imput1.nextLine();
        
        System.out.printf("\nNome com letras maiúculas:\n");
        System.out.println(nome.toUpperCase());
        
        nome = nome.toUpperCase();
        
        String invertida = new StringBuilder(nome).reverse().toString();
        
        System.out.printf("\nNome invertido e com letras maiúsculas:\n");
        System.out.println(invertida);
        
        
        
        
        
        
        System.out.printf("\n\n----------Exercício 3----------\n");
        
        
        
        
        
        
        
        System.out.printf("\n\n----------Exercício 4----------\n");
        Scanner imput3 = new Scanner(System.in);
        
        System.out.printf("\nInforme uma frase:\n");
        
        String st = imput.nextLine();
        String stAux = st.replaceAll("\\s+", "");

        String stReverse = new StringBuilder(stAux).reverse().toString();
        String stReverseAux = new StringBuilder(st).reverse().toString();

        System.out.println("\nOriginal: "+st);
        System.out.println("Invertido: "+stReverseAux);

        if (stAux.equalsIgnoreCase(stReverse))
        {
            System.out.println("\nÉ um palíndromo!");
        }
        else
        {
            System.out.println("\nNão é um palíndromo!");
        }
    }  
}
  