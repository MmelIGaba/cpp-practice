#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Box {
    private:
    int l, b, h;
    
    public:
    int getLength();
    int getBreadth();
    int getHeight();
    long long CalculateVolume();
    
    Box (int length= 0, int breadth = 0, int height = 0){
        l = length;
        b = breadth;
        h = height;
    };
    
    Box (Box &B){
        l = B.l;
        b = B.b;
        h = B.h;
    }
    
    bool operator<(Box &box){
        if(this->l < box.l){
            return true;
        }
        if(this->b < box.b && this->l == box.l){
            return true;
        }
        if(this->h < box.h && this->b == box.b && this -> l == box.l){
            return true;
        }
        else{
            return false;
        }
    }
    
    friend ostream& operator<<(ostream &out, const Box &box);
};

ostream& operator<<(ostream &out, const Box &box){
    out << box.l<< " "<< box.b<< " "<< box.h<< endl;
    return out;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

