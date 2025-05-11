class animal{
     void eat(){
        System.out.println("eating....");
    }
}
class dog extends animal{
     void bark(){
        System.out.println("barking....");
    }
}


public class inheritence {
    public static void main(String args[]){
        dog d = new dog();
        d.eat();
        d.bark();
    }
}
