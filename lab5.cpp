// lab5.cpp : Defines the entry point for the console application.
// Kirk Anderson
//lab 5
//i got help from will KirkPatrick

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <list>

using namespace std;

string stringReversal1(string input)
{
	stack<char> newStack;
	string temp;

	for (int i=0; i < input.length(); i++)
	{
		newStack.push(input.at(i));
	}
	while (!newStack.empty())
	{
		temp.push_back(newStack.top());
		newStack.pop();

	}
	return temp;
}

string stringReversal2(string input)
{
	vector<char> newVector;
	string temp;

	for (int i=0; i < input.length(); i++)
	{
		newVector.push_back(input.at(i));
	}
	while (!newVector.empty())
	{
		temp.push_back(newVector.back());
		newVector.pop_back();

	}
	return temp;

}

string stringReversal3(string input)
{
	list<char> newList;
	string temp;

	for (int i = 0; i < input.length(); i++)
	{
		newList.push_back(input.at(i));
	}
	while (!newList.empty)
	{
		temp.push_back(newList.back());
		newList.pop_back();

	}
	return temp;

}

class MyStack
{
public:
	vector<char> vec1;
	bool isEmpty() const;
	void push(char& c);
	char pull();
};

int main()
{
	
    return 0;
}

bool MyStack::isEmpty() const
{
	if (vec1.size()==0)
	{
		return true;
	}
	return false;
}

void MyStack::push(char & c)
{
	void.push_back(char & val1);
}

char MyStack::pull()
{
	return 0;
}
