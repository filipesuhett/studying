package com.mycompany.banco;

public class Poupanca extends Conta{

    Poupanca(Pessoa t, Gerente g) {
        super(g, t);
    }

    Poupanca (String n, Pessoa t, Data c, Gerente g) {
        super(n, t, c, g);
    }

    public void extrato(){
        System.out.println("------------------------------------------------------------");
        System.out.println("#### EXTRATO DA POUPANÇA ####");
        super.extrato();
    }

    public void rendimentos(double juros) {
        double sal = this.getSaldo();
        System.out.println("------------------------------------------------------------");
        System.out.println("Seu saldo no dia 1 dia | " + sal);
        if (sal > 0) {
            sal += (juros / 100) * sal;
            for (int i = 1; i <= 120; i++) {
                if (i == 120) {
                    System.out.println("Seu saldo após " + i + " dias | " + sal);
                }
            }
        }
    }
}
