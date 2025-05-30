import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) throws IOException {

        // Creating a buffered reader
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        
        // Reading inputs
        int number = Integer.parseInt(reader.readLine());
        double decimal = Double.parseDouble(reader.readLine());
        String inputString = reader.readLine();
        
        // String variable
        String hacker = "String: ";
        String rank = "Int: ";
        String isCool = "Double: ";
        
        // Outcomes
        System.out.println(hacker + inputString);
        System.out.println(isCool + decimal);
        System.out.println(rank + number);
        
    }
}
