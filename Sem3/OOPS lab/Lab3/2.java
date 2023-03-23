import java.util.Scanner;
public class Main{
      public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        for(int i=1;i<=5;i++){
           for(int j=1;j<=i;j++){
                System.out.print(i+"");
           }
           System.out.println();
        } 
        int []arr={1,2,3,4,5};
        for(int i: arr){
           for(int j=1;j<=i;j++){
              System.out.print(i+"");
           }
           System.out.println();
        }
      }
}
