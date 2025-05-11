public class darr {
    public static void main(String args[])
    {
        int [][] arr = new int[3][];
        for(int i = 0;i<3;i++)
        {   arr[i] = new int[i+2];
           for(int j=0;j<arr[i].length;j++)
           {
                System.out.print((i+j+10)+" ");
           }
           System.out.print("\n");
        }

    }
}
