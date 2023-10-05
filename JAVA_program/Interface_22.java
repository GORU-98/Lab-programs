interface In1 {

	final int a = 1008;
	void display();
}

class Interface_22 implements In1 {

	public void display(){ 
	System.out.println("implementing interface"); 
	}

	public static void main(String[] args)
	{
		Interface_22 t = new Interface_22();
		t.display();
		System.out.println(a);
	}
}
