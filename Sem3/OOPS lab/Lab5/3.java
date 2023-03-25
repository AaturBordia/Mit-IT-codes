import java.util.Scanner;
class Time{
    int hours;
    int minutes;
    int seconds;
    Time(){
        hours = 0;
        minutes = 0;
        seconds = 0;
    }
    Time(int h,int m,int s){
        hours = h;
        minutes = m;
        seconds = s;
    }
    void display(){
        System.out.println(hours+":"+minutes+":"+seconds);
    }
}
public class Main4 {
    static Time add(Time t1,Time t2){
        Time t = new Time();
        int h=0,m=0,s=0;
        int counth=0,countm=0;
        s = t1.seconds + t2.seconds;
        countm = s/60;
        if(countm>0){
            m = t1.minutes+t2.minutes+countm;
            s = s - 60*countm;
        }else{
            m = t1.minutes+t2.minutes;
        }
        counth = m/60;
        if(counth>0){
            h = t1.hours+t2.hours+counth;
            m = m - 60*counth;
        }else{
            h = t1.hours+t2.hours;
        }
        t.hours = h;
        t.minutes = m;
        t.seconds = s;
        return t;
    }
    public static void main(String[] args){
        Time t1 = new Time(16,17,54);
        Time t2 = new Time(1,56,54);
        Time t = new Time();
        t = add(t1,t2);
        t.display();
    }
}
