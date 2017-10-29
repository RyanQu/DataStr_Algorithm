A = [1,6,3,2,5,8,7,4]

def qsort(A,start,tail):
    if start < tail-1: 
        bar = start-1
        for i in range(start,tail):
            if A[i] <= A[tail]:
                bar+=1
                A[i], A[bar] = A[bar], A[i]

        A[bar+1], A[tail] = A[tail], A[bar+1]

        qsort(A,bar+1,tail)
        qsort(A,start,bar)

qsort(A,0,len(A)-1)
print A