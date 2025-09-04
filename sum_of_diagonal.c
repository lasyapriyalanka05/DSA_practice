#include<stdio.h>
int main(){
int n,m,sum=0;
scanf("%d%d",&n,&m);
int  mat[n][m];
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
scanf("%d",&mat[i][j]);
}
}
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
if(i==j)
sum=sum+mat[i][j];
}
}
printf("sum of diagonal elements=%d",sum);
}
