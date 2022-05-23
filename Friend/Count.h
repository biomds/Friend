#ifndef COUNT_H
#define COUNT_H
class Count
{
	friend void setX(Count&, int);
public:
	Count();
	void print()const;
private:
	int x;

};
#endif // !COUNT_H

