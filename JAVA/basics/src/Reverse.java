import java.util.Scanner;
public class Reverse {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        System.out.println("enter number : ");
        int num = in.nextInt();

        int rev = 0;

        while(num > 0)
        {
            int rem = num % 10;
            num /= 10;

            rev = rev * 10 + rem;
        }
        System.out.print("reverse : "+rev);
    }
}
