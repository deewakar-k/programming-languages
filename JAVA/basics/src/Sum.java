import java.util.Scanner;
public class Sum
{

    Sum(int num1, int num2)
    {
        int sum = num1 + num2;
        int diff = num1 - num2;
        System.out.print("sum : "+sum);
        System.out.print("\ndifference : "+diff);
    }
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);

        System.out.print("number 1 : ");
        int num1 = in.nextInt();

        System.out.print("number 2 : ");
        int num2 = in.nextInt();

        Sum sum = new Sum(num1, num2);
    }
}