import java.util.Scanner;
public class Si
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);

        System.out.print("principle : ");
        int P = input.nextInt();
        System.out.print("time : ");
        int T = input.nextInt();
        System.out.print("rate : ");
        int R = input.nextInt();

        int SI = (P * T * R) / 100;
        System.out.println("simple interest : "+SI);
    }
}
