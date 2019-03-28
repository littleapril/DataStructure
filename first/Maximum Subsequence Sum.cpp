#include <iostream>
using namespace std;

int main(){
  int i,j;
  int start,end,temp;
  int thismax,thissum;
  int a[100086];
	int n;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	thissum = 0;
	thismax = -1;
	for (i=0; i<n; i++){
	  thissum += a[i];
	  if (thismax<thissum){
	    thismax = thissum;
	    start = temp;
	    end = i;
	  }
	  else{
	    if (thissum<0){
	      thissum = 0;
	      temp = i+1;
	    }
	  }
	}
	if (thismax>=0){
	  cout << thismax << " " << a[start] << " " << a[end] << endl;
	}
	else{
	  cout << 0 << " " << a[0] << " " << a[n-1] << endl;
	}
	return 0;
}
