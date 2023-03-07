import java.util.Scanner;
public class Isoceles {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        System.out.print("enter base: ");
        float base = in.nextInt();
        System.out.print("enter height: ");
        float height = in.nextInt();

        float areaOfIso = (base * height) / 2.0f;

        System.out.println("Area = "+areaOfIso);
    }
}
