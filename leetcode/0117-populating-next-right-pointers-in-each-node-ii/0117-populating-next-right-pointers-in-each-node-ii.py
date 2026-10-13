"""
# Definition for a Node.
class Node:
    def __init__(self, val: int = 0, left: 'Node' = None, right: 'Node' = None, next: 'Node' = None):
        self.val = val
        self.left = left
        self.right = right
        self.next = next
"""

class Solution:
    def connect(self, root: 'Node') -> 'Node':
        if not root:
            return root
        
        current = root
        temp = Node(0) 
        tail = temp
        
        while current:
            if current.left:
                tail.next = current.left
                tail = tail.next
            if current.right:
                tail.next = current.right
                tail = tail.next
            current = current.next
            
            if not current:
                current = temp.next 
                temp.next = None 
                tail = temp
        
        return root