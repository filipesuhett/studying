namespace eCars.model;

public class Carro
{
    private int preco { get; set; }
    private string cor { get; set; }
    private Modelo modelo { get; set; }
    private int ano { get; set; }
    private int cavalos { get; set; }
    private bool situacaoCompra { get; set; }
    private Data dataCadastro { get; set; }
    private List<Recurso> recursos { get; set; }
    private List<Agendamento> agendamentos { get; set; }
    
    public Carro(int preco, string cor, Modelo modelo, int ano, int cavalos, bool situacaoCompra, Data dataCadastro)
    {
        this.preco = preco;
        this.cor = cor;
        this.modelo = modelo;
        this.ano = ano;
        this.cavalos = cavalos;
        this.situacaoCompra = situacaoCompra;
        this.dataCadastro = dataCadastro;
        agendamentos = new List<Agendamento>();
        
        Console.WriteLine("Digite a quantidade de Recursos: ");
        int quantidade = int.Parse(Console.ReadLine());
        
        recursos = new List<Recurso>();
        
        for (int i = 0; i < quantidade; i++)
        {
            Console.WriteLine("Digite o nome do recurso: ");
            string nome = Console.ReadLine();
            recursos.Add(new Recurso(nome));
        }
    }
}