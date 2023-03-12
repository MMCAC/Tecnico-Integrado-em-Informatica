package GuerraEspacial;

public class Rebelde extends Naves implements escudo
{

    @Override
    public void atacar(Imperio alvo) {
        int Ataque = getAtaque();
        int dano = alvo.getVida() - Ataque;
        alvo.setVida(dano);
    }

    @Override
    public void recuperar() 
    {
        int Recuperar = getVida();
        Recuperar += 20;
        Rebelde.setVida() = Recuperar;
    }

    @Override
    public void imprimirInfo() 
    {
        System.out.println("Nome do piloto: "+ getNome());
        System.out.println("Poder de Ataque: "+ getAtaque());
        System.out.println("Vida: "+ getVida());
    }
        
}
