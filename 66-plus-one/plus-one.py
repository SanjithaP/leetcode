class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        digits[len(digits)-1]=digits[len(digits)-1]+1
        if len(digits)==1 and digits[0]==10:
            digits[0]=1
            digits.append(0)
        for i in range(len(digits)-1,0,-1):
            if digits[i]>9:
                digits[i]=0
                digits[i-1]=digits[i-1]+1
            if digits[0]==10:
                digits[0]=1
                digits.append(0)
            
            

        return digits

