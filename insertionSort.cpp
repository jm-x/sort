/*ALDS1_1A*/

#include <iostream>
#define abs(a) (a<0?-(a):a)
#define square(x) ((x)*(x))
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define swap(a,b) ((a!=b)?(a+=b,b=a-b,a-=b):0)
#define This
#define True true
#define False false
#define null Null


using namespace std;

void insertionSort(int[],int);
int main()
{
	int n;	
	cin>>n;
	int num[n];
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	insertionSort(num,n);

	
}

void insertionSort(int num[],int N){
    for(int i=0;i<N-1;i++){
		cout<<num[i]<<" ";
	}
	cout<<num[N-1]<<endl;

	for(int i=1;i<N;i++){
        int v=num[i];
        int j=i-1;
        while(j>=0&&num[j]>v){
            num[j+1]=num[j];
            j--;
        }
        num[j+1]=v;

        for(int i=0;i<N-1;i++){
		    cout<<num[i]<<" ";
	    }
	    cout<<num[N-1]<<endl;
    }
	
}