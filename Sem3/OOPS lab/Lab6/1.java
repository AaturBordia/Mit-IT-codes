import java.util.Scanner;
class Account{
  private String name,type;
  private long accno;
  Account(){
    name="default";
    type="default";
    accno=0;
  } 
  Account(String n,String t,long acc){
    name=n;
    type=t;
    accno=acc;
  } 
  void display(){
  System.out.println("Account name: "+name+"\nType: "+type+"\nAccno: "+accno);
  }
}
class Current extends Account{
    long balance;
    Current(){
      balance=0;
    }
    Current(String n,String t,long acc){
      super(n,t,acc);
      balance=0;
    }
    void deposit(long amt){
      balance+=amt;
    }
    long withdraw(long amt){
       if(balance>amt)
          balance-=amt;
       else{
          System.out.println("Not enough balance!");
          amt=0;
       }
       return amt;
    }
    int penalty(){
       if(balance<5000){
           balance-=(balance*15/100);
           System.out.println("Bank has been penalised");
       }
       return (int) balance;
    }
    void getbalance(){
       System.out.println("Balance is: "+balance);
    }
}
class Savings extends Account{
    long balance;
    Savings(){
      balance=0;
    }
    Savings(String n,String t,long acc){
      super(n,t,acc);
      balance=0;
    }
    void deposit(long amt){
      balance+=amt;
    }
    void interest(){
       balance+=(balance*10/100);
    }
    long withdraw(long amt){
       if(balance>amt)
          balance-=amt;
       else{
          System.out.println("Not enough balance!");
          amt=0;
       }
       return amt;
    }
    int penalty(){
       if(balance<10000){
           balance-=(balance*20/100);
           System.out.println("Bank has been penalised");
       }
       return (int) balance;
    }
    void getbalance(){
       System.out.println("Balance is: "+balance);
    }
}
public class main{
   public static void main(String args []){
      Scanner sc=new Scanner(System.in);
      Current acc1=new Current("Aatur","Current",210911340);
      acc1.display();
      acc1.deposit(4000L);
      acc1.withdraw(100);
      acc1.getbalance();
      Savings acc2=new Savings("Aatur","Savings",210911340);
      acc2.display();
      acc2.deposit(100000L);
      acc2.withdraw(100);
      acc2.getbalance();
   }
}  
