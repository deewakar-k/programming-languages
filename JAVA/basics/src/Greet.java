import java.util.Scanner;
public class Greet
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        String name = input.nextLine();

        System.out.println("hello, welcome! "+name);
    }
}
