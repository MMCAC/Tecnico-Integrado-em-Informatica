package Empresa;

public class Vendedor extends Colaboradores implements Autenticacao,Bonificacao
{
    @Override
    public boolean login(int senha) {
        return true;
    }

    @Override
    public double CalculoDeBonus(double taxa) {
        return getSalario() * taxa;
    }
    
}
