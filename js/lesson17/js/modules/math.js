
    define(["js/modules/math.js"], function(){
        return {
            sum: function(x, y){
                return x + y;
            }, 
            abs: function(x){
                return (x > 0) ? x : (-1)*x;
            },
            sqrt: function(a){
                var x = 1; // предположительное
                var xn = (1/2)*(x + (a/x));

                var eps = 0.0000001;
                while(this.abs(x - (a/x)) > eps){

                    xn = (1/2)*(x + (a/x));
                    x = xn;

                }

                if ((xn - xn.toFixed(0)) == 0) xn = xn.toFixed(0);
                else xn = xn.toFixed(2);

                return xn;

            }
        };
    });
