/**
 * @param {string} val
 * @return {Object}
 */
var expect = function(val) {
    const origval = val;
return{
    toBe: function(newval){
        if(newval !== origval){
        throw new Error("Not Equal");
        }
        else return true;
    }
    ,
    notToBe : function(newval){
        if(newval === origval){
            throw new Error("Equal");
        }
        else return true;
    }
}
};

/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */