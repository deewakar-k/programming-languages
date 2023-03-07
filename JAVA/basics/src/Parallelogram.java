import java.util.Scanner;
public class Parallelogram {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        System.out.print("enter base: ");
        float base = in.nextFloat();
        System.out.print("enter height: ");
        float height = in.nextFloat();

        float areOfLelo = base * height;

        System.out.println("A = "+areOfLelo);
    }
}
