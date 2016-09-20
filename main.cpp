#include "b.hpp"

#include <memory>

int main() {

  std::unique_ptr< one > o;

  {
    std::unique_ptr< two > t( new two );
    o = std::move( t );
  }


}

