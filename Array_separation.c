
#include <stdio.h>
#include <stdlib.h>
void separate(int *arr,int n1,int *arr1,int n2,int *arr2,int n3){
    int j=0;
    int k=0;
    for(int i = 0;i<=n1;i++){
        if(arr[i]%2==0){
            arr1[j]=arr[i];
            j++;
        }
        if(arr[i]%2!=0){
            arr2[k]=arr[i];
            k++;
        }
    }
}
int main() {
    int n,*p,e=0,o=0;
    printf("enter num of int in array");
    scanf("%d",&n);
    p = (int*)malloc(n*sizeof(int));
    if(p == NULL) return 0;

    printf("Enter %d numbers: ", n);
    for (int i =0; i<n; i++){
        scanf("%d", &p[i]);
    }

    for (int i=0; i<=n; i++){
        if((p[i]%2) == 0){
            e++;}
        else
            o++;
    }
    int *arr1 = (int*) malloc(e*sizeof (int));
//    if (arr1 == NULL) return NULL;
    int *arr2 = (int*) malloc(o*sizeof (int));
//    if (arr2 == NULL) return NULL;
    separate(p,n,arr1,e,arr2,o);

    printf("The even arr is: ");
    for (int k=0;k<e;k++){
        printf("%d, ",arr1[k]);
    }
    printf("The odd arr is: ");
    for (int k=0;k<e;k++){
        printf("%d, ",arr2[k]);
    }



    return 0;
}
