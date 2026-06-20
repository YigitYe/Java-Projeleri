package gui;

import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;
import java.util.Objects;
import java.util.Random;

public class form extends JFrame {
    private JPanel panel;
    private JButton btn1;
    private JLabel lbl1;
    private JTextField yazialan;
    private JLabel lbl2;
    static int guess;
    public form(){
        add(panel);
        setTitle("gui");
        setSize(400,400);
        Random r1=new Random();
        guess=r1.nextInt(100);




        btn1.addMouseListener(new MouseAdapter() {
            @Override
            public void mouseClicked(MouseEvent e) {
                super.mouseClicked(e);
                btn1.setText(String.valueOf(guess));
                int i=10;
                while(i>0) {

                    if (String.valueOf(guess).equals(yazialan.getText())) {
                        lbl1.setText("Correct");

                        break;


                    } else if (Integer.parseInt(yazialan.getText()) >= guess) {
                        lbl1.setText("Your guess is big");
                        i--;
                        lbl2.setText(String.valueOf(i));

                    } else if (Integer.parseInt(yazialan.getText()) <= guess) {
                        lbl1.setText("Your guess is small");
                        i--;
                        lbl2.setText(String.valueOf(i));


                    }

                    else if(i==0){
                        lbl2.setText("Deneme hakkınız bitmiştir Doğru sayı = "+guess);
                        break;
                    }

                }


            }
        });
    }
}
