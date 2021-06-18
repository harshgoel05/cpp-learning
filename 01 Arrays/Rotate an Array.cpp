// GFG Solution:
// C++ program to rotate an array by
// d elements


//  Can use temp variable (optimal), temp array 
#include <iostream>
using namespace std;
 
/*Fuction to get gcd of a and b*/
int gcd(int a, int b)
{
    if (b == 0)
        return a;
 
    else
        return gcd(b, a % b);
}
 
/*Function to left rotate arr[] of siz n by d*/
void leftRotate(int arr[], int d, int n)
{
    /* To handle if d >= n */
    d = d % n;
    int g_c_d = gcd(d, n);
    for (int i = 0; i < g_c_d; i++) {
        /* move i-th values of blocks */
        int temp = arr[i];
        int j = i;
 
        while (1) {
            int k = j + d;
            if (k >= n)
                k = k - n;
 
            if (k == i)
                break;
 
            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
    }
}
 

// My solution:

void rotateArr(int arr[], int d, int n){
    int temp[d];
    int k =0;
    for(int i=0;i<n;i++){
        if(i<d){
            temp[k] = arr[i];
            k++;
        }
        else{
            arr[i-2]=arr[i];
        }
    }
    for(int i=0;i<d;i++){
        arr[n-d+i]=temp[i];
    }
}