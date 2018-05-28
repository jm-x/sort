/*ALDS1_2A*/

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

int bubbleSort(int[],int);
int main()
{
	int n;	
	cin>>n;
	int num[n];
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	cout<<bubbleSort(num,n)<<endl;

	
}

int bubbleSort(int num[],int N){
	int count=0;
	bool flag=true;//逆の隣接要素が存在する
	while(flag){
		flag=false;
		for(int i=N-1;i>=1;i--){
			if(num[i-1]>num[i]){
				swap(num[i-1],num[i]);
				flag=true;
				count++;
			}
		}
	}
	for(int i=0;i<N-1;i++){
		cout<<num[i]<<" ";
	}
	cout<<num[N-1]<<endl;
	return count;
}