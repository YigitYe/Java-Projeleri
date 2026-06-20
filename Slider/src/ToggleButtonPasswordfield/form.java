package ToggleButtonPasswordfield;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class form extends JFrame {

    private JPanel panel;
    private JButton btn1;
   static boolean durum;
    public form(){
        add(panel);
        setTitle("Togglebutton");
        setSize(400,400);
     durum =true;
        btn1.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                if(durum){
                   panel.setBackground(Color.BLACK);
                   btn1.setText("Gündüz");
                   durum=false;
                }
                else{
                    panel.setBackground(Color.WHITE);
                    btn1.setText("KARANLIK");
                durum=true;
                }

            }
        });
    }
}
