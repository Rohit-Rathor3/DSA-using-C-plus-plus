#include<stdio.h>
#include<conio.h>
void leftrotate(int arr[],int d,int n){
    int  temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    for(int j=0 ; j<=n ; j++){
        arr[j]=arr[j+d];
    }
    for(int k=0 ; k<d ;k++){
        arr[k+n-d]=temp[k];
    }
    printf("\n Left Rotated Array :- ");
    for(int l=0; l<n; l++){
        printf("%d ",arr[l]);
    }

}
/*
void rightrotate(int arr[],int d,int n){
    int  temp[d];
    for(int i=d , x=0;i<n , x<n-d;i++ ,x++ ){
        temp[x]=arr[i];
    }
    for(int j=0 ; j<n-d; j++){
        arr[j+d]=arr[j];
    }
    for(int k=0 ; k<n-d ;k++){
        arr[k]=temp[k];
    }
    printf("\n Right Rotated Array :- ");
    for(int l=0; l<n; l++){
        printf("%d ",arr[l]);
    }

}*/
int main(){
    
    int size;
    printf("\nEnter size of Array : ");
    scanf("%d",&size);
    int arr[size];
    printf("\nEnter elements of array : ");
    for(int i=0 ; i<size; i++)
    {
        scanf("%d",&arr[i]);

    }
    int rp;

    again:
    printf("\nEnter rotation point ,you want to rotate the array :");
    scanf("%d",&rp);
    if(rp>size){
        printf("\n Rotation point shoud be less than size of array :");
        goto again;
    }
    leftrotate(arr,rp,size);
    //rightrotate(arr,rp,size);
    return 0;
}