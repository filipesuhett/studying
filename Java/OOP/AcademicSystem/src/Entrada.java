import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.util.Scanner;

/**
 * Classe com as rotinas de entrada e saída do projeto
 * @author Filipe SUhett, Giovanna Scalfoni e Hilario Seibel Junior
 */
public class Entrada {
    public Scanner input;


    /**
     * Construtor da classe InputOutput
     * Se houver um arquivo input.txt, define que o Scanner vai ler deste arquivo.
     * Se o arquivo não existir, define que o Scanner vai ler da entrada padrão (teclado)
     */
    public Entrada() {
        try {
            // Se houver um arquivo input.txt, o Scanner vai ler dele.
            this.input = new Scanner(new FileInputStream("input.txt"));
        } catch (FileNotFoundException e) {
            // Caso contrário, vai ler do teclado.
            this.input = new Scanner(System.in);
        }
    }

    /**
     * Faz a leitura de uma linha inteira
     * Ignora linhas começando com #, que vão indicar comentários no arquivo de entrada:
     * @param msg: Mensagem que será exibida ao usuário
     * @return Uma String contendo a linha que foi lida
     */
    private String lerLinha(String msg) {
        // Imprime uma mensagem ao usuário, lê uma e retorna esta linha
        System.out.print(msg);
        String linha = this.input.nextLine();

        // Ignora linhas começando com #, que vão indicar comentários no arquivo de entrada:
        while (linha.charAt(0) == '#') linha = this.input.nextLine();
        return linha;
    }

    /**
     * Faz a leitura de um número inteiro
     * @param msg: Mensagem que será exibida ao usuário
     * @return O número digitado pelo usuário convertido para int
     */
    private int lerInteiro(String msg) {
        // Imprime uma mensagem ao usuário, lê uma linha contendo um inteiro e retorna este inteiro
        String linha = this.lerLinha(msg);
        return Integer.parseInt(linha);
    }

    /**
     * Faz a leitura de um double
     * @param msg: Mensagem que será exibida ao usuário
     * @return O número digitado pelo usuário convertido para double
     */
    private double lerDouble(String msg) {
        // Imprime uma mensagem ao usuário, lê uma linha contendo um double e retorna este double
        String linha = this.lerLinha(msg);
        return Double.parseDouble(linha);
    }

    /**
    * Imprime o menu principal, lê a opção escolhida pelo usuário e retorna a opção selecionada.
    * @return Inteiro contendo a opção escolhida pelo usuário
    */
    public int menu1() {
        // Imprime o menu principal, lê a opção escolhida pelo usuário e retorna a opção selecionada.

        String msg = "*********************\n" +
                "Escolha uma opção:\n" +
                "1) Cadastrar professor:\n" +
                "2) Cadastrar aluno:\n" +
                "3) Cadastrar turma:\n" +
                "0) Sair\n";

        int op = this.lerInteiro(msg);

        while (op < 0 || op > 3) {
            System.out.println("Opção inválida. Tente novamente: ");
            op = this.lerInteiro(msg);
        }

        return op;
    }

    /***************************************************/

    /**
     * Lê os dados de um novo Teacher e cadastra-o no sistema.
     * @param s: Um objeto da classe AcademicSys
     */
    public void cadProf(AcademicSys s) {
        s.listTeacher();

        String nome = this.lerLinha("Digite o nome do professor: ");
        String cpf = this.lerLinha("Digite o cpf do professor: ");
        double salario = this.lerDouble("Digite o salário do professor: R$");

        if (s.findTeacher(cpf) == null) { // Garantindo que o não CPF esteja duplicado.
            Teacher p = new Teacher(nome, cpf, salario);
            s.newTeacher(p);
        }
        else {
            System.out.println("Erro: CPF duplicado. Professor não adicionado.");
        }
    }

    /**
     * Lê os dados de um novo Student e cadastra-o no sistema.
     * @param s: Um objeto da classe AcademicSys
     */
    public void cadAluno(AcademicSys s) {
        s.listStudent();

        String nome = this.lerLinha("Digite o nome do aluno: ");
        String cpf = this.lerLinha("Digite o cpf do aluno: ");
        String mat = this.lerLinha("Digite a matrícula do aluno: ");

        if (s.findStudent(mat) == null) { // Garantindo que a matrícula não esteja duplicada.
            Student a = new Student(nome, cpf, mat);
            s.newStudents(a);
        }
        else {
            System.out.println("Erro: Matrícula duplicada. Aluno não adicionado.");
        }
    }

    /***************************************************/

    /**
     * Lê o CPF de um Teacher e localiza-o no sistema.
     * @param s: Um objeto da classe AcademicSys
     * @return Um objeto da classe Teacher.
     */
    private Teacher lerProf(AcademicSys s) {
        s.listTeacher();

        String cpf = this.lerLinha("Digite o CPF do professor: ");
        Teacher p = s.findTeacher(cpf);

        while (p == null) {
            cpf = this.lerLinha("CPF inválido. Digite outro: ");
            p = s.findTeacher(cpf);
        }

        return p;
    }

    /**
     * Lê um número de Students, depois a matrícula de cada Student e localiza-os no sistema.
     * @param s: Um objeto da classe AcademicSys
     * @return Um array contendo todos os objetos da classe Student cujas matrículas foram digitadas.
     */
    private Student[] lerAluno(AcademicSys s) {
        int nStudents = this.lerInteiro("Digite a quantidade de alunos na disciplina: ");
        Student[] Students = new Student[nStudents];

        for(int i=0; i<nStudents; i++) {
            s.listStudent();

            String mat = this.lerLinha("Digite a matrícula do alunos: ");
            Student a = s.findStudent(mat);

            while (a == null) {
                mat = this.lerLinha("Matrícula inválida. Digite outra: ");
                a = s.findStudent(mat);
            }

            Students[i] = a;
        }

        return Students;
    }

