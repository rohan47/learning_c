#include<stdio.h>
#include<assert.h>
#include<time.h>

/* binary search to find x in a sorted array using one test inside loop */
int binsearch(int x, int v[], int n){
    int low, mid, high;
    
    low = 0;
    high = n-1;
    mid = (low + high) / 2;
    while(low<=high && x != v[mid]) {
        if (x < v[mid])
            high = mid - 1;
        else
            low = mid + 1;
        mid = (low + high) / 2;
    }
    if ( x == v[mid] )
        return mid;
    else
        return -1;
}

int main(){
    clock_t start, stop;
    double t = 0.0;
    /* Start timer */
    assert((start = clock())!=-1);

    int val, n = 10;
    int v[10] = {10, 23, 35, 41, 52, 66, 71, 79, 88, 99};
    int x = 79;
    
    val = binsearch(x,v,n);
    if(val == -1)
        printf("Not found");
    printf(">%d\n",val);

    /* Stop timer */
    stop = clock();
    t = (double) (stop-start)/CLOCKS_PER_SEC;
    printf("Run time: %f\n", t);    

    return 0;
}
