#ifndef _LINE_H_
#define _LINE_H_

#include "Shape.h"
#include "Point.h"

class Line : public Shape
{
public:
	Line();
	~Line();
	void Draw();
	
	// Setters or Mutators
	void setFrom(Point iFrom);
	void setTo(Point iTo);

	// Getters or Accessors
	Point getFrom();
	Point getTo();

private:
	void Initialize();

	Point m_From;
	Point m_To;
protected:
};

#endif
