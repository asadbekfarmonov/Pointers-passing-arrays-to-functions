int searcharr(int *arr,int size,int n){
    for(int i =0;i<=size;i++){
        if(arr[i]==n){
            return i;
        }
    }
