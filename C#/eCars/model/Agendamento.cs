namespace eCars.model;

public class Agendamento
{
    private Data data { set; get; }
    private Consumidor consumidor { set; get; }
    private Carro carro { set; get; }
    private Horario horario { set; get; }
    
    public Agendamento(Data data, Consumidor consumidor, Carro carro, Horario horario)
    {
        this.data = data;
        this.consumidor = consumidor;
        this.carro = carro;
        this.horario = horario;
    }
}