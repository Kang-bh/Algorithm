class Solution:

    # bactracking == recursion
    # termination check

    def process(self, n:int, numOpen: int, numClosed, string:str, rs: list):

        # termination check
        if numOpen == n and numClosed == n:
            rs.append(string)
            return

        # recursion
        if numOpen < n:
            self.process(n, numOpen+1, numClosed, string+'(', rs) # ad open bracket 
        
        if numOpen > numClosed:
            self.process(n, numOpen, numClosed+1, string+')', rs) # add closed bracket

    def generateParenthesis(self, n: int) -> List[str]:
        rs = list()

        # process
        # numClose > numOpen -> invalid
        # 매 순간 Open이 많거나 같아
        self.process(n, 0, 0, '', rs)

        return rs