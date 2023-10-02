#include <iostream>
using namespace std;
int func(long long int n)
{
	int add= 0;
	for(int i =1;i<=n; i++)
	add+=n%i;
	return add;
}
 
int main() {
	string s;
	cin>>s;
	cout<<s.size();
	return 0;
}