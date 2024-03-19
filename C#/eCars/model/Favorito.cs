namespace eCars.model;

public class Favorito
{
    private int quantidade { get; set; }
    private List<Carro> carro { get; set; }
    
    public Favorito(int quantidade)
    {
        this.quantidade = quantidade;
        carro = new List<Carro>();
    }
}