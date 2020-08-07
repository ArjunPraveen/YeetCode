class Solution:
    def uncommonFromSentences(self, A: str, B: str) -> List[str]:
        check = set(A.split()) ^ set(B.split())
        delete = []
        for i in check:
            c=0
            for j in A.split():
                if(i == j):
                    c+=1
            if c==1:
                continue
            if c>1:
                delete.append(i)
                continue
            c=0
            for j in B.split():
                if (i==j):
                    c+=1
            if c>1:
                delete.append(i)
        print(delete)
        for i in delete:
            check.remove(i)
                    
        return check
        
