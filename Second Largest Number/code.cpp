#include<bits/stdc++.h>
using namespace std;

vector<int> getSecondOrderElements(int n, vector<int> a) {
    vector<int> arr(2);
    int max = a[0];
    int min = a[0];
    int prevMax = a[1];
    int prevMin = a[1];
    int i = 1;

    while(i < n){
        if(a[i] > max){
            prevMax = max;
            max = a[i];
        }
        else if(a[i] > prevMax){ 
            prevMax = a[i];
        }

        if(a[i] < min){
            prevMin = min;
            min = a[i];
        }
        else if(a[i] < prevMin){  
            prevMin = a[i];
        }
        i++;
    }
    arr[0] = prevMax;
    arr[1] = prevMin;
    return arr;

}
