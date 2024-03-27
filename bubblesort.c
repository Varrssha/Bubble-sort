#include<stdio.h>
int main(){
      
      int a[6]={5,20,10,8,18,50};
      for(int i=0;i<6;i++)
      {
          for(int j=i+1;j<6;j++){
              if(a[i]>a[j]){
                  a[i]=a[i]^a[j];
                  a[j]=a[i]^a[j];
                  a[i]=a[i]^a[j];
              }
              }
              }printf("sorted array\n");
              for(int i=0;i<6;i++)
              printf("%d ",a[i]);
          
      
}