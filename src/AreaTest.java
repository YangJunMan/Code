import java.util.Scanner;


public class AreaTest {

	public static void main(String[] args) {
		Scanner input=new Scanner(System.in);  //���̷��� ���?
		
		System.out.println("�������� �Է����ּ��� : ");
		float radius=input.nextFloat(); //������ �¾Ҵ�! float�� �ȴ�!
		
		final float PI=(float)3.141592; //PI���� �Һ�����?
		float area=radius*radius*PI;

		System.out.println("��������"+radius+"�� ���� ������"+area+"�Դϴ�.");
	}

}
