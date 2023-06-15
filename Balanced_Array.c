    #include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int m=0;m<t;m++){
        int n;
        scanf("%d",&n);
        int x[n];
        for(int i = 0 ; i < n ; i++){
            scanf("%d",&x[i]);
        }
        int k = 0 ;
        for(int i = 0 ; i < n ; i++){
            int l = 0,r = 0;
            for(int j = 0 ; j < i ; j++){
                l=l+x[j];
            }
            for(int j = i+1 ; j < n ; j++){
                r=r+x[j];
            }
            if(l==r){
                k++;
            }
        }
        k==0?printf("NO
"):printf("YES
");
    }
}