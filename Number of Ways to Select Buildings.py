class Solution:
    def numberOfWays(self, s: str) -> int:
        count_zeros_left = 0
        count_ones_left = 0
        helper_obj = {}
        len_s = len(s)

        for i in range(0, len_s):
            if s[i] == '0':
                is_present = helper_obj.get(i)
                if is_present:
                    helper_obj[i][0] = count_ones_left
                else:
                    helper_obj[i] = [count_ones_left, 0]
                count_zeros_left += 1
            else:
                is_present = helper_obj.get(i)
                if is_present:
                    helper_obj[i][0] = count_zeros_left
                else:
                    helper_obj[i] = [count_zeros_left, 0]
                count_ones_left += 1
        count_zeros_right = 0
        count_ones_right = 0
        for i in range(len_s-1, -1, -1):
            if s[i] == '0':
                helper_obj[i][1] = count_ones_right
                count_zeros_right += 1
            else:
                    helper_obj[i][1] = count_zeros_right
                    count_ones_right += 1
        result = 0
        for key in helper_obj:
            result += helper_obj[key][0] * helper_obj[key][1]
        return result



