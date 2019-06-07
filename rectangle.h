
#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
public:
	Rectangle(); // The constructor prototype
	~Rectangle(); // The destructor prototype

	void setArea(float area); // Setter
	float returnArea(); // Getter

protected: 
	float m_area; // Member variable
};

#endif RECTANGLE_H // !1

