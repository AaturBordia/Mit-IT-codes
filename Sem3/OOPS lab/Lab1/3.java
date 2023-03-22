import java.util.Scanner;
public class Main{
       public static void main(String[] args){
            odd();
       }
       static void odd(){
            Scanner sc=new Scanner(System.in);
            System.out.println("Odd numbers between 1 to 100 are: /n");
            for(int i=1;i<=100;i++){
                if(i%2!=0)
                   System.out.print(i+" ");
            }
       }
}
