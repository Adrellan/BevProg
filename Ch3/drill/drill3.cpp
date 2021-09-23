#include "std_lib_facilities.h"
#include <iostream>
using namespace std;


int main(){
	string letter="";
	string first_name;
	
	cout << "Enter the name of the person you want to write to:" << endl;
	cin >> first_name;
	
	letter+="\nDear "+first_name+",\n";
	letter+="\tHow are you? I am fine. I miss you.\n";
	letter+="I hope my code will be appropriate for the teacher.\n";
	
	string friend_name;
	cout << "Please enter your friend name:" << endl;
	cin >> friend_name;
	
	letter+="Have you seen "+friend_name+" lately?\n";
	
	char friend_sex = '0';
	cout << "Is your friend male or female? (m/f)" << endl;
	cin >> friend_sex;
	
	if(friend_sex=='m'){
		letter+="If you see "+friend_name+" please ask him to call me.\n";
	}else if(friend_sex=='f'){
		letter+="If you see "+friend_name+" please ask her to call me.\n";
	}else{
		letter+="If you see "+friend_name+" please ask him/her to call me.\n";
	}
	
	int age;
	cout << "Please enter your friend's age:" << endl;
	cin >> age;
	
	while(age >= 110 || age <= 0){
		//simple_error("you're kidding!");
		cout << "Please enter your friend's age:" << endl;
		cin >> age;
	}
	
	letter+="I hear you just had a birthday and you are "+to_string(age)+" years old.\n";
	
	if(age < 12)
		letter+="Next year you will be "+to_string(age+1)+" years old.";
	else if(age == 17)
		letter+="Next year you will be able to vote.";
	else if(age > 70)
		letter+="I hope you are enjoying retirement";
		
	letter+="\nYour sincerely, \n\nFekete Adrián\n";
	cout << letter;
	
	return 0;
}
