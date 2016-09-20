#ifndef CXX_B_HPP_
#define CXX_B_HPP_

class one {
  public:
    one();
    virtual ~one();

    virtual void blah() const = 0;
  private:
    float* f;
};

class two : public one {
  public:
    two();
    ~two();

    void blah() const;
  private:
    int* i;
};

#endif // CXX_B_HPP_

