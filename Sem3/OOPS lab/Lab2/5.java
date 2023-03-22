import java.util.Scanner;
public class Main{
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        char ans = 'y';
        while (ans == 'y') {
            System.out.println("Enter first number, operator, second number: ");
            float a = sc.nextFloat();
            char ch = sc.next().charAt(0);
            float b = sc.nextFloat();
            if (ch == '+' || ch == '-' || ch == '*' || ch == '/'|| ch == '%')
                System.out.println(a + " " + ch + " " + b + "= "+ calc(a, b, ch));
            else
                System.out.println("ERROR!");
            System.out.println("Do another(y/n)?");
            ans = sc.next().charAt(0);
        }
    }
    static float calc(float a,float b,char ch){
        float x = 0;
        switch(ch){
                case '+':
                    x=a+b;
                    break;
                case '-':
                    x=a-b;
                    break;
                case '*':
                    x=a*b;
                    break;
                case '/':
                    x=a/b;
                    break;
                case '%':
                    x=a%b;
                    break;
            default:
                   x=-1;
        }
        return x;
    }
}
