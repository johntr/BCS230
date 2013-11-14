//
//  main.cpp
//  inheridence
//
//  Created by John Redlich on 11/14/13.
//  Copyright (c) 2013 John Redlich. All rights reserved.
//

#include <iostream>
using namespace std;

//Parent class
class Rectangle
{
protected:
    int length;
    int width;
public:
    Rectangle(int,int);
    void display();
    
};
//Child class
class Square :public Rectangle
{
public:
    Square(int s): Rectangle(s,s) {};       //Base contructor that initalizes sides to the same value to make a square
    void display();
};
//Constructor for initalizing Rectangle
Rectangle::Rectangle(int l, int w){
    length = l;
    width = w;
    
}
//Display rectangle values
void Rectangle::display(){
    cout << "The length is " << length << " And the Width is " << width << endl;
}

void Square::display(){
    cout << "The sides of your square are all " << length << endl;
}
int main()
{

    Rectangle R(4,5);
    R.display();
    Square S(4);
    S.display();
    
    return 0;
}

