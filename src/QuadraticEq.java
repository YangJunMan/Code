import java.util.Scanner;


public class QuadraticEq {

	public static void main(String[] args) {
		Scanner �Է¹ޱ�=new Scanner(System.in);
		
		System.out.println("2�������Ŀ��� b���� c���� �Է����ּ���.");
		float fb=�Է¹ޱ�.nextFloat();
		float fc=�Է¹ޱ�.nextFloat();
		
		float floot=(float)Math.sqrt(fb*fb-4*1*fc);
		float fresult1=(float)(-fb+floot)/2;
		float fresult2=(float)(-fb-floot)/2;
		
		System.out.println("b�� -3�̰�, c�� 2�� 2���������� �ش�"+fresult1+"��"+fresult2+"�Դϴ�");
		
	}

}
