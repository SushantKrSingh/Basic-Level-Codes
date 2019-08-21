import java.util.Scanner;

class Maximum
{
public static void main(String arg[])
{
int i,j,max;
Scanner obj=new Scanner(System.in);
System.out.println("Enter the first number:");
i=obj.nextInt();
System.out.println("Enter the second number:");
j=obj.nextInt();

max=(i>j)?i:j;

System.out.println("Largest Number among:"+i+"and"+j+"is:"+max+".");
}
}
