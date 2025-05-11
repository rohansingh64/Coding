public class eh {
    public static void main(String[] args){
        int a = 10;
        int b = 5;
        int c = 5;
        try{
            int d = a/(b-c);
            System.out.println("d = "+d);
        }
        catch(ArithmeticException e){
            System.out.println("divede by zero exception");
        }
        finally{
            System.out.println("finally block executed");
        }
        int e = a/(b+c);
        System.out.println("e = "+e);
    }
}
