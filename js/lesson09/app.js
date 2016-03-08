   // Пользовательские методы работы с массивами
   // (сортировка, нахождение максимального и минимального)

   Array.prototype.bubble = function (){

    var list = this;
    var len = list.length; // размер списка

    var temp;

    for(var i=0; i < len; i++){
      for(var j=0; j < len-1; j++) {

        if (list[j] > list[j+1]) {

          temp = list[j+1];
          list[j+1] = list[j];
          list[j] = temp;

        }

      }
    }

    return list;

   }

   Array.prototype.max = function (){
    var list = this;
    var len = list.length; // размер списка

    var max;
    max = list[0]; // -5

    for (i=1; i < len; i++) {
      if (max < list[i]) {
        max = list[i];
      }
    }

    return max;
   }

   Array.prototype.min = function (){
    var list = this;
    var len = list.length; // размер списка

    var min;
    min = list[0]; // -5

    for (i=1; i < len; i++) {
      if (min > list[i]) {
        min = list[i];
      }
    }

    return min;
   }