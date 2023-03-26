import java.util.Scanner;
public class prg1{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a string: ");
        String str=sc.nextLine();
        StringBuffer st=new StringBuffer(str);
        String check =new String();
        String check2 =new String();
        System.out.println("Enter a word to replace with: ");
        String word=sc.next();
        for(int i=0;i<str.length();i++)
            if(check.indexOf(str.charAt(i))==-1)
                check =check+str.charAt(i);
            else
                check2=check2+str.charAt(i);
        int x=0;
        for(int i=0;i<str.length();i++){
            if(check2.indexOf(str.charAt(i))!=-1){
                st.replace(i+x,i+x+1,word);
                x=x+word.length()-1;
            }
        }
        System.out.println(st);
    }
}
