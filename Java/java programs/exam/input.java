import java.util.Scanner;

class input {
   input() {
   }

   void put(int var1, int var2) {
      System.out.println("sum of " + var1 + " and " + var2 + " is " + (var1 + var2));
   }

   public static void main(String[] var0) {
      Scanner S = new Scanner(System.in);
      System.out.print("enter 1st no. : ");
      int var1 = S.nextInt();
      System.out.print("enter 2nd no. : ");
      int var2 = S.nextInt();
      S.close();
      input i = new input();
      i.put(var1, var2);
   }
}
