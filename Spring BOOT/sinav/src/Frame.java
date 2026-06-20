import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Frame extends JFrame  {

    private JLabel lbl1;
    private JButton btn1;
    private JTextField text1;
    JFrame frame=new JFrame();
     public class BtnTiklandi implements ActionListener{
         @Override
         public void actionPerformed(ActionEvent e) {
             text1.setText("1");
             lbl1.setVisible(true);
             JOptionPane.showConfirmDialog(frame,"sayı girdiniz");
         }
     }


    public Frame(){
        setLayout(new FlowLayout());
        btn1=new JButton("Bu bir buton");
        text1=new JTextField(15);
        add(btn1);
        add(text1);
        btn1.addActionListener(new BtnTiklandi());
        setBackground(Color.black);
        ImageIcon img1=new ImageIcon(getClass().getResource("mine.png"));
        lbl1=new JLabel(img1);
        add(lbl1);
        lbl1.setVisible(false);



    }


}
