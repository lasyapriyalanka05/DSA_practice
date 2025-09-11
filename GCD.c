int gcd(int a, int b){     
    int rem=a%b;     
    if(rem==0) 
        return b;     
        a=b;     
        b=rem;     
        return gcd(a,b); 
    
} 

int main() {     
    int tc; 
    scanf("%d",&tc);     
    while(tc--){     
        int a,b;    
        scanf("%d %d",&a,&b);     
        int hcf = gcd(a,b);     
        printf("%d %d\n",b/hcf,a/hcf);
       
  }
}
