#include "iostream"
using namespace std;

void insert_sort(int A[],int lenth){
    for (int i=1;i<lenth;i++){
        for (int j=i-1;j>0;j--){
            if (A[j+1]<A[j]) swap(A[j+1],A[j]);
        }
    }
}

int main(){
    int A[]={1,6,3,2,5,8,7,4};
    int lenth = sizeof(A)/sizeof(A[0]);
    insert_sort(A, lenth);
    for (int i=0;i<lenth;i++){
        cout << A[i];
    }
    cout << endl;
    return 0;
}

