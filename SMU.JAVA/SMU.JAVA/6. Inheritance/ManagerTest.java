import java.util.*;
public class ManagerTest {
	public static void main(String[] args) {
		
		Manager tt=new Manager("����","����",1000000,123456,50000);
		System.out.println(tt);
		tt.test();
		
	}
}
/*	
 * +�� �ۺ�
 * address�� string����
 * -�� private
 *	#�� protected
 * Employee
 * +name : String
 *	address : String
 *	#salary : int
 *	-rrn:int
 *
 *	---
 *
 *	+toString():String
 *	
 *	
 *	Manager
 *	-bonus:int
 *+test():void
 * 
 */
