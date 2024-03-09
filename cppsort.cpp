
#include<bits/stdc++.h>
#define max 10000
using namespace std;

int A[max], B[max], C[max], D[max], E[max], F[max], G[max], H[max], I[max], Z[max]; 

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
    sort(A, A+max);
    sort(B, B+max);
    sort(C, C+max);
    sort(D, D+max);
    sort(E, E+max);
    sort(F, F+max);
    sort(G, G+max);
    sort(H, H+max);
    sort(I, I+max);
    sort(Z, Z+max);
    end = clock();
    time = 1000.0*(end - start) / CLOCKS_PER_SEC;
    cout <<"Time: "<<  time;
    return 0;
}