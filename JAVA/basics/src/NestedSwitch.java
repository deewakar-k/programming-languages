import java.util.Scanner;
public class NestedSwitch
{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int EmpID = in.nextInt();
        String education = in.next();

        switch (EmpID) {
            case 1 -> System.out.println("Mr. Deewakar Kumar");
            case 2 -> System.out.println("Mrs. Sushank Rana");
            case 3 -> {
                switch (education) {
                    case "Deewakar" -> System.out.println("God Father of Computer Science");
                    case "Sushank" -> System.out.println("Backlog Candidate and Single");
                }
            }
        }
    }
}
