//https://leetcode.com/problems/min-cost-climbing-stairs/description/
/**
 * @param {number[]} cost
 * @return {number}
 */

let memo = {}
var minCostClimbingStairs = function(cost) {
    memo = {};
    // return Math.min(minCostRecursive(cost, 0), minCostRecursive(cost, 1));
    const retCosts = minCostBottomUp(cost);
    return Math.min(retCosts[0], retCosts[1]);
};

// var minCostRecursive = function(cost, start){
//     if(memo[start]) return memo[start];
//     else if(start === cost.length-1 || start === cost.length-2){
//         memo[start] = cost[start];
//         return cost[start];
//     }else{
//         const answer = cost[start] + Math.min(minCostRecursive(cost, start + 1), minCostRecursive(cost, start+2));
//         // console.log(answer)
//         memo[start] = answer;
//         return answer
//     }
// }

var minCostBottomUp = function(cost){
    let rev = cost.reverse();
    var retArr = [];
    retArr.push(rev[0]);
    retArr.push(rev[1]);
    
    for(var i = 2; i < cost.length; i++){
        // console.log(retArr, rev);
        retArr[i] = rev[i] + Math.min(retArr[i-1], retArr[i-2])
    }
    return retArr.reverse();
}