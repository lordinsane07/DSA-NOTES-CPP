class Solution:
    def minAbsDiff(self, grid: List[List[int]], k: int) -> List[List[int]]:
        m = len(grid)
        n = len(grid[0])
        res = [[0]*(n-k+1) for _ in range(m-k+1)]
        kelems = defaultdict(int)
        for i in range(k):
            for j in range(k):
                kelems[grid[i][j]] += 1
        
        kgrid = SortedList(kelems)
        diff = SortedList(kgrid[i]-kgrid[i-1] for i in range(1,len(kgrid)))
        if len(kelems)>1:
            res[0][0] = diff[0]
        for j in range(k,n):
            for i in range(k-1,-1,-1):
                element = grid[i][j-k]
                self.remove(element,kelems,kgrid,diff)
                element = grid[i][j]
                self.add(element,kelems,kgrid,diff)
            if len(kelems)>1:
                res[0][j-k+1] = diff[0]
        reverse = True
        for i in range(k,m):
            if not reverse:
                for j in range(k):
                    element = grid[i-k][j]
                    self.remove(element,kelems,kgrid,diff)
                    element = grid[i][j]
                    self.add(element,kelems,kgrid,diff)
                if len(kelems)>1:
                    res[i-k+1][0]=diff[0]
                for l in range(k,n):
                    for j in range(k):
                        element = grid[i-j][l-k]
                        self.remove(element,kelems,kgrid,diff)
                        element = grid[i-j][l]
                        self.add(element,kelems,kgrid,diff)
                    if len(kelems)>1:
                        res[i-k+1][l-k+1] = diff[0]
            else:
                for j in range(k):
                    element = grid[i-k][n-j-1]
                    self.remove(element,kelems,kgrid,diff)
                    element = grid[i][n-j-1]
                    self.add(element,kelems,kgrid,diff)
                if len(kelems)>1:
                    res[i-k+1][n-k]=diff[0]
                for l in range(n-k-1,-1,-1):
                    for j in range(k):
                        element = grid[i-j][l+k]
                        self.remove(element,kelems,kgrid,diff)
                        element = grid[i-j][l]
                        self.add(element,kelems,kgrid,diff)
                    if len(kelems)>1:
                        res[i-k+1][l] = diff[0]
            reverse = not reverse

        return res

    def remove(self, element, kelems, kgrid,diff):
        if kelems[element]==1:
            idx = kgrid.index(element)
            if idx>0 and idx<len(kgrid)-1:
                diff.remove(kgrid[idx]-kgrid[idx-1])
                diff.remove(kgrid[idx+1]-kgrid[idx])
                diff.add(kgrid[idx+1]-kgrid[idx-1])
            elif idx>0:
                diff.remove(kgrid[idx]-kgrid[idx-1])
            elif idx<len(kgrid)-1:
                diff.remove(kgrid[idx+1]-kgrid[idx])
            kelems.pop(element)
            kgrid.remove(element)
            
        else:
            kelems[element]-=1
        
    def add(self,element, kelems, kgrid,diff):
        kelems[element]+=1
        if kelems[element]==1:
            kgrid.add(element)
            idx = kgrid.index(element)
            if idx>0 and idx<len(kgrid)-1:
                diff.remove(kgrid[idx+1]-kgrid[idx-1])
                diff.add(kgrid[idx]-kgrid[idx-1])
                diff.add(kgrid[idx+1]-kgrid[idx])
            elif idx>0:
                diff.add(kgrid[idx]-kgrid[idx-1])
            elif idx<len(kgrid)-1:
                diff.add(kgrid[idx+1]-kgrid[idx])