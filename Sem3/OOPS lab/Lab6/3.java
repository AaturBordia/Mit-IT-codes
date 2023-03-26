import java.util.Scanner;
class Bank{
   int rate_of_interest;
   Bank(){
     rate_of_interest=10;
   }
   void get_rate(){
     System.out.println("The rate of interset: "+rate_of_interest+"%");
   }
}
class SBI extends Bank{
   SBI(){
     rate_of_interest=8;    
   }
   void get_rate(){
     System.out.println("The rate of interset in SBI: "+rate_of_interest+"%");
   }
}
class ICICI extends Bank{
   ICICI(){
     rate_of_interest=7;   
   }
   void get_rate(){
     System.out.println("The rate of interset in ICICI: "+rate_of_interest+"%");
   }
}
class AXIS extends Bank{
   AXIS(){
     rate_of_interest=9; 
   }
   void get_rate(){
     System.out.println("The rate of interset in AXIS: "+rate_of_interest+"%");
   }
}
public class main{
      public static void main(String args[]){
           Scanner sc=new Scanner(System.in);
           Bank b;
           System.out.println("CHOOSE a)AXIS b)ICICI c)SBI");
           char c=sc.next().charAt(0);
           switch(c){
             case 'a':
               b=new AXIS();
               break;
             case 'b':
               b=new ICICI();
               break;
             case 'c':
               b=new SBI();
               break;  
             default:
                b=new Bank();
           }
           b.get_rate();
      }
}



