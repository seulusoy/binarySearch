#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

#define V 1 //verbose prints intermediate values for start and end

vector<int> numbers{0, 0, 2, 2, 2, 2, 6, 6, 6, 6, 9};

void binarySearch2Left(){

}

void binarySearch2Right(){
}

void binarySearch4Lower(){
}

void binarySearch4Upper(){
}

int main(){
	binarySearch2Left();
	binarySearch2Right();
	binarySearch4Lower();
	binarySearch4Upper();
	
	cout << endl;
	
	vector<int>::iterator it;
	
	it = lower_bound(numbers.begin(), numbers.end(), 2);
	cout << "2 with lower bound " << (it-numbers.begin()) << endl;
	it = upper_bound(numbers.begin(), numbers.end(), 2);
	cout << "2 with upper bound " << (it-numbers.begin()) << endl;
	it = lower_bound(numbers.begin(), numbers.end(), 4);
	cout << "4 with lower bound " << (it-numbers.begin()) << endl;
	it = upper_bound(numbers.begin(), numbers.end(), 4);
	cout << "4 with upper bound " << (it-numbers.begin()) << endl;
	return 0;
}
