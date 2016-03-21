    
    var JSMath = {
        sum: function(x, y){
            return x + y;
        }, 
        abs: function(x){
            return (x > 0) ? x : (-1)*x;
        },
        sqrt: function(a){
            var x = 1; // предположительное
            var xn = (1/2)*(x + (a/x));

            var eps = 0.000001;
            while(this.abs(x - (a/x)) > eps){

                xn = (1/2)*(x + (a/x));
                x = xn;

            }

            return xn;

        }
    };
