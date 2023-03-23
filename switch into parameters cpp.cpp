#include<iostream>
using namespace std;
void add(int a, int b);
void subtract(int a,int b);
void Multiply(int a,int b);
int main()
{
	int choice;
	label:
		cout<<"welcome to the peogram"<<endl;
		cout<<"plz enter your choice 2 for add. 4 for sub and 6 for multiply "<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
			{
			int valueone,valuetwo;
			cout<<"plz enter value one";
			cin>>valueone;
			cout<<"plz enter value two";
			cin>>valuetwo;
			add(valueone,valuetwo);
			break;
		}
		case 2:
		{
			int valueone,valuetwo;
			cout<<"plz enter value one";
			cin>>valueone;
			cout<<"plz enter value two";
			cin>>valuetwo;
			subtract(valueone,valuetwo);
			break;
		}
		case 3:
{

	int valueone,valuetwo;
			cout<<"plz enter value one";
			cin>>valueone;
			cout<<"plz enter value two";
			cin>>valuetwo;
			Multiply(valueone,valuetwo);
			break;
		}
		default:
			{
				cout<<"invalid choice"<<endl;
				goto label;
			
			}
	}
}
void add(int a,int b)
{
	cout<<"the sum is:"<<(a+b)<<endl;
}
void subtract(int a,int b)
{
	cout<<"the difference is:"<<(a-b)<<endl;
}
void multiply(int a,int b)
{
	cout<<"the product is:"<<(a*b)<<endl;
}