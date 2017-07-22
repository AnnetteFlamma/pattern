//============================================================================
// Name        : Opt.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <assert.h>

using namespace std;

enum MethodN { GoldsechN=0, GenN, SumpN };

// Hierarchy
class Method_opt
{
  public:
    virtual int info() = 0;
    virtual ~Method_opt() {}
    // Parametrized static factory method
    static Method_opt* User_Method( MethodN id );
};

class Goldsech: public Method_opt
{
  public:
    int info() {
    	return 1;
    }
};

class Gen: public Method_opt
{
  public:
    int info() {
      return 2;
    }
};

class Sump: public Method_opt
{
  public:
    int info() {
    	return 3;
    }
};


// Implementation of a parametrized factory method
Method_opt* Method_opt::User_Method( MethodN id ){
   Method_opt* p;
    switch (id)
    {
        case GoldsechN:
            p = new Goldsech();
            break;
        case GenN:
            p = new Gen();
            break;
        case SumpN:
            p = new Sump();
            break;
        default:
            assert( false);
    }
    return p;
};


int main() {

	//test

}
