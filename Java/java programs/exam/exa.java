

interface base1{
    void display();
}

interface base2{
    public void display();
}

class sub implements base1 ,base2{
    public void display(){
        System.out.println("sub class");
    }
}

public class exa {
 
    public static void main(String[] args){
        sub p = new sub();
        p.display();
    }

}
