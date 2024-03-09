
#include<bits/stdc++.h>
#define max 10000
using namespace std;

int A[max], B[max], C[max], D[max], E[max], F[max], G[max], H[max], I[max], Z[max]; 

void heapify(int a[], int n, int i){
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;
    if ( left < n && a[largest] < a[left]){
        largest = left;
    }
    if ( right < n && a[largest] < a[right]){
        largest = right;
    }
    if ( largest != i){
        swap( a[largest], a[i]);
        heapify(a, n, largest);
    }
}

void heapsort(int a[], int n){
    //Build Max-Heap
    for ( int i = n/2 - 1; i >= 0; i--){
        heapify(a, n, i);
    }
    //Sort
    for ( int i = n - 1; i >= 0; i--){
        swap( a[0], a[i]); 
        heapify( a, i, 0); 
    }
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
    heapsort(A, max); 
    heapsort(B, max);
    heapsort(C, max);
    heapsort(D, max);
    heapsort(E, max);
    heapsort(F, max);
    heapsort(G, max);
    heapsort(H, max);
    heapsort(I, max);
    heapsort(Z, max);
    end = clock();
    time = 1000.0*(end - start) / CLOCKS_PER_SEC;
    cout <<"Time: "<<  time;
    return 0;
}