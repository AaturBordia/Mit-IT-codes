import java.util.Scanner;
class Complex{
    int real;
    int complex;
    Complex(int r,int c){
        real = r;
        complex = c;
    }
    void display(){
        System.out.println(real+" + i"+complex);
    }
}
public class Main {
    static Complex add(Complex c1,Complex c2){
        int re = c1.real+c2.real;
        int com = c1.complex+c2.complex;
        Complex c = new Complex(re,com);
        return c;
    }
    static Complex add(int r1,Complex c2){
        int re = r1+c2.real;
        int com = c2.complex;
        Complex c = new Complex(re,com);
        return c;
    }
    public static void main(String[] args){
        Complex c1 = new Complex(1,5);
        Complex c2 = new Complex(3,6);
        Complex c = add(c1,c2);
        c.display();
        Complex c3 = add(3,c);
        c3.display();
    }
}
