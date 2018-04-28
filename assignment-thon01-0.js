
function iWantToRent(val){
    
    var sedans =  {
        "rental": 50,
        "available": 4,
        "canIRent": function(){
            if (this.available > 0){
                return sedans.available + " available to rent" + " at " + sedans.rental + " per day";
            } else {
                return "No vehicles available";
            }
        }
    };
    
    var suv =  {
        "rental": 90,
        "available": 0,
        "canIRent": function(){
            if (this.available > 0){
                return suv.available + " available to rent" + " at " + suv.rental + " per day";
            } else {
                return "No vehicles available";
            }
        }
    };
    
    var sports =  {
        "rental": 120,
        "available": 8,
        "canIRent": function(){
            if (this.available > 0){
                return sports.available + " available to rent" + " at " + sports.rental + " per day";
            } else {
                return "No vehicles available";
            }
        }
    };
    
    
    if (val == "sedans") {
        return sedans.canIRent();
    } else if (val == "suv") {
        return suv.canIRent();
    } else if (val == "sports") {
        return sports.canIRent();
    } else {
        return "Enter car type: \"sedans\", \"suv\", or \"sports\"";
    }
}


iWantToRent("motor cycle");

