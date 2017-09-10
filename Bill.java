import java.util.Scanner;
public class bill {

	 
		static int bill_no;
		static String name,address,usage;	
		static float unit,amount;
		static Scanner sc=new Scanner(System.in);
			static void get()
		{
				
				
			System.out.println("enter your name");
			name=sc.nextLine();
			System.out.println("enter your adress");
			address=sc.nextLine();
			System.out.println("enter your billno");
			bill_no=sc.nextInt();
			System.out.println("enter the no.of units");
			unit=sc.nextFloat();
			//System.out.println("household or industrial ");
			//usage=sc.nextLine();
			
		}
			static void industrial()
			{
				System.out.println("save electricity save life");
				amount=(float) (unit*8.0);
				System.out.println("your amount is:"+amount);
			}
			static void household()
			{
				System.out.println("switch off lights whennot in use");
				amount=(float) (unit*5.0);
				System.out.println("your amount is:"+amount);
			}
			static void display()
			{   System.out.println("WELCOME TO DESH BHARAT ELECTRICAL AGENCY ");
			System.out.println("BIJLI BACHAO, DESH BADHAO!!!");
			System.out.println("**************************************");
				System.out.println("youname:"+name);
				System.out.println("your address:"+address);
				System.out.println("your billno:"+bill_no);
				System.out.println("your units"+unit);
				System.out.println("your amount:"+amount);
				System.out.println("**************************************");
				System.out.println("PAY BILL BEFORE DUE DATE ");
				System.out.println("THANKYOU");
			}
	public static void main(String[]args)	
	{
		System.out.println("welcome to electricity department");
		get();
		System.out.println("select industrial or household");
		System.out.println("for industrialpress 1   forhousehold press 2");
		int a;
		a=sc.nextInt();
		switch(a){
		case 1:
		industrial();
		case 2:
			household();}
		
		display();
		
	}

}
