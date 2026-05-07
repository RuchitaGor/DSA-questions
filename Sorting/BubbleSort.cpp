#include <iostream>
using namespace std;
class BubbleSort{
int A[100];
int n;
public:
BubbleSort(int size){
n = size;
cout<<"Enter elements:\n";
for(int i=0; i<n; i++)
cin>>A[i];
}
void Sort(){
int last = n - 1;
for(int i=0; i<=n-2; i++){
int exch = 0;
for(int j=0; j<=last-1; j++){
if(A[j] > A[j+1]){
int temp = A[j];
A[j] = A[j+1];
A[j+1] = temp;
exch = 1;
}
}
if(exch == 0)
return;
else
last = last - 1;
}
}
void Display(){
cout<<"Sorted array:\n";
for(int i=0; i<n; i++)
cout<<A[i]<<" ";
}
};
int main(){
int n;
cout<<"Enter size: ";
cin>>n;
BubbleSort bs(n);
bs.Sort();
bs.Display();
}
