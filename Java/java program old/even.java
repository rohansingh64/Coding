import java.util.Scanner;
public class even {
    public static void main(String args[])
    {   int n;
        Scanner sc = new Scanner(System.in);
        System.out.print("enter value of n : ");
        n = sc.nextInt();
        sc.close();
        System.out.print("even no.s upto n : ");
        for(int i=1;i<=n;i++)
        {
            if(i%2 == 0)
            {
                System.out.print(i+" ");
            }
        }
    }
}
