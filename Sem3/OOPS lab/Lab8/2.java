abstract class Calculator{
    abstract void area();
}
class rectangle extends Calculator{
    double l;
    double b;
    rectangle(double l,double b){
        this.l = l;
        this.b = b;
    }
    @Override
    void area(){
        System.out.println("the area of the rectangle is :"+(l*b));
    }
}
class circle extends Calculator{
    double r;
    circle(double r){
        this.r = r;
    }
    @Override
    void area(){
        System.out.println("the area of the circle is :"+(3.14*r*r));
    }
}
public class Lab_8 {
    public static void main(String[] args) {
        rectangle r1 = new rectangle(100,40);
        circle c1 = new circle(100);
        r1.area();
        c1.area();
        
    }
}
