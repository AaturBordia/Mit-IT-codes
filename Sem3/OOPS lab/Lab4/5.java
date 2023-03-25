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
            int [] row=new int[n];
            int [] column=new int[n];
            int diagonal1=0,diagonal2=0;
           for(int i=0;i<n;i++){
              row[i]=0;
              column[i]=0;
              for(int j=0;j<n;j++){
                 row[i]+=arr[i][j];
                 column[i]+=arr[j][i];
                 if(i==j){
                    diagonal1+=arr[i][j];
                    diagonal2+=arr[i][n-j-1];
                 }
              }
           }
          boolean ismagic=true;
          for(int i=0;i<n-1;i++){
             if(row[i]!=column[i]||row[i+1]!=column[i]||row[i]!=column[i+1]){
                ismagic=false;
                break;
             }
          }
          if(row[n-1]!=diagonal1||diagonal1!=diagonal2)
             ismagic=false;
          if(ismagic)
            System.out.println("It is magic matrix");
          else  
           System.out.println("It is not  magic matrix");
      }
}

        
        
        
        
        
        
        
        
        
        
        
        
        
