#include<iostream>
using namespace std;
class calcus{

	private:
		int i;
		int k;
       public:
		void sum(){

			cout<<"Enter two numbers to sum: ";
			cin>>i>>k;
			cout<<"\nThe sum of Numbers Is: "<<i+k;
		}
};
int main(){
	calcus c;
	c.sum();
	return 0;
}