    /**
     * Lê as notas de um Student em uma Test.
     * @param s: Um objeto da classe AcademicSys
     * @param a: Um objeto da classe Student
     * @param nQuestoes: Inteiro com o número de questões nesta Test
     * @return Um objeto da classe StudentTest, com as respectivas as notas do Student em cada questão da Test.
     */
    private StudentTest lerAlunoProva(AcademicSys s, Student a, int nQuestoes) {
        double[] notas = new double[nQuestoes];

        for (int i=0; i<nQuestoes; i++) {
            notas[i] = lerDouble("Nota de " + a.getName() + " na questão " + (i+1) + ": ");
        }

        return new StudentTest(a, notas);
    }

    /**
     * Lê os dados de uma Test.
     * @param s: Um objeto da classe AcademicSys
     * @param Students: Um array com todos os Students que fizeram esta Test.
     * @return Um novo objeto da classe Test com todos os dados que foram lidos.
     */
    private Test lerProva(AcademicSys s, Student[] Students) {
        String nome = this.lerLinha("Informe o nome desta Prova: ");

        int dia = this.lerInteiro("Digite o dia da prova: ");
        int mes = this.lerInteiro("Digite o mês da prova: ");
        int ano = this.lerInteiro("Digite o ano da prova: ");
        Date aplic = new Date(dia, mes, ano);

        double valor = this.lerDouble("Digite o valor máximo desta avaliação: ");
        int nQuestoes = this.lerInteiro("Digite o número de questões: ");

        StudentTest[] notas = new StudentTest[Students.length];
        for (int i = 0; i< Students.length; i++) {
            notas[i] = this.lerAlunoProva(s, Students[i], nQuestoes);
        }

        return new Test(nome, aplic, valor, nQuestoes, notas);
    }

    /**
     * Lê a avaliação que o Teacher fez de um Student em um trabalho.
     * @param s: Um objeto da classe AcademicSys
     * @param a: Um objeto da classe Student
     * @return Um objeto da classe StudentAssignment com as informações lidas sobre o Student neste trabalho.
     */
    private StudentAssignment lerAlunoTrab(AcademicSys s, Student a) {
        double nota = this.lerDouble("Nota do " + a.getName() + " no trabalho: ");

        int dia = this.lerInteiro("Digite o dia de entrega do trabalho: ");
        int mes = this.lerInteiro("Digite o mês de entrega do trabalho: ");
        int ano = this.lerInteiro("Digite o ano de entrega do trabalho: ");
        Date entrega = new Date(dia, mes, ano);

        int tempoExec = this.lerInteiro("Informe o tempo de processamento: ");

        return new StudentAssignment(a, nota, entrega, tempoExec);
    }

    /**
     * Lê os dados de um Assignment.
     * @param s: Um objeto da classe AcademicSys
     * @param Students: Um array com todos os Students que fizeram esta Test.
     * @return Um novo objeto da classe Assignment com todos os dados que foram lidos.
     */
    private Assignment lerTrabalho(AcademicSys s, Student[] Students) {
        String nome = this.lerLinha("Informe o nome desta avaliação: ");

        int dia = this.lerInteiro("Digite o dia do trabalho: ");
        int mes = this.lerInteiro("Digite o mês do trabalho: ");
        int ano = this.lerInteiro("Digite o ano do trabalho: ");
        Date aplic = new Date(dia, mes, ano);

        double valor = this.lerDouble("Digite o valor máximo desta avaliação: ");
        int tempoEsp = this.lerInteiro("Digite o tempo esperado pelo professor: ");

        StudentAssignment[] notas = new StudentAssignment[Students.length];
        for (int i=0; i<Students.length; i++) {
            notas[i] = this.lerAlunoTrab(s, Students[i]);
        }

        return new Assignment(nome, aplic, valor, tempoEsp, notas);
    }

    /**
     * Lê as avaliações de uma certa disciplina.
     * @param s: Um objeto da classe AcademicSys
     * @param Students: Um array com todos os Students que fizeram esta Test.
     * @return Um array com todas as avaliações da disciplina.
     */
    private Exam[] lerAvaliacoes(AcademicSys s, Student[] Students) {
        int nAvaliacoes = this.lerInteiro("Digite a quantidade de avaliações na disciplina: ");
        Exam[] avs = new Exam[nAvaliacoes];

        for (int i=0; i<nAvaliacoes; i++) {
            int op = this.lerInteiro("Escolha um tipo de avaliação:\n1) Prova\n2) Trabalho");

            while (op != 1 && op != 2) {
                op = this.lerInteiro("Tipo de avaliação inválida. Tente novamente: ");
            }

            if (op == 1) avs[i] = this.lerProva(s, Students);
            else avs[i] = this.lerTrabalho(s, Students);
        }

        return avs;
    }

    /**
     * Lê os dados de uma Classroom.
     * @param s: Um objeto da classe AcademicSys
     * @return Um novo objeto da classe Classroom com todos os dados desta Classroom.
     */
    public Classroom cadTurma(AcademicSys s) {
        String disciplina = this.lerLinha("Digite o nome da disciplina: ");
        int ano = this.lerInteiro("Digite o ano da disciplina: ");
        int sem = this.lerInteiro("Digite o semestre da disciplina: ");

        Teacher p = this.lerProf(s);
        Student[] Students = this.lerAluno(s);
        Exam[] avs = this.lerAvaliacoes(s, Students);

        return new Classroom(disciplina, ano, sem, p, Students, avs);

    }

}