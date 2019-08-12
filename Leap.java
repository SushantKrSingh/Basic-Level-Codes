import java.util.Scanner;
class Leap
{
public static void main(String arg[])
{
int year;
Scanner obj=new Scanner(System.in);
System.out.println("Enter the Year:");
year=obj.nextInt();

if(year%400==0 || year%4==1 || year%100==0)
{
System.out.println("The Given Year is a leap Year.");
}
else
System.out.println("The Given Year is not a Leap Year.");
}
}
