class cost{
    int a;
    int b;
    static int c;
    cost(int x,int y){
        a = x;
        b = y;
    }
    void operation()
    {
        int d = a+b;
        System.out.println("value of d is = "+d);
        System.out.println("value of static c is = "+c);
        c = c+1;
        
    }
}
public class conv{
    public static void main(String args[])
    {
        cost aa = new cost(4,5);
        aa.operation();
        cost bb = new cost(2,8);
        bb.operation();
        aa.operation();

    }
}