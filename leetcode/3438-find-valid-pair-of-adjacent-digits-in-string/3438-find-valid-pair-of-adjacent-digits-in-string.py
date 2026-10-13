class Solution:
    def findValidPair(self, s: str) -> str:
        count_map = dict()
        valid_map = dict()
        
        # 1. count
        for data in s:
            if not data in count_map:
                count_map[data] = 1
            else:
                count_map[data] += 1
            
        # 2. max data find
        # max_data = [i for i, v in count_map.items() if max(count_map.values()) == v]
        # max_data = max(count_map, key = count_map.get)

        for key in count_map:
            if count_map[key] == int(key):
                valid_map[key] = True
            else:
                valid_map[key] = False

        # 순회하면서 valid하면 return
        for i in range(len(s)-1):
            char_data = s[i]
            next_char_data = s[i+1]
            if valid_map[char_data] and valid_map[next_char_data] and s[i] != s[i+1]:
                return s[i:i+2]
            elif i == len(s)-2:
                return "" 
        

        # print(max_data)



if __name__ == "__main__":
    sol = Solution()
    print(sol.findValidPair("232"))