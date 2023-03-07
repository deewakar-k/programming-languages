import java.util.Scanner;
public class CountDays {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        System.out.println("\ncheck how many days you can go out with friends on even days\n");
        System.out.print("month (in total days) : ");
        int month = in.nextInt();

        int count = 0;

        for(int i = 1; i<= month; i++)
        {
            if(i % 2 == 0)
            {
                count++;
            }
        }
        System.out.println("you can go out "+ count + " days in a month");
    }
}
