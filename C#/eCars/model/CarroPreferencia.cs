namespace eCars.model;

public class CarroPreferencia
{
    private Data data { set; get; }
    private Horario horario { set; get; }
    private TipoCarro tipoCarro { set; get; }
    
    public CarroPreferencia(Data data, Horario horario)
    {
        this.data = data;
        this.horario = horario;
        tipoCarro = new TipoCarro();
    }
}