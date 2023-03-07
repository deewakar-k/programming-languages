import java.util.Scanner;
public class Circle {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        System.out.print("radius of a circle : ");
        int radius = in.nextInt();
        double pi = 3.14;

        double area = pi * Math.pow(radius, 2);

        System.out.println(area);
    }
}
