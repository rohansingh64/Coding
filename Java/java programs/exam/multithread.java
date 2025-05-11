class A extends Thread{
    public void run(){
        for(int i=0;i<10;i++){
            System.out.println("i="+i);
        }
    }
}
class B extends Thread{
    public void run(){
        for(int j=0;j<10;j++){
            System.out.println("j="+j);
        }
    }
}

class C extends Thread{
    public void run(){
        for(int k=0;k<10;k++){
            System.out.println("k="+k);
        }
    }
}




public class multithread {
    public static void main(String[] args){
        new A().start();
        new B().start();
        new C().start();
    }
}
