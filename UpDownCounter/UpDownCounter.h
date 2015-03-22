#pragma once
class UpDownCounter
{
private:
	int start;
	int stop;
	int step;
public:
	UpDownCounter(int str, int end, int stp);// constructor
	~UpDownCounter();// deconstructor
	void setStart();
	void setStop();
	int getStart();
	int getStop();
	int decrement();
	int increment();
	UpDownCounter& operator++();//prefix increment
	UpDownCounter& operator--();//prefix decrement
	UpDownCounter& operator++(int);//postfix increment
	UpDownCounter& operator--(int);//postfix increment
};