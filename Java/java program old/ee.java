import java.util.Scanner;

class ee {
   void put(int a,int b) {
      System.out.println("sum of " +a+ " and " +b+ " is " + (a+b));
   }

   public static void main(String args[])
   {
        int a;
        int b;
        Scanner sc = new Scanner(System.in);
        System.out.print("enter 1st no. : ");
        a = sc.nextInt();
        System.out.print("enter 2nd no. : ");
        b = sc.nextInt();
        sc.close();

        ee aa = new ee();
        aa.put(a,b);
     
   }
}

