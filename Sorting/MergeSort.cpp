#include <iostream>
using namespace std;
class MergeSort{
public:
int A[100], C[100], n;
MergeSort(int size){
n = size;
}
void merge(int low, int mid, int high){
int i = low;
int j = mid + 1;
int k = low;
while(i <= mid && j <= high){
if(A[i] <= A[j])
C[k++] = A[i++];
else
C[k++] = A[j++];
}
while(i <= mid)
C[k++] = A[i++];
while(j <= high)
C[k++] = A[j++];
for(int x = low; x <= high; x++)
A[x] = C[x];
}
void mergesort(int low, int high){
if(low < high){
int mid = (low + high) / 2;
mergesort(low, mid);
mergesort(mid + 1, high);
merge(low, mid, high);
}
}
void display(){
for(int i = 0; i < n; i++)
cout << A[i] << " ";
}
};
int main(){
int n;
cout << "Enter number of elements: ";
cin >> n;
MergeSort obj(n);
cout << "Enter elements:\n";
for(int i = 0; i < n; i++)
cin >> obj.A[i];
obj.mergesort(0, n-1);
cout << "Sorted array:\n";
obj.display();
return 0;
}
