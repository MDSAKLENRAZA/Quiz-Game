#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	string questions[10] = {
	"What is Our Country Name?",
	"The national Animal of India is ?",
	"The national Bird of India is?",
	"The national game of India is ?",
	"The national Flower of India is?",
	"The national Anthem of India is?",
	"The national River of India is ?",
	"The national Currency of India is?",
	"The national aquatic animal of india?",
	"How Many State & Union Territories?"
						};
	string options[10][4] = {
	{"China","Pakistan","India","America"},
	{"Elephant","Lion","Cow","Tiger"},
	{"Parrot","Peigon","Peacock","Nightingale"},
	{"Cricket","Football","Basket Ball","Hocky"},
	{"Rose","Lotus","Lily","Marigold"},
	{"The Star-Spangled Banner","Jana Gana Mana","Amar Sonar Bangla","None of them"},
	{"Yamuna","Ganga","Brahmaputra","Narmada River"},
	{"Dollar","Renminbi","Taka","Rupee"},
	{"Crocodiles","Shark","Dolphin","Octopus"},
	{"30 State & 7 Union Territories","29 State & 8 Union Territories","28 State & 8 Union Territories","29 State & 9 Union Territories"},
					    };
	string correctOptions[10] = {
		"India","Tiger","Peacock","Hocky",
		"Lotus","Jana Gana Mana","Ganga",
		"Rupee","Dolphin","28 State & 8 Union Territories"
								};
	int userOptions[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int totalQs = 10;	
	int op;

	//----- Conducting Quiz -----
	for( int i=0; i<totalQs; i++ ){
		cout<<"Question # "<<(i+1)<<endl;
		cout<< questions[i]<<endl;
		cout<< "1."<<options[i][0]<<endl;
		cout<< "2."<<options[i][1]<<endl;
		cout<< "3."<<options[i][2]<<endl;
		cout<< "4."<<options[i][3]<<endl<<endl;
		
		cout<<"Select Option (1-4) or 0 to skip and press enter: ";
		cin >> userOptions[i];
		cout<<endl<<"-----------------------------"<<endl<<endl;
	}
	
	//----- Printing Correct Options -----
	cout<<"======= ======= ======= ======= "<<endl;
	cout<<"======= Correct Options ======= "<<endl;
	cout<<"======= ======= ======= ======= "<<endl;

	for( int i=0; i<totalQs; i++ ){
		cout<<"Question # "<<(i+1)<<endl;
		cout<< questions[i]<<endl;
		cout<< "1."<<options[i][0]<<endl;
		cout<< "2."<<options[i][1]<<endl;
		cout<< "3."<<options[i][2]<<endl;
		cout<< "4."<<options[i][3]<<endl;
		
		if( userOptions[i] == 0 ){
			cout<< "You Skipped this Question."<<endl;		
		}else{
			cout<< "You Selected : "<<options[i][userOptions[i]-1]<<endl;		
		}
		cout<< "Correct Option : "<<correctOptions[i]<<endl<<endl;

		cout<<"Press any key to continue..."<<endl;
		getch();
		cout<<endl<<"------------------"<<endl;
	}
	
	//----- Printing Result -----
	cout<<endl<<endl;
	cout<<"======= ======= ======= ======= "<<endl;
	cout<<"=======      Result     ======= "<<endl;
	cout<<"======= ======= ======= ======= "<<endl;

	int correct = 0;
	int incorrect = 0;
	int skipped = 0;
	for( int i=0; i<totalQs; i++ ){
		if( userOptions[i] != 0 ){
			if( correctOptions[i] == options[i][userOptions[i]-1] ){
				correct++;
			}else{
				incorrect++;
			}
		}else{
			skipped++;
		}
	}
	cout<< "Total Questions : "<< totalQs <<endl;	
	cout<< "Correct : "<< correct <<endl;
	cout<< "In-Correct : "<< incorrect <<endl;
	cout<< "Skipped : "<< skipped <<endl;
	
	getch();
	return 0;
}