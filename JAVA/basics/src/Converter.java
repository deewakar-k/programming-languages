import java.util.Scanner;
public class Converter
{
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        System.out.print(" Rs ");
        int rupee = in.nextInt();

        int dollar = rupee / 82;

        System.out.print(" $"+dollar);
    }
}
