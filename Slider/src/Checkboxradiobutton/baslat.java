package Checkboxradiobutton;

import javax.swing.*;

public class baslat {
    public static void main(String[] args) {

        SwingUtilities.invokeLater(new Runnable() {
            @Override
            public void run() {
                form f1=new form();
                f1.setVisible(true);
            }
        });
    }
}
