package GuerraEspacial;


public class Imperio extends Naves
{

    @Override
    public void atacar() 
    {
        double Ataque = getAtaque();
    }

    @Override
    public void recuperar() 
    {
        double Recuperar = getVida();
        Recuperar += 20;
        setVida() = Recuperar;
    }

    @Override
    public void imprimirInfo() 
    {
        System.out.println("Nome do piloto: "+ getNome());
        System.out.println("Poder de Ataque: "+ getAtaque());
        System.out.println("Vida: "+ getVida());

    }
    
}
