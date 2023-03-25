
import java.util.Scanner;
class Employee{
    String name;
    String city;
    double basic;
    double DA;
    double HRA;
    void getdata(){
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter employee name :");
        name = scanner.next();
        System.out.println("Enter employee city :");
        city = scanner.next();
        System.out.println("Enter employee salary :");
        basic = scanner.nextDouble();
        do{
            System.out.println("Enter employee allowanace :");
            DA = scanner.nextDouble();
        }while(DA<0 || DA>100);
        do{
            System.out.println("Enter employee house rent :");
            HRA = scanner.nextDouble();
        }while(HRA<0 || HRA>100);
    }
    double calculate(){
        double total =  basic+basic*DA/100+basic*HRA/100;
        return total;
    }
    void display(){
        System.out.println("Employee "+name);
        System.out.println("Employee city :"+city);
        System.out.println("Employee total salary is "+calculate());
    }
}
public class Main4 {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        Employee e1 = new Employee();
        e1.getdata();
        e1.display();
    }
}
