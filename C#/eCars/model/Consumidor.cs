namespace eCars.model;

public class Consumidor
{
    private string email { get; set; }
    private string nome { get; set; }
    private string cpf { get; set; }
    private List<Favorito> favoritos { get; set; }
    private CarroPreferencia carroPreferencia { get; set; }
    
    public Consumidor(string email, string nome, string cpf, CarroPreferencia carroPreferencia)
    {
        this.email = email;
        this.nome = nome;
        this.cpf = cpf;
        this.carroPreferencia = carroPreferencia;
        favoritos = new List<Favorito>();
    }
    
}