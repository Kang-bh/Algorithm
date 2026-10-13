# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:

    # 트리 순회
    # preorder : self left right
    # inorder : left self right
    # postorder : left right self
    # 이진 검색 트리 성질 -> inorder -> 오름차순 정렬이 된다.
   
    
    def inorder(self, root):
        if root is None:
            return
        
        self.inorder(root.left)
        # self 처리
        if not self.init:
            self.init = True
            self.prev = root.val
        else:
            self.min_ = min(root.val - self.prev, self.min_)
            self.prev = root.val
        
        self.inorder(root.right)

    def getMinimumDifference(self, root: Optional[TreeNode]) -> int: 
        self.init = False
        self.min_ = float('inf')
        self.prev = 0
        self.inorder(root)
        return self.min_
        # 2번째 노드 발견부터 앞 노드와의 차이 확인


        