package gui;

import javax.swing.*;
import java.awt.*;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;

public class form extends JFrame {
    private JPanel form;
    private JButton buton1;
    private JTextField alan1;
    private JLabel label1;

    public form(){
        setTitle("resim gui");
        setSize(600,400);
       add(form);
        Image foto= new ImageIcon(this.getClass().getResource("Ben.jpg")).getImage();
        label1.setIcon(new ImageIcon(foto));
        label1.setBounds(0,0,30,50);
       buton1.setOpaque(true);

        buton1.addMouseListener(new MouseAdapter() {
            @Override
            public void mouseClicked(MouseEvent e) {
                super.mouseClicked(e);
                alan1.setText("Fuck you");
            }
        });
        buton1.addMouseListener(new MouseAdapter() {
            @Override
            public void mouseReleased(MouseEvent e) {
                super.mouseReleased(e);
                buton1.setBackground(Color.CYAN);
            }
        });
    }

}
