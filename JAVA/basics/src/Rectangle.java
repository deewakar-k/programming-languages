import java.util.Scanner;
public class Rectangle {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        System.out.print("enter width : ");
        int width = in.nextInt();
        System.out.print("enter length : ");
        int length = in.nextInt();

        int areaOfRec = width * length;

        System.out.println("Area = "+areaOfRec);
    }
}
