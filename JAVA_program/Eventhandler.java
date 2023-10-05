import java.awt.*;
import java.awt.event.*;

class Eventhandler extends Frame implements ActionListener {

    TextField textField;

    Eventhandler() {
        // Component Creation
        textField = new TextField();

        // setBounds method is used to provide
        // position and size of the component
        textField.setBounds(60, 50, 180, 35);
        Button button = new Button("click Here");
        button.setBounds(100, 120, 80, 40);
        button.addActionListener(this);
        add(textField);
        add(button);
        setVisible(true);
    }

    public void actionPerformed(ActionEvent e) {

        textField.setText("Working with Eventhyandler in javac");
    }

    public static void main(String[] args) {
        new Eventhandler();
    }
}