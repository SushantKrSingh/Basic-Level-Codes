import java.util.Scanner
class Salary
{
public static void main(String arg[])
{
int sal;
Scanner obj=new Scanner(System.in);
System.out.println("Enter your Salary:");
sal=obj.nextInt();

if(sal>10000)
{
sal=sal+((sal)*15/100);
}
System.out.println("Your Incremented Salary is:"+b);
}
}
