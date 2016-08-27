class A {

  public int sum(int a, int b) {
    System.out.println("A::sum(" + a + ", " + b + ")");
    return a + b;
  }
}


class B extends A {
  public int sum(int a, int b) {
    return super.sum(a, b);
  }
}

class Main {
  public static void main(String[] args) {
    
    A a = new A();
    a.sum(1, 0);

    A b = new B();
    b.sum(10, 2);

 }
 
}