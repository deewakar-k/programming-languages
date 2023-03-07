import java.util.Scanner;
public class FindLargest
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);

        System.out.print("enter number 1 : ");
        int x = input.nextInt();
        System.out.print("enter number 2 : ");
        int y = input.nextInt();
        System.out.print("enter number 3 : ");
        int z = input.nextInt();

        int max = x;

        if(y > max)
        {
            max = y;
        }
        if(z > max)
        {
            max = z;
        }
        System.out.println("largest: "+max);
    }

}
