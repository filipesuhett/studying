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
public class Conta {
    protected String numero;
    protected Pessoa titular;
    protected double saldo;
    protected Data criacao;
    protected Gerente gerente;

    public Conta(Gerente g, Pessoa t) {
        System.out.println("------------------------------------------------------------");
        Scanner s = new Scanner(System.in);

        System.out.println("Digite o numero da conta: ");
        this.setNumero(s.nextLine());

        this.setTitular(t);

        System.out.println("Digite a data de criação da conta: ");
        this.setCriacao(new Data());

        this.setGerente(g);

        this.setSaldo(0);
    }

    public Conta(String n, Pessoa t, Data c, Gerente g) {
        this.setNumero(n);
        this.setTitular(t);
        this.setSaldo(0);
        this.setGerente(g);
        this.setCriacao(c);
    }

    protected double disponivel() {
        return this.getSaldo();
    }

    public void extrato(){
        System.out.println("Conta: " + this.getNumero());
        System.out.println("Titular: " + this.getTitular().getCpf());
        System.out.println("Saldo disponível: " + this.disponivel());
    }

    public void depositar(){
        Scanner s = new Scanner(System.in);
        double valor = s.nextDouble();

        this.setSaldo(this.getSaldo() + valor);
        System.out.println("------------------------------------------------------------");
        System.out.println("Depositado");
    }

    public boolean sacar(){
        Scanner s = new Scanner(System.in);
        double valor = s.nextDouble();

        if (valor <= this.disponivel()) {
            this.setSaldo(this.getSaldo() - valor);
            System.out.println("------------------------------------------------------------");
            System.out.println("Você sacou " + valor);
            System.out.println("Saldo atual: " + this.getSaldo());
            System.out.println("Numero da Conta: " + this.getNumero());
            return true;
        }

        else {
            System.out.println("------------------------------------------------------------");
            System.out.println("Você não tem saldo suficiente para esse saque");
            System.out.println("Saldo da Conta: " + this.getSaldo());
            System.out.println("Numero da Conta: " + this.getNumero());
            return false;
        }
    }

    public boolean transferir(Conta dest){
        if (this.sacar()) {
            dest.depositar();
            System.out.println("------------------------------------------------------------");
            System.out.println("#### TRANSFERÊNCIA REALIZADA COM SUCESSO ####");
            System.out.println("Valor transferido");
            System.out.println("Transferencia da conta " + this.getNumero() + " para a conta " + dest.getNumero());
            return true;
        }

        else {
            System.out.println("------------------------------------------------------------");
            System.out.println("#### TRANSFERÊNCIA NÃO REALIZADA COM SUCESSO - SALDO INSUFICIENTE ####");
            System.out.println("Saldo disponivel: " + this.getSaldo());
            return false;
        }
    }

    public String getNumero() {
        return numero;
    }

    public void setNumero(String numero) {
        this.numero = numero;
    }

    public Pessoa getTitular() {
        return titular;
    }

    public void setTitular(Pessoa titular) {
        this.titular = titular;
    }

    public double getSaldo() {
        return saldo;
    }

    public void setSaldo(double saldo) {
        this.saldo = saldo;
    }

    public Data getCriacao() {
        return criacao;
    }

    public void setCriacao(Data criacao) {
        this.criacao = criacao;
    }

    public Gerente getGerente() {
        return gerente;
    }

    public void setGerente(Gerente gerente) {
        this.gerente = gerente;
    }
}



