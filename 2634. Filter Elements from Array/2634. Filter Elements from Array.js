var filter = function (arr, fn) {

    var ans = new Array;
    for (var i = 0; i < arr.length; i++) {
        if (fn(arr[i], i)) {
            ans.push(arr[i]);
        }
    }
    return ans;
};