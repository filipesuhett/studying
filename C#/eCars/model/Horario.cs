namespace eCars.model;

public class Horario
{
    private int hora { get; set; }
    private int minuto { get; set; }
    
    public Horario(int hora, int minuto)
    {
        this.hora = hora;
        this.minuto = minuto;
    }
}