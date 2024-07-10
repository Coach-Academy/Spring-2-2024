
class Solution:
    def minOperations(self, logs: List[str]) -> int:
        res = 0
        for log in logs:
            if log == '../':
                res -= 1
            elif log == './':
                pass
            else:
                res += 1
            res = 0 if res < 0 else res
        return res
