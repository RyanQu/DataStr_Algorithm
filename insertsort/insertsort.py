A = [1,6,3,2,5,8,7,4]

def insert_sort(A):
    for i in range(len(A)):
        for j in range(i-1,0,-1):
            if A[j+1]<A[j]: A[j+1], A[j] = A[j], A[j+1]
    return A

insert_sort(A)
print A
