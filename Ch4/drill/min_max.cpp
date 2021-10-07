#include <iostream>
#include <cmath>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main(){

	/* Feladatok 1-5
	double a = 0, b = 0;
	cout << "Please enter two integer values (a,b): ";
	cin >> a >> b;
	double min = a, max = a;

	if(a<b){
		min = a;
		max = b;
	}else if(a==b){
		cout << "The numbers are equal" << endl;
	}else{
		min = b;
	}

	cout << "The smaller value is: " << min << endl;
	cout << "The larger value is: " << max << endl;

	if(fmod(max,min)<=(1.0/100) && fmod(max,min)!=0)
		cout << "The numbers are almost equal" << endl;
	*/

		
	// Feladatok 6-11
	cout << "Please enter a number in units of length" << endl;

	string unit="";
	double a, sum=0, min = INT_MAX, max = 0;
	vector<double> numbers;

	map<string, double> converter = {
		{"cm",1.0/100},
		{"m",1},
		{"in",2.54/100},
		{"ft",2.54*12/100}
	};


	while(cin >> a >> unit){

		double converted = converter[unit]*a;
		numbers.push_back(converted);

		sum += converted;
		cout << "The value entered: " << a << endl;
		if(a < min){
			cout << "the smallest so far " << endl;
			min = a;
		}
		if(a > max){
			cout << "the largest so far" << endl;
			max = a;
		}
	}

	cout << "Min of numbers: " << min << endl
		 << "Max of numbers: " << max << endl
		 << "Sum of the numbers (m): " << sum << endl << endl;

	cout << "Numbers: " << endl;
	sort(numbers.begin(),numbers.end());
	for(auto num : numbers){
		cout << num << " ";
	}

	return 0;
}