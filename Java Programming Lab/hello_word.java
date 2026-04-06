import java.util.Scanner;
// import java.util.*;


// predefined apis are in package

 class HelloWord
 {
    // Classes are always captalized -- good practice
    public static void main(String[] args)
    {
    // main is called by java binary and executed through JVM.
        System.out.println("h");
        
        Scanner s = new Scanner(System.in);
        // primitive data types are not classes
        int x = s.nextInt();
        String str = s.next();
        String strMultiple = s.nextLine();
       
        s.close();
        
       // classpath environment variable
       // cmd: set classpath=;.;
    }
 };