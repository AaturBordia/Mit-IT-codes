
import java.util.Scanner;
class Book{
    private String title;
    private String author;
    private int edition;
    Book(){
        title = "default";
        author = "default";
        edition = 0;
    }
    Book(String t,String a,int e){
        title = t;
        author = a;
        edition = e;
    }
    String getAuthor() {
        return author;
    }
    void display_book(){
        System.out.println(title+" "+edition);
    }
}
public class prg1
{
    public static void main(String args[])
    {
        Scanner sc  = new Scanner(System.in);
        Book arr[] = new Book[6];
        for(int i = 0;i < 5; i++){
            System.out.println("Enter author name :");
            String author = sc.next();
            System.out.println("Enter book title :");
            String book = sc.next();
            System.out.println("Enter edition :");
            int ed = sc.nextInt();
            arr[i] = new Book(book,author,ed);
        }
        System.out.println("Enter author whos books to search:");
        String author1 = sc.next();
        System.out.println("Books with author "+author1+" are:");
        for(int i= 0;i < 2;i++){
            if(arr[i].getAuthor().equals(author1)){
                arr[i].display_book();
            }
        }
        sc.close();
    }
}
