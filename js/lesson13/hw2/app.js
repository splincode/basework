 // максимальное и минимальное

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