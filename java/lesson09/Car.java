class CarTemplate {

  String type; // тип автомобиля
  String color; // цвет автомобиля
  String model; // BMW...
  int mileage;

  CarTemplate(String _type, String _color, String _model){
    type = _type;
    color = _color;
    model = _model;
  }

  void setMileAge(int run){
    mileage = run;
  }

  int getMileAge() {
    return mileage;
  }

}

class Car {
  public static void main(String[] args) {
  
  CarTemplate mercedes  =  new CarTemplate("легковой автомобиль", "зеленый", "mercedes"),
              bmw       =  new CarTemplate("грузовой автомобиль", "синий", "bmw"),
              audi      =  new CarTemplate("легковой автомобиль", "оранжевый", "audi");

              mercedes.setMileAge(1000);
              bmw.setMileAge(12000);
              audi.setMileAge(10000);

  CarTemplate[] cars = {mercedes, bmw, audi};
  for (int i = 0; i < 3; i++){
    System.out.println(
        "Тип автомобиля: " + cars[i].type + ", " + 
        "модель: " + cars[i].model + ", " + 
        "цвет: " + cars[i].color + ", " +
        "пробег (км): " + cars[i].getMileAge()
    );

  }


 }
}