    #include <bits/stdc++.h>

    using namespace std;
    int a[100005];
    int main()
    {
        int n;
        scanf("%d",&n);
        for(int i =0;i<n;i++){
            scanf("%d",&a[i]);
        }
        int ans=0;
        int c = 2;
        set<int>s;
        s.insert(a[0]);
        s.insert(a[1]);
        for(int i=2;i<n;i++){
            s.insert(a[i]);
            if(s.size()<=2)c++;
            else{

                ans = max(c,ans),s.clear(),s.insert(a[i]),s.insert(a[i-1]),c=2;
                int j = i-2;
                while(j>=0){
                    if(a[j]==a[i-1])c++;
                    else break;
                    j--;
                }

            }
        }
        printf("%d",max(ans,c));
        return 0;
    }
