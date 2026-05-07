#include <iostream>
using namespace std;
class SelectionSort{
int A[100];
int n;
public:
SelectionSort(int size){
n = size;
cout<<"Enter elements:\n";
for(int i=0; i<n; i++)
cin>>A[i];
}
void Sort(){
for(int i=0; i<=n-2; i++){
int min = i;
for(int j=i+1; j<=n-1; j++){
if(A[j] < A[min]){
min = j;
}
}
if(min != i){
int temp = A[i];
A[i] = A[min];
A[min] = temp;
}
}
}
void Display(){
cout<<"Sorted Array (Selection Sort):\n";
for(int i=0; i<n; i++)
cout<<A[i]<<" ";
}
};
int main(){
int n;
cout<<"Enter number of elements: ";
cin>>n;
SelectionSort obj(n);
obj.Sort();
obj.Display();
}
