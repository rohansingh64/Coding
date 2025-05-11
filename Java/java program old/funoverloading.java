public class funoverloading {
    static int sum(int a,int b){
        return a+b;
    }
    static int sum(int a,int b,int c){
        return a+b+c;
    }
    public static void main(String args[]){
        int a = 10;
        int b = 15;
        int c = 12;
        int d = sum(a,b);
        int e = sum(a,b,c);
        System.out.println("sum of "+a+" and "+b+" is "+d);
        System.out.println("sum of "+a+" , "+b+" and "+c+" is "+e);
    }
}
