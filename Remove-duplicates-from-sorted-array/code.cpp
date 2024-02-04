#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &arr, int n) {
	
	int arrLength=0;

	 for (int i = 0; i < n; i++){
		 if(arr[i]!=arr[i+1]){
			 arrLength++;
		 }
	 }
	 return arrLength;
}