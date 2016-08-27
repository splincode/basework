class Figure { // абстракция: Фигура

	// значения по умолчанию
	double a = 10;
	double b = 5;

	Figure(double _a, double _b){
		
		if (_a > 0) this.a = _a;
		if (_b > 0) this.b = _b;

	}


}


class Box extends Figure { // фигура: квадрат

	Box(double a, double b){
		super(a, b);
	}

	double area(double _a, double _b){ // вычисление площади
		if (_a <= 0) _a = this.a;
		if (_b <= 0) _b = this.b;

		return _a * _b; // S = a * b
	}

}

class RightTriangle extends Figure { // фигура: прямоугольный треугольник
	
	RightTriangle(double a, double b){
		super(a, b);
	}

	double area(double _a, double _b){ // вычисление площади
		if (_a <= 0) _a = this.a;
		if (_b <= 0) _b = this.b;

		return (_a*_b)/2; // S = [a * b] / 2
	}

}

class Main {
  public static void main(String[] args) {
    
    Box b = new Box(10, 10);
    RightTriangle t = new RightTriangle(0, 0);

   	double s = b.area(0, 0);
    System.out.println("S = " + s); // 100.0

    s = t.area(2, 2);
    System.out.println("S = " + s); // 2.0

 }
 
}