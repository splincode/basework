
  // Пользовательский ассоциативный массив (класс-прототип)

	var Mapsi = function () {
		var self = this;

		// приватное свойство
		var obj = {};
		var sizeof = function(){
			var count = 0;
			for(var iterator in obj){ // for - in
				count++;
			}

			self.size = count;
		}

		this.size = 0;

		this.set = function(key, value){
			obj[key] = value;
			sizeof();
		}

		this.get = function(key){
			return obj[key];
		}


	}