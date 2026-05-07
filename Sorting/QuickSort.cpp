#include <iostream>
using namespace std;
class QuickSort{
public:
int A[100], n;
QuickSort(int size){
n = size;
}
int partition(int low, int high){
int pivot = A[low];
int left = low + 1;
int right = high;
int temp;
while(true){
while(A[left] <= pivot && left <= high)
left++;
while(A[right] > pivot)
right--;
if(left < right){
temp = A[left];
A[left] = A[right];
A[right] = temp;
}
else
break;
}
temp = A[low];
A[low] = A[right];
A[right] = temp;
return right;
}
void quicksort(int low, int high){
if(low < high){
int j = partition(low, high);
quicksort(low, j - 1);
quicksort(j + 1, high);
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
QuickSort obj(n);
cout << "Enter elements:\n";
for(int i = 0; i < n; i++)
cin >> obj.A[i];
obj.quicksort(0, n - 1);
cout << "Sorted array:\n";
obj.display();
return 0;
}
