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