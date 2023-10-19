/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Project/Maven2/JavaApp/src/main/java/${packagePath}/${mainClassName}.java to edit this template
 */

package com.mycompany.banco;

import java.util.ArrayList;
import java.util.Scanner;

/**
 *
 * @author 20221bsi0340
 */
public class Banco {
    public static int menuInicial() {
        Scanner s = new Scanner(System.in);

        System.out.println("--------------------------------------------------");
        System.out.println("Bem vindo meu cria! Escolhe uma opcao ai pra nois.\n");
        System.out.println("--------------------------------------------------");
        System.out.println("1 - Cadastrar");
        System.out.println("2 - Movimentações");
        System.out.println("0 - Sair");

        return s.nextInt();
    }

    public static void menuCadastro(ArrayList<Pessoa> p, ArrayList<Gerente> g, ArrayList<Conta> c) {
        Scanner s = new Scanner(System.in);

        System.out.println("--------------------------------------------------");
        System.out.println("O que deseja cadastrar?");
        System.out.println("1 - Novo Cliente");
        System.out.println("2 - Novo Gerente");
        System.out.println("3 - Nova Conta Corrente");
        System.out.println("4 - Nova Conta Poupança");

        int op = s.nextInt();

        if (op == 1) {
            p.add(new Pessoa());
        }
        if (op == 2) {
            g.add(new Gerente());
        }
        if (op == 3) {
            Pessoa tit = escolherPessoa(p);
            Gerente ger = escolherGerente(g);
            c.add(new ContaCorrente(tit, ger));
        }
        if (op == 4) {
            Pessoa tit = escolherPessoa(p);
            Gerente ger = escolherGerente(g);
            c.add(new Poupanca(tit, ger));
        }
    }

    public static Pessoa escolherPessoa(ArrayList<Pessoa> p) {
        Scanner s = new Scanner (System.in);
        int i = 1;
        System.out.println("Escolha o cliente da conta: ");

        for (Pessoa tit : p) {
            System.out.println((i + ") " + tit.getCpf() + " - " + tit.getNome()));
            i++;
        }

        int index = s.nextInt();
        return p.get(index -1);
    }

    public static Gerente escolherGerente(ArrayList<Gerente> g) {
        Scanner s = new Scanner (System.in);
        int i = 1;
        System.out.println("Escolha o cliente da conta: ");

        for (Gerente ger : g) {
            System.out.println((i + ") " + ger.getCpf() + " - " + ger.getNome()));
            i++;
        }

        int index = s.nextInt();
        return g.get(index -1);
    }

    public static void menuMovimentacoes (ArrayList<Pessoa> p, ArrayList<Gerente> g, ArrayList<Conta> c) {
        Scanner s = new Scanner(System.in);

        Conta conta1 = escolherConta(c);
        System.out.println("--------------------------------------------------");
        System.out.println("O que deseja Realizar?");
        System.out.println("1 - Extrato");
        System.out.println("2 - Saque");
        System.out.println("3 - Deposito");
        System.out.println("4 - Transferencia");

        int op = s.nextInt();

        if (op == 1) {
            conta1.extrato();
        }
        if (op == 2) {
            conta1.sacar();
        }
        if (op == 3) {
            conta1.depositar();
        }
        if (op == 4) {
            System.out.println("Qual a conta destino?");
            Conta conta2 = escolherConta(c);
            conta1.transferir(conta2);
        }
    }

    public static Conta escolherConta(ArrayList<Conta> c) {
        Scanner s = new Scanner (System.in);
        int i = 1;
        System.out.println("Escolha a conta: ");

        for (Conta conta : c) {
            System.out.println((i + ") " + conta.getNumero() + " - " + conta.getTitular().getNome()));
            i++;
        }

        int index = s.nextInt();
        return c.get(index -1);
    }

    public static void main(String[] args) {
        ArrayList<Pessoa> p = new ArrayList<>();
        ArrayList<Gerente> g = new ArrayList<>();
        ArrayList<Conta> c = new ArrayList<>();

        int op = menuInicial();
        while (op != 0) {
            if (op == 1) {
                menuCadastro(p, g, c);
            }
            if (op == 2) {
                menuMovimentacoes(p, g, c);
            }
            op = menuInicial();
        }

        System.out.println("\nBye Bye! :-)");


    }
}
