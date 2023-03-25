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
            boolean flag=true;
            for(int i=0;i<n;i++){
              for(int j=0;j<n;j++){
                 if(arr[i][j]!=arr[j][i]){
                     flag=false;
                     break;
                 }
              }
            }
            if(flag==true)
                  System.out.println("Matrix is symmetric");
            else
                  System.out.println("Matrix is not symmetric");
      }
}
