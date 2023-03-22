import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner scan=new Scanner(System.in);
        System.out.println("Entered integer:");
        int i= scan.nextInt();
        System.out.println("Entered double:");
        double d= scan.nextDouble();
        System.out.println("Entered character:");
        char c= scan.next().charAt(0);
        byte itb= (byte) i;
        int cti= c;
        byte dtb=(byte) d;
        int dti =(int) d;
        System.out.println("Int to Byte:"+itb);
        System.out.println("Char to Int:"+cti);
        System.out.println("Double to Byte:"+dtb);
        System.out.println("Double to Int:"+dti);
    }
}
