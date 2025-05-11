import java.util.Scanner;
class add{
    int a;
    int b;
    public void get(){
        Scanner sc = new Scanner(System.in);
        System.out.print("enter first number:");
        a = sc.nextInt();
        System.out.print("enter second number:");
        b = sc.nextInt();
        sc.close();
    }
    public void put(){
        System.out.println("addition of "+a+" and "+b+" is "+(a+b));
    }
}
public class exa{
    public static void main(String args[]){
        add aa = new add();
        aa.get();
        aa.put();
    }
}
