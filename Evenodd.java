import java.util.Scanner;

public class Evenodd
{
    public static void main(String args[])
    {
        int n;
        Scanner scan = new Scanner(System.in);
		
        System.out.print("Enter a Number : ");
        n = scan.nextInt();
		
        if(n%2 == 0)
        {
            System.out.print("This is an Even Number");
        }
        else
        {
            System.out.print("This is an Odd Number");
        }
    }
}
