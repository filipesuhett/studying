/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.banco;

import java.util.Scanner;

/**
 *
 * @author 20221bsi0340
 */
public class Pessoa {
    protected String nome;
    protected Data dtNasc;
    protected char sexo;
    protected String cpf;


    public Pessoa() {
        System.out.println("------------------------------------------------------------");
        Scanner s = new Scanner(System.in);

        System.out.println("Digite o nome: ");
        this.setNome(s.nextLine());

        System.out.println("Sua data de nascimento");
        this.setDtNasc(new Data());

        System.out.println("Digite o seu CPF: ");
        this.setCpf(s.nextLine());

        System.out.println("Qual o seu sexo? ");
        this.setSexo(s.nextLine().charAt(0));
    }
    public Pessoa(String n, Data d, char s, String c) {
        System.out.println("Nova pessoa criada com sucesso!");
        this.setNome(n);
        this.setDtNasc(d);
        this.setSexo(s);
        this.setCpf(c);
    }

    public int idade(Data dataHoje) {
        int age = dataHoje.getAno() - this.getDtNasc().getAno();
        int mes = dataHoje.getMes() - this.getDtNasc().getMes();
        int day = dataHoje.getDia() - this.getDtNasc().getDia();

        if (mes == 0) {
            if (day < 0) {
                age -= 1;
            }
        }
        else if (mes < 0) {
            age -= 1;
        }

        return age;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public Data getDtNasc() {
        return dtNasc;
    }

    public void setDtNasc(Data dtNasc) {
        this.dtNasc = dtNasc;
    }

    public char getSexo() {
        return sexo;
    }

    public void setSexo(char sexo) {
        this.sexo = sexo;
    }

    public String getCpf() {
        return cpf;
    }

    public void setCpf(String cpf) {
        this.cpf = cpf;
    }
}
