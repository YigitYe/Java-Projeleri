package Checkboxradiobutton;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.ItemEvent;
import java.awt.event.ItemListener;

public class form extends JFrame {

    private JPanel panel;
    private JRadioButton rb1;
    private JRadioButton rb2;
    private JRadioButton rb3;
    private JRadioButton rb4;

    public form(){
        add(panel);
        setTitle("Soru");
        setSize(400,600);

        ButtonGroup bg=new ButtonGroup();
        bg.add(rb1);
        bg.add(rb2);
        bg.add(rb3);
        bg.add(rb4);


        rb2.setOpaque(true);
        rb2.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                System.out.println("Doğru cevap");
                rb2.setBackground(Color.GREEN);
            }
        });
    }
}
