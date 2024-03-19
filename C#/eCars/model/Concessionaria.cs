namespace eCars.model;

public class Concessionaria
{
    private string cnpj {set; get;}
    private string nome {set; get;}
    private Endereco endereco {set; get;}
    private string telefone {set; get;}
    private string email {set; get;}
    private List<Carro> carros {set; get;}
    private List<Avaliacao> avaliacao {set; get;}
    
    public Concessionaria(string cnpj, string nome, Endereco endereco, string telefone, string email)
    {
        this.cnpj = cnpj;
        this.nome = nome;
        this.endereco = endereco;
        this.telefone = telefone;
        this.email = email;
        carros = new List<Carro>();
        avaliacao = new List<Avaliacao>();
    }
}