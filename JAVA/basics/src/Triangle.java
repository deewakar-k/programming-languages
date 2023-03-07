import java.util.Scanner;
public class Triangle {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        System.out.print("enter base : ");
        int base = in.nextInt();
        System.out.print("enter height : ");
        int height = in.nextInt();

        int areaOfTri = (base * height) / 2;

        System.out.println("Area = "+areaOfTri);
    }
}