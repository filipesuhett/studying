namespace eCars.model
{
    public class Modelo
    {
        public string Marca { get; set; }
        public bool EhNovo { get; set; }
        public string NomeModelo { get; set; }
        public string Motor { get; set; }
        public string Transmissao { get; set; }
        public string Dimensoes { get; set; }
        public string Carroceria { get; set; }
        public string TipoFreio { get; set; }
        public string Suspensao { get; set; }
        public string Direcao { get; set; }
        public string Tracao { get; set; }
        public TipoCarro TipoCarro { get; set; }

        public Modelo(string marca, bool ehNovo, string nomeModelo, string motor, string transmissao, string dimensoes, string carroceria, string tipoFreio, string suspensao, string direcao, string tracao)
        {
            Marca = marca;
            EhNovo = ehNovo;
            NomeModelo = nomeModelo;
            Motor = motor;
            Transmissao = transmissao;
            Dimensoes = dimensoes;
            Carroceria = carroceria;
            TipoFreio = tipoFreio;
            Suspensao = suspensao;
            Direcao = direcao;
            Tracao = tracao;
            TipoCarro = new TipoCarro();
        }
    }
}