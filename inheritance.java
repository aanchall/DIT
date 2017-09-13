import java.util.Scanner;

 class empsalary {

	String name;
	String empid;
	double phoneno;
	String address;
	String gender;
	String bg;
	String national;
	int age;
	public Scanner sc=new Scanner(System.in);
	
	void getmethod()
	{
	System.out.println("enter your name");
	name=sc.nextLine();
	System.out.println("enter your email ID");
	empid=sc.nextLine();
	System.out.println("enter your phone no.");
	phoneno=sc.nextDouble();
	System.out.println("enter your address");
	address=sc.nextLine();
	System.out.println("enter your gender");
	gender=sc.nextLine();
	System.out.println("enter your blood group");
	bg=sc.nextLine();
	System.out.println("enter your nationality");
	national=sc.nextLine();
	System.out.println("enter your age");
	age=sc.nextInt();
	}
	
	public class advanceemp extends empsalary
	{
		public Scanner sc=new Scanner(System.in);
		double basicpay,netsalary,takehome,pf,ar,da;
		void inputsal()
		{
			System.out.println("enter your basic salary");
			basicpay=sc.nextDouble();
		}
		void calsalary()
		{
			ar=.10*basicpay;
			da=.60*basicpay;
			netsalary=basicpay-ar-da;
			pf=.12*netsalary;
			takehome=netsalary-pf;
		}
		void payroll()

	{
			System.out.println("WELCOME TO DIT UNIVERSITY");
			System.out.println("you have reached in pay office");
			System.out.println("***************************************************");
			System.out.println("name:"+name);
			System.out.println("your e-mail is:"+empid);
			System.out.println("your address=:"+address);
			System.out.println("your phone number="+phoneno);
			System.out.println("your age is:"+age);
			System.out.println("your gender:"+gender);
			System.out.println("your blood group:"+bg);
			System.out.println("you are from:"+national);
			System.out.println("********************************************************");
			System.out.println("your basic salary:"+basicpay);
			System.out.println("your final amount:"+takehome);
			
			}
	
	public static void main(String[] args) {
		advanceemp e=new advanceemp();
		e.getmethod();
		e.inputsal();
		e.calsalary();
		e.payroll();
	

	}

}
