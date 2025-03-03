#include<iostream>

using namespace std;

//Write function count() here.
int count(int data[], int size){
	bool check[100] = {false};
	int sum = 0;
	for(int i = 0; i < size; i++){
		if(!check[data[i]]){
			check[data[i]] = true;
			sum++;
		}
		else{
			continue;
		}
	}
	return sum;
}


int main(){	
	int data[] = {1,2,4,5,4,8,2,1,2,4,6,1,4,4,4,2,1,0,12}; 
	
	cout << "There are " << count(data,sizeof(data)/sizeof(int)); 
	cout << " different numbers in data.";
	
	return 0;
}
