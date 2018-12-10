/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		if(n>1000)
		System.exit(0);
		int d=n,rev=0,rem=0;
		while(n!=0)
		{
		    rem=n%10;
		    rev=rev*10+rem;
		    n/=10;
		}
		if(rev==d)
		System.out.print("yes");
		else
		System.out.print("no");
	}
}
