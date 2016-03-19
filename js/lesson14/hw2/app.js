  // Пример наследования

  function extend(Child, Parent) {
    var F = function() {}
    F.prototype = Parent.prototype
    Child.prototype = new F()
    Child.prototype.constructor = Child
    Child.superclass = Parent.prototype
  }

  var Base = function(){
    var list = [];

    this.set = function(name, money){
      list.push([name, money]);
    }

    this.get = function(key){
      return list[key-1];
    }

    this.getter = function(){
      return list;
    }

  }

  var Temporary = function(){
    Base.apply(this, arguments);

    var Parent = this;

    this.getSum = function(key){
      var l = Parent.getter();
      var lastname = l[key-1][0];
      var money = l[key-1][1];

      return "Сотрудник - " + lastname + ", среднемесячная зарплата = " + (20.8 * 8 * money) + " руб. ";
    }

  }

  var Standing = function(){
    Base.apply(this, arguments);

    var Parent = this;

    this.getSum = function(key){
      var l = Parent.getter();
      var lastname = l[key-1][0];
      var money = l[key-1][1];

      return "Сотрудник - " + lastname + ", среднемесячная зарплата = " +  money + " руб. ";
    }

  }

  extend(Temporary, Base);
  extend(Standing, Base);

  var groupStandingWorker = new Standing();
  var groupTempWorker = new Temporary();

  groupTempWorker.set("Ivanov", 700);
  groupTempWorker.set("Denisov", 300);
  var p1 = groupTempWorker.get(1);
  var check = groupTempWorker.getSum(1);

  groupStandingWorker.set("Ivanov", 70000);
  groupStandingWorker.set("Denisov", 30000);
  var p1 = groupStandingWorker.get(1);
  var check = groupStandingWorker.getSum(1);

  console.log(check);