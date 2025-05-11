import java.util.Scanner;
public class userinput {
    public static void main(String args[])
    {   int a;
        int b;
        Scanner sc = new Scanner(System.in);
        System.out.println("enter a :");
        a = sc.nextInt();
        System.out.println("enter b :");
        b = sc.nextInt();
        int c = a+b;
        System.out.println(c);
        sc.close();
    }
}
