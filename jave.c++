// Description: Convert kilometers to miles.
// Author     : Fred Swartz - 2007-11-10 - Placed in public domain.
// File       : examples-intro/dialog/KmToMiles2.java
// Illustrates: Dialog IO for read-compute-write program.

import javax.swing.*;      // Use package containing JOptionPane

public class KmToMiles2 {
    //========================================================================= main
    public static void main(String[] args) {
        //... Declare variables.
        String kmStr;       // Used to hold string that comes from dialog.
        double kilometers;  // Distance in kilometers.
        double miles;       // Distance in miles.
        
        //... Input number of kilometers.
        kmStr = JOptionPane.showInputDialog(null, "Enter number of kilometers.");
        kilometers = Double.parseDouble(kmStr);                     //Note 1

        //... Compute miles.  There are 0.621 miles in a kilometer.
        miles = kilometers * 0.621;

        //... Output the miles.
        JOptionPane.showMessageDialog(null, kilometers + " kilometers is "
                                    + miles + " miles.");
    }
}
