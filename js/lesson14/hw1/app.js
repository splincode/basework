  // Пример наследования

  function extend(Child, Parent) {
    var F = function() {}
    F.prototype = Parent.prototype
    Child.prototype = new F()
    Child.prototype.constructor = Child
    Child.superclass = Parent.prototype
  }


  var Computer = function(_mod, _proc, _memory, _rom){
    this.model = _mod;
    this.proc = _proc; // название процессора
    this.memory = _memory; // количество памяти ОЗУ
    this.rom = _rom; // количество дисководов
  }

  var Asus = function(_mod, _proc, _memory, _rom, _money){
    Computer.apply(this, arguments);

    this.money = _money;
  };

  var Acer = function(){
    Asus.apply(this, arguments);
  };

  extend(Asus, Computer); // class Asus extend Computer {};
  extend(Acer, Asus); // class Acer extend Asus {};

  var G500 = new Asus("Asus", "Intel Core i3", "8гб", 0, 50000);
  var AspireV = new Acer("Acer", "Intel Core i5", "2гб", 0, 30000);



  console.log(G500)
  console.log(AspireV)
