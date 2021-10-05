import java.io.*;
class MoveAllNeg
{
static void move(int a[], int n)
{
int key=0;
for(int i=0; i<n; i++)
{
if(a[i]<0)
{
int temp = a[i];
a[i]=a[key];
a[key]=temp;
key++;
}
}
for(int i=0; i<n; i++)
{
System.out.print(a[i]);
}
System.out.println();
}
public static void main(String args[])
{
int a[]={1,2,3,-3,-8,-1};
int n = a.length;
move(a,n);
}
}
