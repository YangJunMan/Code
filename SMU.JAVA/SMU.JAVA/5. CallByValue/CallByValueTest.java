
public class CallByValueTest {

	public static void main(String[] args) {
		CallByValue nc=new CallByValue();
		System.out.println("���� �� = "+nc.value);
		nc.cb(nc);
		System.out.println("���� �� �� = "+nc.value);
	}

}
