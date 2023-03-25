import java.util.Scanner;
class Box{
    double length, breadth, width;
    Box(){
        length=1;
        breadth=1;
        width=1;
    }    
    Box(double l,double b, double w){
        length=l;
        breadth=b;
        width=w;
    }    
    double volume(){
        double volume=length*breadth*width;
        return volume;
    }
}

public class Main{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the length:");
        double l=sc.nextDouble();
        System.out.println("Enter the breadth:");
        double b=sc.nextDouble();
        System.out.println("Enter the width:");
        double w=sc.nextDouble();
        Box b1=new Box();
        System.out.println(b1.volume());
        Box b2=new Box(10,10,10);
        System.out.println(b2.volume());
        Box b3=new Box(l,b,w);
        System.out.println(b3.volume());
    }
} 
