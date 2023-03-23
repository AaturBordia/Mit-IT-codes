import java.util.Scanner;
public class Main{
      public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number: ");
        int a=sc.nextInt();
        if(isArmstrong(a))
             System.out.println(a+" is armstrong number");
        else
             System.out.println(a+" is not armstrong number");
      }
      static boolean isArmstrong(int n){
             int temp=n;
             int x=0;
             double sum=0;
             boolean ans=true;
             while(temp!=0){
                  temp=temp/10;
                  x++;
             }
             temp=n;
             while(temp!=0){
                  sum=sum+Math.pow(temp%10,x);
                  temp=temp/10;
             }
            if(sum!=n)
                  ans=false;
            return ans;
      }
}

