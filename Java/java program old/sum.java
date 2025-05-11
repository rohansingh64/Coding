import java.util.*;

public class sum{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.print("enter two number : ");
        int a = sc.nextInt();
        int b = sc.nextInt();
        sc.close();
        int c = a+b;
        System.out.print("sum of "+a+" and "+b+" is "+c);

    }
}