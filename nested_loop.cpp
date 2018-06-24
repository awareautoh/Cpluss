#include<iostream>
using namespace std;




int main(){
	
	//neested loop to create triangle of 5

	for(int i = 0; i<5; i++){
		for(int x=0; x<5; x++){
			cout<<" ";
		}
		for(int j =5-i; j>0; j--){
			cout<<" ";
		}
		for(int k=0; k<2*i+1; k++){
			cout<< "*";
		}

		cout<<endl;







	}









	return 0;
}
