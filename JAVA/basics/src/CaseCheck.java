import java.util.Scanner;
public class CaseCheck
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        // .trim() is basically means remove all the extra spaces at the end of the word.
        System.out.print("enter char: ");
        char ch = in.next().trim().charAt(0);

        if(ch >= 'a' && ch <= 'z')
        {
            System.out.println(ch+" is LowerCase");
        }
        else
        {
            System.out.println(ch+" is UpperCase");
        }
    }
}
