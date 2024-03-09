//Hoare Partition

#include<bits/stdc++.h>
#define max 10000
using namespace std;

int A[max], B[max], C[max], D[max], E[max], F[max], G[max], H[max], I[max], Z[max]; 

int partition(int a[], int l, int r){
    int pivot = a[l];
    int i = l - 1;
    int j = r + 1;
    while (1){
        do{
            ++i;
        }while( a[i] < pivot);
        do{
            --j;
        }while( a[j] > pivot);
        if ( i < j){
            swap( a[i], a[j]);
        }
        else return j;
    }
}

void quicksort(int a[], int l, int r){
    if( l >= r) return;
    int p = partition( a, l, r);
    quicksort(a, l, p); //D
    quicksort(a, p + 1, r);
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
    quicksort(A, 0, max-1); 
    quicksort(B, 0, max-1);
    quicksort(C, 0, max-1);
    quicksort(D, 0, max-1);
    quicksort(E, 0, max-1);
    quicksort(F, 0, max-1);
    quicksort(G, 0, max-1);
    quicksort(H, 0, max-1);
    quicksort(I, 0, max-1);
    quicksort(Z, 0, max-1);
    end = clock();
    time = 1000.0*(end - start) / CLOCKS_PER_SEC;
    cout <<"Time: "<<  time;
    return 0;
}