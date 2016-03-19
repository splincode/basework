
    define(["js/modules/math.js"], function(){
        // приватные свойства модуля

        // возвращаемый объект
        return {    
            sum: function(x, y){
                return x+y;
            }, 

            abs: function(x){
                return (x > 0) ? x : (-1)*x;
            },

            sqrt: function(a){
                var x = 1; // первое предположение
                var res = (1/2) * (x + (a/x));

                var eps = 0.0000001;

                while(this.abs(x - (a/x)) > eps){
                    res = (1/2) * (x + (a/x));
                    x = res;
                } 

                return res;
            }
        };
    });
