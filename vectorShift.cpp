#include <iostream>
#include <deque>
#include <vector>
using namespace std;


//Here we get the function that will shift the elements
//We get to pass the vector into the function and number 
//columns to shift
vector <int> shiftElements(vector <int> var, int row){
	
	//We introduce a deque for the ability to push infront
	deque <int> deque1;
	vector <int> dummy;
	int len = 6;
	
	//shift the elements by first pushing them into the deque
	//then pop them out of the vector
	for(int j = row;row > 0;--row){
		deque1.push_front(var[len]);
		var.pop_back();
		len--;
	}
	
	//We now complete the deque with the left elements in 
	//the vector
	for(int i = 0;i < 4;i++){
		deque1.push_back(var[i]);
	}
	
	for(int i =0;i < 7;i++){
		dummy.push_back(deque1[i]);
		//cout<<deque1[i]<<endl;
	}
	
	return dummy;
}

int main(){
	vector <int> var;
	
	//cout<<"Print the vector"<<endl;
	for(int i = 0; i < 7;i++){
		var.push_back(i);
	}
	
	vector <int> vector2;
	vector2 = shiftElements(var, 3);
	
	
	cout<<"Printing out the re-arranged queue"<<endl<<endl;
	for(int i = 0; i < 7;i++){
		cout<<vector2[i]<<endl;
	}
	
	return 0;
}
