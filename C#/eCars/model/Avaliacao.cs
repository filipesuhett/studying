namespace eCars.model;

public class Avaliacao
{
    private string comentario { get; set; }
    private int nota { get; set; }
    private Consumidor consumidor { get; set; }
    
    public Avaliacao(string comentario, int nota, Consumidor consumidor)
    {
        this.comentario = comentario;
        this.nota = nota;
        this.consumidor = consumidor;
    }
}