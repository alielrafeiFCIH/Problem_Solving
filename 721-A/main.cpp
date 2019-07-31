#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    scanf("%d",&n);

    string word ;

    cin>>word;
    int start =0 ;
    int end = 0;
    vector<int>v;
    int group_member=0;
    int number_of_groups=0;
    while(end<=word.length()){
     if(word[start]=='B'){
        if(word[end]=='B'){
            group_member++;
            end++;
        }else {
            v.push_back(group_member);
            group_member=0;
            number_of_groups++;
            start=end+1;
            end ++;
        }
     }else {
        start++;
        end = start;
     }

    }
    printf("%d\n",number_of_groups);
    for(int i=0;i<number_of_groups;i++)
    printf("%d ",v[i]);
    return 0;
}
