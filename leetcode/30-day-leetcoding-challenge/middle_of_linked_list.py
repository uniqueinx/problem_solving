# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def middleNode(self, head: ListNode) -> ListNode:
        runner_1node = head
        runner_2node = head
        while runner_2node and runner_2node.next:
            runner_2node = runner_2node.next
            if runner_2node:
                runner_2node = runner_2node.next
            runner_1node = runner_1node.next
        return runner_1node
