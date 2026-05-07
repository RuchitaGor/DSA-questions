#include <iostream>
using namespace std;
class BinarySearch{
int a[100];
int n;
public:
BinarySearch(int size){
n = size;
cout<<"Enter elements (sorted):\n";
for(int i=0; i<n; i++)
cin>>a[i];
}
int Search(int low, int high, int key){
while(low <= high){
int mid = (low + high) / 2;
if(a[mid] == key)
return mid;
else if(a[mid] > key)
high = mid - 1;
else
low = mid + 1;
}
return -1;
}
};
int main(){
int n, key;
cout<<"Enter size: ";
cin>>n;
BinarySearch bs(n);
cout<<"Enter key: ";
cin>>key;
int pos = bs.Search(0, n-1, key);
if(pos != -1)
cout<<"Found at position "<<pos+1;
else
cout<<"Not Found";
}
