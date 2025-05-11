

class base{
        int a= 10;
}

class derive extends base{
        int b= 10;
}

class derived extends derive{
    void add(){
        System.out.println("sum of "+a+" and "+b+" is "+(a+b));
    }
}

public class multilevel {

    public static void main(String[] args){
        derived d = new derived();
        d.add();

    }
    
}
