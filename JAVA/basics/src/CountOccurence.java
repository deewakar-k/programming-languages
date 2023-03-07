import java.util.Scanner;
public class CountOccurence
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);

        System.out.print("number : ");
        int num = in.nextInt();
        System.out.print("enter int you want to check : ");
        int check = in.nextInt();

        int count = 0;

        while(num > 0)
        {
            int rem = num % 10;
            if(rem == check)
            {
                count++;
            }
              num /= 10;
        }
        System.out.println(count+" times");
    }

}
