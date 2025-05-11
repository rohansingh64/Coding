import java.util.Scanner;
class add{
    int a;
    int b;
    void get()
    {
        Scanner Sdd = new Scanner(System.in);
        System.out.print("enter 1st no. : ");
        a = Sdd.nextInt();
        System.out.print("enter 2nd no. : ");
        b = Sdd.nextInt();
        Sdd.close();
    }
    void put(){
        System.out.println("sum of "+a+" and "+b+" is "+(a+b));
    }
}
public class rohans{
    public static void main(String args[])
    {
        add aa = new add();
        aa.get();
        aa.put();
    }
}
