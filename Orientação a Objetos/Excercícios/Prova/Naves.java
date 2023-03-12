package GuerraEspacial;

public abstract class Naves {
    private String Nome;
    private int Ataque;
    private int Vida;
    

            
    public void Nave(String Nome, int Ataque, int Vida)
    {
        this.Nome = Nome;
        this.Ataque = Ataque;
        this.Vida = Vida;
    }
    public void Nave()
    {
    }
 
   
    
    
    
    
    abstract public void atacar();
    
    abstract public void recuperar();

    abstract public void imprimirInfo();
    
    
    

    public String getNome() {
        return Nome;
    }

    public void setNome(String Nome) {
        this.Nome = Nome;
    }

    public int getAtaque() {
        return Ataque;
    }

    public void setAtaque(int Ataque) {
        this.Ataque = Ataque;
    }

    public int getVida() {
        return Vida;
    }

    public void setVida(int Vida) {
        this.Vida = Vida;
    }
    
    
}
