import java.util.Scanner;


public class LeapYear {

	public static void main(String[] args) {
		Scanner input=new Scanner(System.in);  //���̷��� ���?
		
		System.out.println("������ �Է����ּ��� : ");
		
		int year=input.nextInt();  
		
		boolean result=((year%4)==0);
		
		System.out.println(year+"���� �����ΰ�.. ����! "+result+"��!!!");
	}
}
