#include<iostream>
using namespace std;
void printBoard();
int checkwin();
void system();
char board[]={'0','1','2','3','4','5','6','7','8','9'};

int main()
{
	int player=1,input,status=-1;
	printBoard();
	
	while(status==-1 )
	{
		player=(player%2==0) ? 2 : 1;
		char mark=(player==1) ? 'x':'o';
	cout<<"please enter no. for player"<<player;
		cin>>input;
	if(input<1 || input>9){
		cout<<"invalid input";
	}
	
	board[input]=mark;
printBoard();

int result = checkwin();
if(result==1){
	cout<<"winner player "<<player;
	return 0;
}
else if(result==0)
{
	cout<<"draw";
	return 0;
}
player++;
}
}
void printBoard(){
	system("cls");
cout<<"\t TICK CROSS GAME"<<endl<<endl;
cout<<"\t  Player1 [x]"<<endl<<endl;
cout<<"\t  Player2 [0]"<<endl<<endl;
cout<<"\t\t     |     |     "<<endl;
cout<<"\t\t"   <<board[1]<<"    |  "<<board[2]<<"  |  "<<board[3]<<"   \n";
cout<<"\t\t_____|_____|_____"<<endl;
cout<<"\t\t     |     |     "<<endl;
cout<<"\t\t"   <<board[4]<<"    |  "<<board[5]<<"  |  "<<board[6]<<"   \n";
cout<<"\t\t_____|_____|_____"<<endl;
cout<<"\t\t     |     |     "<<endl;
cout<<"\t\t"   <<board[7]<<"    |  "<<board[8]<<"  |  "<<board[9]<<"   \n";
cout<<"\t\t     |     |     "<<endl;

}
int checkwin()
{
	if(board[1]==board[2] && board[2]==board[3])
	{
		return 1;
	}
if(board[1]==board[4] && board[4]==board[7])
	{
		return 1;
	}
if(board[7]==board[8] && board[8]==board[9])
	{
		return 1;
	}
if(board[3]==board[6] && board[6]==board[9])
	{
		return 1;
	}
if(board[1]==board[5] && board[5]==board[9])
	{
		return 1;
	}
if(board[3]==board[5] && board[5]==board[7])
	{
		return 1;
	}
if(board[4]==board[5] && board[5]==board[6])
	{
		return 1;
	}
if(board[2]==board[5] && board[5]==board[8])
	{
		return 1;
	}
	int count=0;
	for(int i=1; i<=9; i++)
	{
		if(board[i]=='x'|| board[i]=='o')
		{
			count++;
		}
	}
	if(count==9)
	{
		return 0;
	}
	return -1;
}
