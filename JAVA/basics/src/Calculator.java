import java.util.Scanner;
public class Calculator {
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        //take input from user until user doesn't press x || X.
        System.out.println("\nhello!");
        System.out.println("\n'use this calculator and be smart in maths'");
        System.out.println("\nplease press x or X to STOP!\n");

        int result = 0;

        while(true) {
            System.out.println();
            System.out.print("enter operator: ");
            char op = in.next().trim().charAt(0);

            if (op == '+' || op == '*' || op == '-' || op == '/' || op == '%') {
                System.out.println();
                System.out.print("number: ");
                int num1 = in.nextInt();
                System.out.print("number: ");
                int num2 = in.nextInt();
                System.out.println();

                if (op == '+') {
                    result = num1 + num2;
                }
                if (op == '*') {
                    result = num1 * num2;
                }
                if (op == '-') {
                    result = num1 - num2;
                }
                if (op == '/') {
                    if (num2 != 0) {
                        result = num1 / num2;
                    }
                }
                if (op == '%') {
                    result = num1 % num2;
                }

            } else if (op == 'x' || op == 'X')
            {
                System.out.println("\nthank-you for using it!\n");
                break;
            }

            else {
                System.out.println("invalid!");
            }
            System.out.println("result : "+result);
        }
    }
}
