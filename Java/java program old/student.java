class boy{
    void show(){
        System.out.println("rohan is a boy.");
    }
}
class student extends boy{
    void print(){
        System.out.println("rohan is a student.");
    }
    public static void main(String args[])
    {
        student s = new student();
        s.print();
        s.show();
    }
}
