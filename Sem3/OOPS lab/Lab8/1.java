
interface sales{
    int sales();
}
class hardware implements sales{
    static int sales_count = 0;
    String item;
    String manufacturer;
    hardware(){
        sales_count++;
    }
    hardware(String i,String m){
        item = i;
        manufacturer = m;
        sales_count++;
    }
    @Override
    public int sales(){
        return sales_count;
    }
}
class software implements sales{
    static int sales_count = 0;
    String type;
    String os_type;
    software(){
        sales_count++;
    }
    software(String i,String m){
        type = i;
        os_type = m;
        sales_count++;
    }
    @Override
    public int sales(){
        return sales_count;
    }
}
public class main {
    public static void main(String[] args) {
       hardware h1 = new hardware("computers","hp");
       hardware h2 = new hardware("projectors","benq");
       hardware h3 = new hardware("speakers","jbl");
       software s1 = new software("application_UI","mac");
       software s2 = new software("application_UI","windows");
       software s3 = new software("game","android");
       System.out.println("the total number of hardware sales :"+hardware.sales_count); 
       System.out.println("the total number of software sales :"+software.sales_count); 
       System.out.println("the total number of hardware and software sales :"+(hardware.sales_count+software.sales_count)); 
    }
}
