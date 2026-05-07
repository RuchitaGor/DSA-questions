#include <iostream>
using namespace std;
class InsertionSort{
int A[100];
int n;
public:
InsertionSort(int size){
n = size;
cout<<"Enter elements:\n";
for(int i=0; i<n; i++)
cin>>A[i];
}
void Sort(){
for(int k=1; k<=n-1; k++){
int j = k - 1;
int temp = A[k];
while(j >= 0 && A[j] > temp){
A[j+1] = A[j];
j--;
}
A[j+1] = temp;
}
}
void Display(){
cout<<"Sorted Array (Insertion Sort):\n";
for(int i=0; i<n; i++)
cout<<A[i]<<" ";
}
};
int main(){
int n;
cout<<"Enter number of elements: ";
cin>>n;
InsertionSort obj(n);
obj.Sort();
obj.Display();
}
