import java.util.Scanner;
public class Palindrome
{
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        System.out.print("enter string : ");
        String x = in.next();

       int i = 0; int j = x.length() - 1;

       while(i < j)
       {
           if(x.charAt(i) != x.charAt(j))
           {
               System.out.print(x+" is not palindrome");
           }
           i++;
           j--;
       }
        System.out.println(x+ " is palindrome yay!");
    }
}
