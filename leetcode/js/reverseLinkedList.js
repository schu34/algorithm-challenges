/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 * https://leetcode.com/problems/reverse-linked-list/description/
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var reverseList = function(head) {
    if(!head){
        return []
    }

    var prev = null, current = head, next = head.next;
    
    
    while(current){
        console.log(von(prev), von(current), von(next));
        current.next = prev;
        prev = current;
        current = next;
        next = next ?current.next: null;
    }
      
    
   return prev
};

function von(x){
    return x? x.val:null
}