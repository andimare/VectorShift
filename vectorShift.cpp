#include <iostream>
#include <deque>
#include <vector>
using namespace std;


//Here we get the function that will shift the elements
//We get to pass the vector into the function and number 
//columns to shift
vector <int> shiftElements(vector <int> &A, int K){
	
	//We introduce a deque for the ability to push infront
	deque <int> deque1;
	vector <int> dummy;
	int len = A.size();
	int clen = A.size();
	
	//shift the elements by first pushing them into the deque
	//then pop them out of the vector
	while(K > 0){
		deque1.push_front(A[--len]);
		A.pop_back();
		--K;
	}
	
	//We now complete the deque with the left elements in 
	//the vector
	for(int i = 0;i < len;i++){
		deque1.push_back(A[i]);
	}
	
	for(int i =0;i < clen;i++){
		dummy.push_back(deque1[i]);
		//cout<<deque1[i]<<endl;
	}
	
	return dummy;
}

int main(){
	vector <int> var;
	int num = 39;
	//cout<<"Print the vector"<<endl;
	for(int i = 0; i < num;i++){
		var.push_back(i);
	}
	
	vector <int> vector2;
	//cout<<var.size()<<endl;
	vector2 = shiftElements(var, 5);
	
	
	cout<<"Printing out the re-arranged queue"<<endl<<endl;
	for(int i = 0; i < num;i++){
		cout<<vector2[i]<<endl;
	}
	
	return 0;
}
