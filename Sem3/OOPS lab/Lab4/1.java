import java.util.Scanner;
public class Main{
      public static void main(String[] args){
            Scanner sc=new Scanner(System.in);
            int [][] arr=new int[10][10];
            System.out.println("Enter dimension: ");
            int n=sc.nextInt();
            System.out.println("Enter  elements: ");
            for(int i=0;i<n;i++){
               for(int j=0;j<n;j++){
                  arr[i][j]=sc.nextInt();
               }
            }
            int sum=0;
            System.out.println("The non diagonal elements: ");
             for(int i=0;i<n;i++){
               for(int j=0;j<n;j++){
                  if(i!=j){
                      System.out.print(arr[i][j]+" ");
                      sum+=arr[i][j];
                  }
               }
             }
             System.out.println();
             System.out.println("The sum of non diagonal elements is: "+sum);
      }
}
