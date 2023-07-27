var createCounter = function (init) {
    const x = init;
    return {
        increment: function () {
            return init += 1;
        },

        decrement: function () {
            return init -= 1;
        },

        reset: function () {
            init = x;
            return init;
        }
    }
};