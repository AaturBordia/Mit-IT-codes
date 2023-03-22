import java.util.Scanner;
public class Main{
       public static void main(String[] args){
              Scanner sc=new Scanner(System.in);
              System.out.println("Enter length: ");
              int l=sc.nextInt();
              System.out.println("Enter breadth: ");
              int b=sc.nextInt();
              rectangle(l,b);
       }
       static void rectangle(int l,int b){
             System.out.println("Area of rectangle is: "+(l*b));
             System.out.println("Perimeter of rectangle is: "+(2*(l*b)));
       }
}
