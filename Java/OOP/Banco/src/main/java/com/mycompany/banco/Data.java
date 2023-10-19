package com.mycompany.banco;

import java.util.Scanner;

public class Data {
    private int dia;
    private int mes;
    private int ano;


   public Data() {
        Scanner s = new Scanner(System.in);

        System.out.println("Digite o dia: ");
        this.setDia(s.nextInt());

        System.out.println("Digite o mes: ");
        this.setMes(s.nextInt());

        System.out.println("Digite o ano: ");
        this.setAno(s.nextInt());
    }
    public Data(int d, int m, int a) {
        this.setDia(d);
        this.setMes(m);
        this.setAno(a);
    }

    public void printAno(){
        if(this.getDia() >= 10) {
            if(this.getMes() >= 10) {
                System.out.println("------------------------------------------------------------");
                System.out.println(this.getDia() + "/" + this.getMes() + "/" + this.getAno());
            }
            else {
                System.out.println("------------------------------------------------------------");
                System.out.println(this.getDia() + "/0" + this.getMes() + "/" + this.getAno());
            }
        }
        else {
            if(this.getMes() >= 10) {
                System.out.println("------------------------------------------------------------");
                System.out.println("0" + this.getDia() + "/" + this.getMes() + "/" + this.getAno());
            }
            else {
                System.out.println("------------------------------------------------------------");
                System.out.println("0" + this.getDia() + "/0" + this.getMes() + "/" + this.getAno());
            }
        }
    }

    public void maior(Data data) {
        int age = data.getAno() - this.getAno();
        int mes = data.getMes() - this.getMes();
        int day = data.getDia() - this.getDia();

        if (mes == 0) {
            if (day < 0) {
                age -= 1;
            }
        }
        else if (mes < 0) {
            age -= 1;
        }

        if (age > 0) {
            System.out.println("------------------------------------------------------------");
            System.out.println("Data 1 maior que Data 2");
        }

        else if (age < 0) {
            System.out.println("------------------------------------------------------------");
            System.out.println("Data 2 maior que Data 1");
        }

        else {
            System.out.println("------------------------------------------------------------");
            System.out.println("Mesma Data");
        }
    }

    public int getDia() {
        return dia;
    }

    public void setDia(int dia) {
        this.dia = dia;
    }

    public int getMes() {
        return mes;
    }

    public void setMes(int mes) {
        this.mes = mes;
    }

    public int getAno() {
        return ano;
    }

    public void setAno(int ano) {
        this.ano = ano;
    }
}
