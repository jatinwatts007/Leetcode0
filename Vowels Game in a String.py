class Solution:
    def doesAliceWin(self, s: str) -> bool:
        count_vowel = 0
        
        for char in s:
            if char in 'aeiou':
                count_vowel+=1
        print(count_vowel)
        return False if count_vowel==0 else True
        
