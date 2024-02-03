#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

#define V 1 //verbose prints intermediate values for start and end

vector<int> numbers{0, 0, 3, 3, 3, 3, 8, 8, 8, 8, 11};

void binarySearchLeft(int check){
	int start = 0;
	int end = numbers.size()-1;
	int mid;
	while(start<=end){
		mid = (start+end)/2;
		if (V==1){
			cout << "check: " << check;
			cout << " start: " << start;
			cout << " end: " << end;
			cout << " mid: " << mid;
			cout << " num: " << numbers[mid];
			cout << endl;
		}
		if(numbers[mid]<check){
			start = mid+1;
		}
		else{
			end = mid-1;
		}
	}
	mid = start;
	cout << mid << " " << numbers[mid] << endl;
}

void binarySearchRight(int check){
	int start = 0;
	int end = numbers.size()-1;
	int mid;
	while(start<=end){
		mid = (start+end)/2;
		if (V==1){
			cout << "check: " << check;
			cout << " start: " << start;
			cout << " end: " << end;
			cout << " mid: " << mid;
			cout << " num: " << numbers[mid];
			cout << endl;
		}
		if(numbers[mid]>check){
			end = mid-1;
		}
		else{
			start = mid+1;
		}
	}
	mid = end;
	cout << mid << " " << numbers[mid] << endl;
}


void binarySearchLower(int check){
}


void binarySearchUpper(int check){
}

int main(){
	binarySearchLeft(3);
	binarySearchRight(3);
	binarySearchLeft(4);
	binarySearchRight(4);
	
	
	binarySearchLower(4);
	binarySearchUpper(4);
	
	cout << endl;
	
	vector<int>::iterator it;
	
	it = lower_bound(numbers.begin(), numbers.end(), 3);
	cout << "2 with lower bound " << (it-numbers.begin()) << endl;
	it = upper_bound(numbers.begin(), numbers.end(), 3);
	cout << "2 with upper bound " << (it-numbers.begin()) << endl;
	it = lower_bound(numbers.begin(), numbers.end(), 4);
	cout << "4 with lower bound " << (it-numbers.begin()) << endl;
	it = upper_bound(numbers.begin(), numbers.end(), 4);
	cout << "4 with upper bound " << (it-numbers.begin()) << endl;
	return 0;
}
