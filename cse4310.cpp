#include <iostream>

#include<bits/stdc++.h>

using namespace std;

void helpersort (vector < int >&vec){
    for (int i = 0; i < vec.size (); i++)
    {
    for (int j = i; j < (vec.size ()); j++){
            if (vec[i] > vec[j]){
                int t = vec[i];
                vec[i] = vec[j];
                vec[j] = t;
                }
            }
        }
}

int solve (vector < int >a, vector < int >e){
    int ans = INT_MIN;
        for (int i = 0; i < a.size (); i++){
            int k = a[i] / e[i];
            if (ans < k)
            ans = k;
    }
return ans;
}

int main(){
        vector < int >assign1{5, 2, 4};
        vector < int >emp1{1, 7, 5};
        vector < int >assign2{3, 18, 15, 9};
        vector < int >emp2{6, 5, 1, 3};

        helpersort (assign1);
        helpersort (emp1);
        helpersort (assign2);
        helpersort (emp2);

int ans1 = solve (assign1, emp1);
cout << ans1 << endl;

int ans2 = solve (assign2, emp2);
cout << ans2 << endl;

return 0;
}
