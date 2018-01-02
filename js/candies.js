
// https://leetcode.com/problems/distribute-candies/description/
var distributeCandies = function(candies) {
  let hshmp = {};
  candies.forEach(c=>{
      hshmp[c] ? hshmp[c]++ : hshmp[c] = 1;
  })
  return Math.min(candies.length/2, Object.keys(hshmp).length)
  
};