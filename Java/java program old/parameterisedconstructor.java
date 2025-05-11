public class parameterisedconstructor {
    int a;
    parameterisedconstructor( int x){
         a = x;
    }
    void show(){
        System.out.println("a = "+a);
    }
    public static void main(String args[])
    {   int x = 10;
        parameterisedconstructor dd = new parameterisedconstructor(x);
        dd.show();
    }
    
}
