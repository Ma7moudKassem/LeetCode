var expect = function (val) {
    return {
        toBe: (n) => {
            if (n !== val) throw new Error("Not Equal");
            else return true;
        },

        notToBe: (n) => {
            if (n === val) throw new Error("Equal");
            else return true;
        },
    }
};