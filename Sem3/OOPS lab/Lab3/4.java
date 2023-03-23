import java.util.Scanner;
public class Main{
      public static void main(String[] args){
            Scanner sc=new Scanner(System.in);
            System.out.println("Enter value to be searched: ");
            int key=sc.nextInt();
            int [] arr={1,2,3,1,2,1,5,6,7};
            int j=0;
            System.out.println("Value is found at: ");
            for(int i:arr){
                if(i==key){
                   System.out.print("a["+j+"],");
                }
                j++;
            }
      }
}
