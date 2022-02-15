// https://www.hackerrank.com/challenges/find-the-merge-point-of-two-joined-linked-lists/problem


import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    static class SinglyLinkedListNode {
        public int data;
        public SinglyLinkedListNode next;

        public SinglyLinkedListNode(int nodeData) {
            this.data = nodeData;
            this.next = null;
        }
    }

    static class SinglyLinkedList {
        public SinglyLinkedListNode head;
        public SinglyLinkedListNode tail;

        public SinglyLinkedList() {
            this.head = null;
            this.tail = null;
        }

        public void insertNode(int nodeData) {
            SinglyLinkedListNode node = new SinglyLinkedListNode(nodeData);

            if (this.head == null) {
                this.head = node;
            } else {
                this.tail.next = node;
            }

            this.tail = node;
        }
    }

    public static void printSinglyLinkedList(SinglyLinkedListNode node, String sep, BufferedWriter bufferedWriter) throws IOException {
        while (node != null) {
            bufferedWriter.write(String.valueOf(node.data));

            node = node.next;

            if (node != null) {
                bufferedWriter.write(sep);
            }
        }
    }

    // Complete the findMergeNode function below.

    /*
     * For your reference:
     *
     * SinglyLinkedListNode {
     *     int data;
     *     SinglyLinkedListNode next;
     * }
     *
     */
    
    static int findSize(SinglyLinkedListNode head){
        if (head == null){
            return 0;
        }
        else{
            int len = 0;
            while(head!=null){
                len+=1;
                head = head.next;
            }
            return len;
        }
    }
    static int findMergeNode(SinglyLinkedListNode head1, SinglyLinkedListNode head2) {
        int len1 = findSize(head1);
        int len2 = findSize(head2);
        if (len1 > len2){
            int diff  = len1 - len2;
            while(diff>0){
                head1 = head1.next;
                diff -=1;
            }
        }
        else if (len1 < len2){
            int diff  = len2 - len1;
            while(diff>0){
                head2 = head2.next;
                diff -=1;
            }
        }
        else{
            assert true;
        }
        while(head1 != head2 ){
            head1 = head1.next;
            head2 = head2.next;
        }
        return head1.data;

    }

    private static final Scanner scanner = new Scanner(System.in);