  #include <stdio.h>
  int main(){
  int i;
  int minI=0;
  int a[5];
  int min=a[i];
  
  for(i=0;i<5;i++){
    scanf("%d",&a[i]);
  }
  
  for(i=0;i<5;i++){
    if (a[i]<min){
      minI=i;
      min=a[i];
    }
      
  }
    
  printf ("%d",minI);
    
  }
