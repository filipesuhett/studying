namespace eCars.model;

public class Endereco
{
    private string logradouro { set; get;}
    private string numero { set; get;}
    private string bairro { set; get;}
    private string complemento { set; get;}
    private string cep { set; get;}
    private string cidade { set; get;}
    private string estado { set; get;}
    
    public Endereco(string logradouro, string numero, string bairro, string complemento, string cep, string cidade, string estado)
    {
        this.logradouro = logradouro;
        this.numero = numero;
        this.bairro = bairro;
        this.complemento = complemento;
        this.cep = cep;
        this.cidade = cidade;
        this.estado = estado;
    }
}