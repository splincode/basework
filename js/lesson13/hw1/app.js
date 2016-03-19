  // рандомный массив чисел, сортировка
  var random = [1, 9, -2, 5, 10, 23, 8, 0];
  var length = random.length;


  Array.prototype.bubble = function(){

    var random = this;
    var length = random.length;

    var i, j;
    var buffer = 0;
    for (i = 0; i < length; i++) {
      for(j=0; j < length-1; j++){

        if (random[j] > random[j+1]){

          buffer = random[j+1];
          random[j+1] = random[j];
          random[j] = buffer;

        }

      }
    }

    return random;

  }

  var sort = random.bubble();
  window.alert(sort);