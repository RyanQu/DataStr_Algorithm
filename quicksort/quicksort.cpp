#include "iostream"
using namespace std;

template <class T>
void change(T &a,T &b){
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int part(int A[],int s,int r){
    // s: start point
    // r: rear point
    int key=A[r]; // Choose last number as key
    int bar=s-1; // Set bar as start -1
    for (int i=s;i<r;i++){
        if (A[i]<=key){
            bar++;
            change(A[bar], A[i]); // Swap
        }  
    }
    change(A[bar+1], A[r]); // Swar key with bar+1
    return bar+1;
}

void qsort(int A[],int s,int r){
    if(s<r){
        int m=part(A,s,r);
        qsort(A,s,m-1);
        qsort(A,m+1,r);
    }
}

int main(){
    int A[]={1,6,3,2,5,8,7,4};
    int lenth = sizeof(A)/sizeof(A[0]);
    qsort(A,0,lenth-1);
    for (int i=0;i<lenth;i++){
        cout << A[i];
    }
    cout << endl;
    return 0;
}
