//Hoare Partition

#include<bits/stdc++.h>
#define max 10000
using namespace std;

int A[max], B[max], C[max], D[max], E[max], F[max], G[max], H[max], I[max], Z[max]; 

void merge(int a[], int l, int m, int r){
    vector<int> x(a + l, a + m + 1);
    vector<int> y(a + m + 1, a + r + 1);
    int i = 0, j = 0;
    while( i < x.size() && j < y.size()){
        if ( x[i] <= y[j]){
            a[l++] = x[i++];
        }
        else{
            a[l++] = y[j++];
        }
    }
    while( i < x.size()){
        a[l++] = x[i++];
    }
    while( j < y.size()){
        a[l++] = y[j++];
    }
}

void mergesort(int a[], int l, int r){
    if ( l >= r ) return;
    int m = (l+r)/2;
    mergesort(a, l, m);
    mergesort(a, m + 1, r);
    merge(a, l, m, r);
}

void Random(int a[]){
    srand(time(NULL));
    for ( int i=0; i<max; i++){
        a[i] = rand() % 1000000;
    }
}

void printArray(int a[]){
    for( int i=0; i<max; i++){
        cout << a[i] << " ";
    }
}

int main(){   
    clock_t start, end;
    double time; 
    Random(A); sort(A, A+max);
    Random(B); sort(B, B+max, greater<int>()); 
    Random(C); 
    Random(D);
    Random(E);
    Random(F);
    Random(G);
    Random(H);
    Random(I);
    Random(Z);    

    start = clock();
    mergesort(A, 0, max-1); 
    mergesort(B, 0, max-1); 
    mergesort(C, 0, max-1); 
    mergesort(D, 0, max-1); 
    mergesort(E, 0, max-1); 
    mergesort(F, 0, max-1); 
    mergesort(G, 0, max-1); 
    mergesort(H, 0, max-1); 
    mergesort(I, 0, max-1); 
    mergesort(Z, 0, max-1); 
    end = clock();
    time = 1000.0*(end - start) / CLOCKS_PER_SEC;
    cout <<"Time: "<<  time;
    return 0;
}