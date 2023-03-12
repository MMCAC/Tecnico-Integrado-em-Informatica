package Empresa;

public class Gerente extends Colaboradores implements Autenticacao, Bonificacao
{
    public static void main(String[] args)
    {
        //Colaboradores a = new Colaboradores("Kyt","123456789",1000,100);
        
    }

    @Override
    public boolean login(int senha) {
        return true;
    }
    @Override
    public double CalculoDeBonus(double taxa) {
        return getSalario() * taxa;
    }
    
}
