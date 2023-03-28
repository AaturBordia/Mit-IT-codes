import javax.swing.JFrame;
import javax.swing.JLabel;
import java.awt.*;

public class swing {
    public static void main(String[] args) {
        abc obj= new abc();
    }
}
class abc extends JFrame{
    public abc(){
        setLayout(new FlowLayout());
        JLabel l= new JLabel("Hello World!");
        JLabel l1= new JLabel("YO!");
        add(l);
        add(l1);
        setSize(400,400);
        setVisible(true);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

    }


}
