#include <iostream>
#include <cstdlib>
#include <ctime>

#define ROCK 1
#define PAPER 2
#define SCISSORS 3

using namespace std;

int main ()
{
	srand((unsigned int) time(NULL));
	
	int player = 0;
	int computer = 0;
	bool draw = false;
	
	do
	{
		cout<<"Select your throw. "<<endl;
		cout<<"1) Rock"<<endl;
		cout<<"2) Paper"<<endl;
		cout<<"3) Scissors"<<endl;
		cout<<"Selection : "<<endl;
		cin>>player;
		
		while(player != 1 && player != 2 && player != 3)
		{
			cout<<"Please enter one of the following options only. "<< endl;
			cout<<"1) Rock"<<endl << "2) Paper"<<endl << "3) scissors" << endl;
			cin>>player;
		}
//		
//		return player;
//		
		
		cout<<endl; 
		
		computer = (rand() % 3) + 1;

		if (computer == PAPER)
		{
			cout<<"COMPUTER throws PAPER." << endl;
		}
		else if (computer == SCISSORS)
		{
			cout<<"COMPUTER throws SCISSORS." << endl;
		}
		
		draw = false;
		if (player == computer)
		{
			draw = true;
			cout<<"Draw! Play again!"<<endl;
		}
		else if (player == ROCK && computer == SCISSORS)
		{
			cout<<"ROCK beats SCISSORS! YOU WIN."<<endl;
		}
		else if (player == ROCK && computer == PAPER)
		{
			cout<<"PAPER beats ROCK! YOU LOSE."<<endl;
		}
		else if (player == PAPER && computer == ROCK)
		{
			cout<<"PAPER beats ROCK! YOU WIN."<<endl;
		}
		else if (player == PAPER && computer == SCISSORS)
		{
			cout<<"SCISSORS beats PAPER! YOU LOSE."<<endl;
		}
		else if (player == SCISSORS && computer == PAPER)
		{
			cout<<"SCISSORS beats PAPER! YOU WIN."<<endl;
		}
		else if (player == SCISSORS && computer == ROCK)
		{
			cout<<"ROCK beats SCISSORS! YOU LOSE."<<endl;
		}

	cout<<endl;

		}while(draw);
		
		return 0;

}