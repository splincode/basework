
    requirejs([
        "js/modules/gui.js",
        "js/modules/math.js"
    ], function(gui, JSMath){
        // код

        var x = JSMath.sum(5, 6);
        x = JSMath.sqrt(3); // 1.73

        alert(x);

    });
