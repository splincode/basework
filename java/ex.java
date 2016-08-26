class A {
  public int a = 5;

  public A (int x) {
    this.a=x;
  }

}


class B extends A {

  public void Show(){
    System.out.println("B");
  }
}

class Car {
  public static void main(String[] args) {
  
  A a = new A(12);
  System.out.println(a.a);

  B b = new B();
  A c = new B();



  a.Show();
  b.Show();
  c.Show();

 }
 
}