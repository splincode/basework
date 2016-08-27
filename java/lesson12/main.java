class MATH {

	double PI;

	public void setPI(MATH obj){
		obj.PI = 3.14; // 0x00001 = 3.14;
	}

	public MATH getobj(){
		return this;
	}

	public void showPI(){
		System.out.println(PI);
	}

}

/*
	передача по ссылке, помещаем в ячейку по ссылке на объект
	|   ptr  |    PI   |  setPI  |        |        | 
	 0x00000   0x00001   0x00002  0x00003  0x00004 

*/


class Main {
  public static void main(String[] args) {
    
    MATH m = new MATH();
    
    m.getobj().showPI();

    // копирование по ссылке
    m.setPI(m);

    System.out.println(m.PI); 
 

 }
 
}