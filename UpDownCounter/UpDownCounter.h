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
	void setStart(int str);
	void setStop(int end);
	int getStart();
	int getStop();
	void decrement();
	void increment();
	void display();
/*	UpDownCounter& operator++();//prefix increment
	UpDownCounter& operator--();//prefix decrement
	UpDownCounter& operator++(int);//postfix increment
	UpDownCounter& operator--(int);//postfix increment*/
};