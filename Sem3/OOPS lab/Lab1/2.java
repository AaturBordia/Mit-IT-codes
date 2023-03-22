import java.util.Scanner;
public class Main{
       public static void main(String[] args){
            count();
       }
       static void count(){
            Scanner sc=new Scanner(System.in);
            int countp=0,countz=0,countn=0;
            int x;
            System.out.println("Enter ten numbers: ");
            for(int i=1;i<=10;i++){
                 x=sc.nextInt();
                 if(x>0)
                    countp++;
                 else if(x<0)
                    countn++;
                 else 
                    countz++;
            }
            System.out.println("Number of negative numbers: "+countn);
            System.out.println("Number of positive numbers: "+countp);
            System.out.println("Number of zeroes are: "+countz);
       }
}
