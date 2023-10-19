package com.mycompany.banco;

import java.util.Scanner;

public class ContaCorrente extends Conta{
    private double limite;

    ContaCorrente(Pessoa t, Gerente g) {
        super(g, t);
        this.setLimite(200);
    }

    ContaCorrente(String n, Pessoa t, Data c, Gerente g) {
        super(n, t, c, g);
        this.setLimite(200);
    }

    public void alterarLimite(String password, double l) {
        if (this.getGerente().validarAcesso(password)) {
            this.setLimite(l);
            System.out.println("------------------------------------------------------------");
            System.out.println("Limite alterado com sucesso!");
        }
        else {
            System.out.println("------------------------------------------------------------");
            System.out.println("Senha do Gerente errada - Alteração do Limite Recusada");
        }
    }

    public void alterarLimite() {
        Scanner s = new Scanner(System.in);

        System.out.println("Digite a senha do Gerente: ");
        String password = s.nextLine();

        if (this.getGerente().validarAcesso(password)) {
            System.out.println("Digite o novo limite da conta: ");
            int l = s.nextInt();
            this.setLimite(l);
            System.out.println("------------------------------------------------------------");
            System.out.println("Limite alterado com sucesso!");
        }
        else {
            System.out.println("------------------------------------------------------------");
            System.out.println("Senha do Gerente errada - Alteração do Limite Recusada");
        }
    }

    protected double disponivel() {
        return this.getSaldo() + this.getLimite();
    }

    public void extrato(){
        System.out.println("------------------------------------------------------------");
        System.out.println("#### EXTRATO DA CONTA CORRENTE ####");
        super.extrato();
    }

    public void chequeEspecial(double juros) {
        double sal = this.getSaldo();
        System.out.println("------------------------------------------------------------");
        System.out.println("Seu saldo no dia 1 dia | " + sal);
        if (sal < 0) {
            sal += (juros / 100) * sal;
            for (int i = 1; i <= 120; i++) {
                if (i == 120) {
                    System.out.println("Seu saldo após " + i + " dias | " + sal);
                }
            }
        }
    }

    public double getLimite() {
        return limite;
    }

    public void setLimite(double limite) {
        this.limite = limite;
    }
}
