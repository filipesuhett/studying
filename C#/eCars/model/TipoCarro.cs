namespace eCars.model;

public class TipoCarro
{
    private string nome { get; set; }
    
    public TipoCarro()
    {
        Console.WriteLine("Escolha o tipo de carro: ");
        
        Console.WriteLine("1 - Sedan");
        Console.WriteLine("2 - Hatch");
        Console.WriteLine("3 - SUV");
        Console.WriteLine("4 - Picape");
        Console.WriteLine("5 - Conversível");
        Console.WriteLine("6 - Esportivo");
        Console.WriteLine("7 - Van");
        Console.WriteLine("8 - Caminhonete");
        
        int opcao = int.Parse(Console.ReadLine());
        
        switch (opcao)
        {
            case 1:
                nome = "Sedan";
                break;
            case 2:
                nome = "Hatch";
                break;
            case 3:
                nome = "SUV";
                break;
            case 4:
                nome = "Picape";
                break;
            case 5:
                nome = "Conversível";
                break;
            case 6:
                nome = "Esportivo";
                break;
            case 7:
                nome = "Van";
                break;
            case 8:
                nome = "Caminhonete";
                break;
            default:
                Console.WriteLine("Opção inválida");
                break;
        }
    }
}