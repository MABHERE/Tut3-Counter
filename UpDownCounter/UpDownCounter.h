#pragma once
class UpDownCounter
{
private:
	int start;
	int stop;
	int step;
public:
	UpDownCounter(int str = 0, int end = 255);// constructor
	~UpDownCounter();// deconstructor
	void setStart(int str);
	void setStop(int end);
	int getStart();
	int getStop();
	void decrement(int, int);
	void increment(int, int);
	
/*	UpDownCounter& operator++();//prefix increment
	UpDownCounter& operator--();//prefix decrement
	UpDownCounter& operator++(int);//postfix increment
	UpDownCounter& operator--(int);//postfix increment*/
};