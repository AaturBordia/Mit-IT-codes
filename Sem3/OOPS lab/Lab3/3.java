import java.util.Scanner;
public class Main{
      public static void main(String[] args){
            Scanner sc=new Scanner(System.in);
            System.out.println("Enter limits a and b: ");
            int a=sc.nextInt();
            int b=sc.nextInt();
            System.out.println("Print prime numbers between "+a+" and "+b+" are: ");
            for(int i=a+1;i<b;i++){
               if(isPrime(i)){
                   System.out.print(i+",");
               }
            }
      }
      static boolean isPrime(int n){
            boolean ans=true;
            for(int i=2;i<=n/2;i++){
                if(n%i==0){
                    ans=false;
                }
            }
            if(n!=1)
               return ans;
            else{
               ans=false;
               return ans;
            }
      }
}
