package com.mycompany.banco;

import java.util.Scanner;

public class Gerente extends Pessoa {
    private String mat;
    private String senha;

    public Gerente(String n, Data d, char s, String c, String m, String senha) {
        super(n, d, s, c);
        this.setMat(m);
        this.setSenha(senha);
    }

    public Gerente() {
        super();

        Scanner s = new Scanner(System.in);

        System.out.println("Digite sua matricula: ");
        this.setMat(s.nextLine());

        this.setSenha("123456");
    }

    public Boolean validarAcesso(String sen) {return sen.equals(this.getSenha());}

    public Boolean validarAcesso() {
        Scanner s = new Scanner(System.in);

        System.out.println("Digite sua senha: ");
        String sen = s.nextLine();

        return sen.equals(this.getSenha());
    }

    public String getMat() {
        return mat;
    }

    public void setMat(String mat) {
        this.mat = mat;
    }

    public String getSenha() {
        return senha;
    }

    public void setSenha(String senha) {
        this.senha = senha;
    }
}


