//    #define _CRT_SECURE_NO_WARNINGS
//    #include<bits/stdc++.h>
//    using namespace std;
//    typedef	long long ll;
//    int main()
//    {
//    	int idx = 3;
//    	char x[] = "out00000000000000000000000000000000.txt";
//    	for (int ii = 0; ii < 10; ii++){
//    		if (x[idx] == '9')
//    			idx++;
//    		freopen(x, "w", stdout);
//    		x[idx]++;
//            int n;
//            n = rand()%500000;
//            cout<<n<<endl;
//            for(int i=0;i<n;i++){
//                int a,b;
//                a = rand()%1000;
//                b = rand()%1000;
//            cout<<a<<" "<<b<<endl;
//            }
//
//    	}
//    }
    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int x[100][100],n,a,z=1;
        cin>>n;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>x[i][j];
            }
        }
        for(int i=0;i<n;i++){
            a=i;
            for(int j=0;j<=i;j++){
                if(a!=0){
                    cout<<x[a][j]<<" ";
                    a--;
                }else{cout<<x[a][j]<<" ";}
            }
        }
        for(int i=n-1;i<n;i++){
            a=i;
            if(i==(n-1)){
                for(int j=z;j<n;j++){
                    if(a!=0){
                        cout<<x[a][j]<<" ";
                        a--;
                    }else{cout<<x[a][j]<<" ";}
                }
                z++;
                i--;
            }
            if(z==n){
                break;
            }
        }
        return 0;
    }
