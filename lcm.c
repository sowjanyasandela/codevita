#include<stdio.h>
long int gcd(long int,long int);
int main(){
      int t;
        scanf("%d",&t);
        while(t--){
            long int a,b;
            scanf("%ld %ld",&a,&b);
            long int g = gcd(a,b);
            long int l = (a * b)/g;
            printf("%ld %ld\n",g,l);
        }
        return 0;
    }
    long int gcd(long int a,long int b){
        if(a == 0)
            return b;
        if(b == 0)
            return a;
        return gcd(b,a%b);
    }  
