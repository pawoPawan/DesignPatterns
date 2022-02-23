#ifndef _SHAPE_H_
#define _SHAPE_H_

class Shape
{
public:
	Shape();
	virtual ~Shape();// virtual keyword to resolve memory leaks
	virtual void Draw();
private:
protected:
};

#endif
