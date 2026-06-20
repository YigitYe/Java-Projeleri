package Vizefinal;

import javax.swing.*;
import javax.swing.event.ChangeEvent;
import javax.swing.event.ChangeListener;
import java.awt.*;

public class form extends JFrame {
    private JPanel panel;
    private JSlider slider1;
    private JTextField yazi_alan1;
    private JSlider slider2;
    private JSlider slider3;
    private JLabel lbl1;
    private JLabel lbl2;
    private JLabel lbl3;
    static int v,f;
   static float o;


    public  form(){
        add(panel);
        setTitle("Vize final not hesaplama");
        setSize(400,400);
      slider2.addChangeListener(new ChangeListener() {
          @Override
          public void stateChanged(ChangeEvent e) {
              v=slider1.getValue();
              f=slider2.getValue();
              o= (float) ((float)v*0.4+f*0.6);
              slider3.setValue((int) o);
              lbl1.setText(String.valueOf(v));
              lbl2.setText(String.valueOf(f));
              lbl3.setText(String.valueOf(o));

              if(o>=50){
                  yazi_alan1.setBackground(Color.GREEN);
                yazi_alan1.setText("Geçtiniz Tebrikler....");
              }
              else{
                  yazi_alan1.setBackground(Color.RED);
                  yazi_alan1.setText("Kaldınız....");
              }



          }
      });



        slider1.addChangeListener(new ChangeListener() {
            @Override
            public void stateChanged(ChangeEvent e) {
                v=slider1.getValue();
                f=slider2.getValue();
                o= (float) ((float)v*0.4+f*0.6);
                slider3.setValue((int) o);
                lbl1.setText(String.valueOf(v));
                lbl2.setText(String.valueOf(f));
                lbl3.setText(String.valueOf(o));

                if(o>=50){
                    yazi_alan1.setBackground(Color.GREEN);}
               else{
                   yazi_alan1.setBackground(Color.RED);
                }


            }
        });

    }
}
