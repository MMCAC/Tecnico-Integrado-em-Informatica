package GuerraEspacial;

public class main extends Naves
{
        public static void main(String[] args)
    {
        Rebelde rebelde = new Rebelde("Léia", 10, 100);
        Imperio imperio = new Imperio("Vader", 15, 100);
        Imperio.atacar(rebelde);
        Imperio.atacar(rebelde);
        Imperio.atacar(rebelde);
        Rebelde.atacar(imperio);
        Imperio.atacar(rebelde);
        Rebelde.atacar(imperio);
        Imperio.atacar(rebelde);
        Imperio.atacar(rebelde);
        Imperio.imprimirInfo();
        Rebelde.imprimirInfo();
    }
}
