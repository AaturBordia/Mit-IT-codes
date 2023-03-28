import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class swin3 {
    public static void main(String[] args) {
       calc obj =new calc();
    }
}
class calc extends JFrame implements ActionListener{
    JTextField t1,t2;
    JLabel l;
    JButton b1,b2;
    public calc(){
        t1= new JTextField(20);
        t2= new JTextField(20);
        l=new JLabel("Result :");
        b1=new JButton("Add");
        b2=new JButton("Subtract");

        add(t1);
        add(t2);
        add(l);
        add(b1);
        add(b2);
        b1.addActionListener(this);
        b2.addActionListener(this);

        setLayout(new FlowLayout());
        setSize(250,400);
        setVisible(true);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

    }
    @Override
    public void actionPerformed(ActionEvent ae) {
        int num1 = Integer.parseInt(t1.getText());
        int num2 = Integer.parseInt(t2.getText());
        int value=0;
        if(ae.getSource()==b1)
               value=num1+num2;
        else
               value=num1-num2;
        l.setText(value+"");
        }


}

