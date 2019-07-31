    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        int n;
        unsigned long long r,l;
        scanf("%d",&n);
        while(n--){
            scanf("%I64u%I64u",&r,&l);
            unsigned long long i=1;
            while((r|i)<=l){
                r|=i;
                i<<=1;

            }
            printf("%I64u\n",r);
        }

        return 0;
    }
