A = [1,6,3,2,5,8,7,4]

def part(A,s,r):
    # s: start point
    # r: rear point
    key=A[r] # Choose last number as key
    bar=s-1 # Set bar as start -1
    for i in range(s,r): 
        if A[i]<=key:
            bar+=1
            A[bar], A[i] = A[i], A[bar] # Swap
    A[bar+1], A[r] = A[r], A[bar+1] # Swar key with bar+1
    return bar+1

def qsort(A,s,r):
    if s<r:
        m=part(A,s,r)
        qsort(A,s,m-1)
        qsort(A,m+1,r)

qsort(A,0,len(A)-1)
print A
