import java.util.Scanner;
class Number{
    private double num;
    Number(double n){
        num = n;
    }
    boolean isZero(){
        if(num==0){
            return true;
        }else{
            return false;
        }
    }
    boolean isPositive(){
        if(num>0){
            return true;
        }else{
            return false;
        }
    }
    boolean isNegetive(){
        if(num<0){
            return true;
        }else{
            return false;
        }
    }
    boolean isOdd(){
        long temp = Math.round(num);
        if(temp%2!=0){
            return true;
        }else{
            return false;
        }
    }
    boolean isEven(){
        long temp = Math.round(num);
        if(temp%2==0){
            return true;
        }else{
            return false;
        }
    }
    boolean isPrime() {
        long n = Math.round(num);
        boolean ans = true;
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                ans = false;
            }
        }
        if (n != 1) {
            return ans;
        } else {
            ans = false;
            return ans;
        }
    }
    boolean isArmstrong(){
        long n = Math.round(num);
        long temp = n;
        int x = 0;
        double sum = 0;
        boolean ans = true;
        while(temp!=0){
            temp = temp/10;
            x++;
        }
        temp = n;
        while(temp!=0){
            sum = sum + Math.pow(temp%10,x);
            temp = temp/10;
        }
        if(sum!=n){
            ans = false;
        }
        return ans;
    }
}
public class Main4 {
    public static void main(String[] args){
        Scanner scanner =  new Scanner(System.in);
        System.out.println("enter a number :");
        double n = scanner.nextDouble();
        Number num = new Number(n);
        System.out.println("the number is zero:"+num.isZero());
        System.out.println("the number is positive:"+num.isPositive());
        System.out.println("the number is negetive:"+num.isNegetive());
        System.out.println("the number is odd:"+num.isOdd());
        System.out.println("the number is even:"+num.isEven());
        System.out.println("the number is prime:"+num.isPrime());
        System.out.println("the number is armstrong:"+num.isArmstrong());
    }
}
