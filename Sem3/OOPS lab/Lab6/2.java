import java.util.Scanner;
class Student{
   long  regno;
   String name;
   int age;
   Student(){
     name="default";
     age=-1;
     regno=-1;
   }
   Student(String n,int a, long reg){
     name=n;
     age=a;
     regno=reg;
   }
   void display(){
    System.out.println("Name: "+name+"\nAge: "+age+"\nRegno: "+regno);
   }
}
class UG extends Student{
   int fees,sem;
   UG(){
      fees=2000000;
   }
  UG(String n,int a,long reg,int feespaid,int sem){
      super(n,a,reg);
      fees=2000000-feespaid;
      this.sem=sem;
   }
   void payfees(int amt){
        fees=fees-amt;
   }
   void display_UG(){
      super.display();
      System.out.println("Under graduate: ");
      System.out.println("Sem: "+sem+"\nPending fees: "+fees);
   }
  class PG extends Student{
   int fees,sem;
   PG(){
      fees=1500000;
   }
   PG(String n,int a,long reg,int feespaid,int sem){
      super(n,a,reg);
      fees=1500000-feespaid;
      this.sem=sem;
   }
   void payfees(int amt){
        fees=fees-amt;
   }
   void display_PG(){
      super.display();
      System.out.println("Post graduate: ");
      System.out.println("Sem: "+sem+"\nPending fees: "+fees);
   }
}
public class main{
    public static void main(String args[]){
       Scanner sc=new Scanner(System.in);
       UG std1=new UG("Aatur",22,210911340,1200000,7);
       PG std2=new PG("Aatur",22,210911340,1200000,6);
       std1.display_UG();
       std2.display_PG();
    }
}  
