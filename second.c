#include<stdio.h>

int main(){
    int n, i, j,k, arr[100],output[100]={0},count=0, high=1, flag=0;
   
    printf("Enter number of elements to enter in an array: ");
    scanf("%d",&n);
   
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   
    /*****************************/
    for(i=0;i<n-1;i++){
        count=0;
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(high<count){
            high=count;
            output[0]=arr[i];
            output[1]='\0';
        }
        else if(high == count){
            flag=0;
            for(k=0;output[k]!='\0';k++){
                if(arr[i]==output[k]){
                    flag=1;
                }
            }
            if(flag==0){
                for(k=0;output[k]!='\0';k++);
                output[k]=arr[i];
                output[++k]='\0';
            }
        }
    }
    for(k=0;output[k]!='\0';k++){
        printf("%d ",output[k]);
    }
   
    /*****************************/
    getch();
    return 0;
}
