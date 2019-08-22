import java.util.Scanner;

class Test
{
int a,b,c;
void getData(int d, int e)
{
a=d;
b=e;
}
int add()
{
c=a+b;
return (c);
}
}
class Test05
{
public static void main(String arg[])
{
int d;
Test obj=new Test();
obj.getData(3,4);
d = obj.add();
System.out.println("Addition is: "+d);
}
}
