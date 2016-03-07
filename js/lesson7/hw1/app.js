
	var sum_ab = (function(){

		var a = 0,
		    b = 0,
		    sum = 0;

		    // получение целочисленных значений
		    a = parseFloat(prompt("Введите число a: ")) || 0; // 1..2..3 || NaN
		    b = parseFloat(prompt("Введите число b: ")) || 0; // 1..2..3 || NaN

		    // получение суммы
		    sum = a + b;

		   	// создали функцию модуля числа
		   	var mod = function(arg){
		   		if (arg < 0) arg = arg * (-1); // -10 * (-1) = 10
		   		return arg;
		   	} 

		   	// проверили на выполнение условия задачи
		   	if (mod(sum) > 10) alert("Не правильные входные параметры");
		   	else alert(sum);
		   	
		   	// выполнение скрипта занова
		   	var state = confirm("Хотите повторить выполнение операции?"); // true || false

		   	if (state) sum_ab();
		   	else return;
	})();