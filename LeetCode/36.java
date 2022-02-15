/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode deleteDuplicates(ListNode head) {
        if (head == null){
            return head;
        }
        ListNode temp_head = new ListNode(head.val);
        ListNode return_head = temp_head;
        head = head.next;
        while(head!=null){
            if (head.val != temp_head.val){
                temp_head.next = new ListNode(head.val);
                temp_head = temp_head.next;
            }
            head = head.next;
        }
        return return_head;
    }
}


// https://leetcode.com/problems/remove-duplicates-from-sorted-list/submissions/