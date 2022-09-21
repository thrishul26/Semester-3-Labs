#include <bits/stdc++.h>
using namespace std;
int recursiveBS(int *a, int start, int end, int key)
{
if (start > end)
return -1;
int mid = (start + end) / 2;
if (
    return mid;
}
if (a[mid] > key)
return recursiveBS(a, start, mid - 1, key);
if (a[mid] < key)
return recursiveBS(a, mid + 1, end, key);
}
int iterativeBS(int *a, int n, int key)
{
int start = 0, end = n - 1;
while (start <= end)
{
int mid = (start + end) / 2;
if (a[mid] == key)
return mid;
else if (a[mid] < key)
start = mid + 1;
else
end = mid - 1;
}
return -1;
}
int main()
{
int n;
cin >> n;
int a[n];
for (int i = 0; i < n; i++)
cin >> a[i];
int key;
cin >> key;
int result1 = recursiveBS(a, 0, n - 1, key);
int result2 = iterativeBS(a, n, key);
cout << "Recursive: " ;
if (result1 == -1)
cout << "Not found" << endl;
else
cout << "found at index " << result1 + 1 << endl;
<< endl;
cout << "Iterative: " ;
if (result2 == -1)
cout << "Not found";
else
cout << "found at index " << result2 + 1 << endl;
return 0;
}
