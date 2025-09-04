#include<stdio.h>
int main(){
int n1,m1,n2,m2;
scanf("%d%d",&n1,&m1);
int  mat1[n1][m1];
for(int i=0;i<n1;i++){
for(int j=0;j<m1;j++){
scanf("%d",&mat1[i][j]);
}
}
scanf("%d%d",&n2,&m2);
int  mat2[n2][m2];
int res[n1][m2];
for(int i=0;i<n2;i++){
for(int j=0;j<m2;j++){
scanf("%d",&mat2[i][j]);
}
}
for (int i = 0; i < n1; i++) {
    for (int j = 0; j < m2; j++) {
        res[i][j] = 0;
    }
}

if(m1==n2){
printf("resultant product is");
for(int i=0;i<n1;i++){
for(int k=0;k<m1;k++){
for(int j=0;j<m2;j++){
res[i][j]+=mat1[i][k]*mat2[k][j];
}
}
}
for(int i=0;i<n1;i++){
for(int j=0;j<m2;j++){
printf("%d ",res[i][j]);
}
}
}
else
printf("matrix multiplication cant be performed");
}
