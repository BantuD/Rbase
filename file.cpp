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


		  void sub(){

                        cout<<"Enter two numbers to sub: ";
                        cin>>i>>k;
                        cout<<"\nThe sub of Numbers Is: "<<i-k;
                      }

		   void mul(){

                        cout<<"Enter two numbers to mul: ";
                        cin>>i>>k;
                        cout<<"\nThe mul of Numbers Is: "<<i*k;
                       }

                      void div(){

                        cout<<"Enter two numbers to div: ";
                        cin>>i>>k;
                         cout<<"\nThe div of Numbers Is: "<<i/k;
                       }
                          

                           
                        void mix(){

                        cout<<"Enter two numbers to mix: ";
                        cin>>i>>k;
                         cout<<"\nThe mix of Numbers Is: "<<i/k+i-k*i;
                       }



};
int main(){
	calcus c;
	c.sum();
	c.sub();
	c.mul();
	c.dic();
	c.mix();
	return 0;
}



