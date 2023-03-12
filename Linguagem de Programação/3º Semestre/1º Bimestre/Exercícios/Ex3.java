package ex3;




import java.util.Scanner;




public class Ex3 {




  public static void main(String[] args) {

   

   

   Scanner scan = new Scanner(System.in);

        

        System.out.println("Data de Nascimento (DD/MM/AAAA):");

        String data = scan.nextLine();

        

        String[] deco = data.split("/");

        String dia = deco[0];

        String mes = deco[1];

        String ano = deco[2];

        

        String[] meses = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

        

        for(int i=0; i<12; i++){

          if(Integer.parseInt(mes)-1==i){

            mes = meses[i];

            break;

            

          }

        }

           

        

        System.out.println("Você nasceu em "+dia+" de "+mes+" de "+ano);

  }

}




