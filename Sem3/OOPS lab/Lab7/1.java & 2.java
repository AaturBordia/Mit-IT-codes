import java.util.Scanner;
class Student_Detail{
   static int counter=0;
   static String college="MIT";
   Student s;
   class Student{
        String name;
        int ID;
        Student(String n,int id){
           name=n;
           ID=id;
        }
        void display(){
           System.out.println("Student name: "+name+"\nStudent id: "+ID);
        }
   }
  Student_Detail(String n,int id){
     s=new Student(n,id);
     counter++;
  }
  void Display_Detail(){
     System.out.println("College: "+college);
     s.display();
  }
}
public class main{
     public static void main(String args[]){
     Scanner sc=new Scanner(System.in);
     Student_Detail sd=new Student_Detail("name",1);
     sd.Display_Detail();
     Student_Detail sd1=new Student_Detail("name",2);
     sd1.Display_Detail();
     Student_Detail sd2=new Student_Detail("name",4);
     sd2.Display_Detail();
     System.out.println("Number of students: "+Student_Detail.counter);    
     }
}











