#include<iostream>

using namespace std;

class Student
{
	private:
		int marks[5];
		int total;
		char grade;
	public:
		void getdata();
		char findgrade(float);
		void display();		
};

void Student::getdata()
{
	total=0;
	cout<<"\n Enter marks out of 100 : "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"\n Subject "<<i+1<<" : ";
		cin>>marks[i];
		total+=marks[i];
	}
	grade=findgrade(total/5);
}

char Student::findgrade(float sum)
{
	if(sum>90)
		return 'A';
	else if(sum>80)
		return 'B';
	else if(sum>70)
		return 'C';
	else if(sum>60)
		return 'D';
	else if(sum>50)
		return 'E';
	else
		return 'F';
	
}

void Student::display()
{
	cout<<"\n Total Marks : "<<total;
	cout<<"\n Grade : "<<grade;
}

int main()
{
	Student child[60];
	int i;
	for(i=0;i<60;i++)
	{
		cout<<"\n Student "<<i+1<<" : "<<endl;
		child[i].getdata();
	}
	cout<<"\n Details are : "<<endl;
	for(i=0;i<60;i++)
	{
		cout<<"\n Student "<<i+1<<" : "<<endl;
		child[i].display();
	}
	return 0;
}
