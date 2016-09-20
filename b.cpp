#include "b.hpp"

one::one()
: f( new float )
{

}

one::~one() {
  delete f;
}

void two::blah() const {

}

two::two()
: one(),
  i( new int )
{

}

two::~two() {
  delete i;
}
