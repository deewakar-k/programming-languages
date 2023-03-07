import java.util.Scanner;
public class Fibonacci
{
    public static void main(String[] args)
    {

        Scanner in = new Scanner(System.in);

        int first = 0, second = 1;
        System.out.print("number : ");
        int num = in.nextInt();

        System.out.println("fibonacci series up to " + num + " number");

        int i = 0;
        while(i <= num)
        {
            //System.out.print(first+ ", ");
            int temp = first + second;
            first = second;
            second = temp;

            i++;
        }
    }
}
