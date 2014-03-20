#include <iostream>
using namespace std;


class queue
{
private:
	char* s;
	int F, R, size;
public:
	queue(int i=4)
	{
		s= new char[i];
		size=i;
		F=R=-1;
	}

	~queue()
	{
		delete []s;
	}

	bool empty()
	{
		return F==R;
	}

/*	bool full()//this is for a non circular queue
	{
		if (F==-1 && R==size-1)
			return true;
		for (int i=0; i<=F; i++)
			s[i]=s[F+i+1];
		R=R-F-1;
		F=-1;
		return false;
	}*/

	bool full()
	{
		if ((R+1)%5==F)
			return true;
		return false;
	}


/*	void add (char c)//non circular add
	{
		if (full())
		{
			cout << "queue is full";
			exit(1);
		}
		R++;
		s[R]=c;
	}*/

	void add (char c)
	{
		if (full())
		{
			cout << "queue is full";
			exit(1);
		}
		R=(R+1)%size;
		s[R]=c;
	}

/*	char del()// non circular
	{
		if (empty())
		{
			cout << "queue empty";
			exit(1);
		}
		F++;
		return s[F];
	}*/

	char del()
	{
		if (empty())
		{
			cout << "queue empty";
			exit(1);
		}
		F=(F+1)%size;//only difference
		return s[F];
	}


};

int main()
{
	queue q;
	q.add('a');
	q.add('b');
	q.add('c');
	cout << q.del();
    cout << q.del(); 
    cout << q.del();
    system("PAUSE");
	return 0;
}

//comments
/* 
I change the cout command into three lines. 
when the three cout command is in 1 line. The compiler is treating it as a stack so it will execute the first q.del() first then put it into a stack
so for the tree q.del() the stack will look like a,b,c so when it pop it shows c,b,a

*/
