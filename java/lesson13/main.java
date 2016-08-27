class Stack {

	final static String name = "Stack";

	private int memory[]; // массив
	private int iterator = 0;
	public int length; // количество элементов в стеке

	Stack(int size){
		memory = new int[size];
	}

	public void push(int val){


		if (iterator < memory.length) {
			memory[iterator] = val;
			iterator++;
			length = iterator;
		} else {
			//System.out.println("Переполнение стека");
		}

		
	}

	public int pop(){
		
		if (iterator == 0) {
			//System.out.println("Переполнение стека");
			return 0;
		} else {
			
			iterator--;
			length = iterator;
			return memory[iterator];
		}
		
	}
	
}


class Main {

  public static void main(String[] args) {

    System.out.println("Тип данных: " + Stack.name);
  	Stack s = new Stack(10);

  	for (int i = 1; i <= 10; i++) s.push(i);
	
	System.out.println("количество элементов в стеке: " + s.length);

  	/*for (int i = 1; i <= 10; i++){
  		System.out.println(s.pop());
  	}*/
 

 }
}