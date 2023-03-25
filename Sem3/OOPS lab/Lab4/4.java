import java.util.Scanner;
public class Main{
      public static void main(String[] args){
            Scanner sc=new Scanner(System.in);
            int [][] arr1=new int[10][10];
            System.out.println("Enter dimension m: ");
            int m=sc.nextInt();
            System.out.println("Enter dimension n: ");
            int n=sc.nextInt();
            System.out.println("Enter  elements: ");
            for(int i=0;i<m;i++){
               for(int j=0;j<n;j++){
                  arr1[i][j]=sc.nextInt();
               }
            }
            int [][] arr2=new int[10][10];
            System.out.println("Enter dimension p: ");
            int p=sc.nextInt();
            System.out.println("Enter dimension q: ");
            int q=sc.nextInt();
            System.out.println("Enter  elements: ");
            for(int i=0;i<p;i++){
               for(int j=0;j<q;j++){
                  arr2[i][j]=sc.nextInt();
               }
            }
            int [][] arr3=new int[10][10];
            if(n==p && m==q){
                for(int i=0;i<p;i++){
                  for(int j=0;j<p;j++){
                     arr3[i][j]=arr1[i][j]+arr2[i][j];
                  }
                } 
                System.out.println("The added matrix: ");
                for(int i=0;i<p;i++){
                  for(int j=0;j<q;j++){
                     System.out.print(arr3[i][j]+" ");
                  }
                  System.out.println();
                }
            }
            else
              System.out.println("ERROR!");
            if(n==p){
                 for(int i=0;i<m;i++){
                   for(int j=0;j<q;j++){
                     int sum=0;
                     for(int k=0;k<n;k++){
                       sum+=arr1[i][k] * arr2[k][j];
                     }  
                     arr3[i][j]=sum; 
                  }
                } 
                System.out.println("Multipied matrix: ");
                for(int i=0;i<m;i++){
                  for(int j=0;j<q;j++){
                     System.out.print(arr3[i][j]+" ");
                  }
                  System.out.println();
                }
            }
            else
              System.out.println("ERROR!");
      }
}
              
              
              
              
              
              
              
              
              
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
