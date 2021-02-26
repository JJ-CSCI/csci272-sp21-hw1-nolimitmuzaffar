using namespace std;
#ifndef Binomial_h
#define Binomial_h

class Binomial{
  float CoefficientA{1.0};
  int PowerA{1};
  float CoefficientB{1.0};
  int PowerB{1};
  public:
  Binomial():Binomial(CoefficientA = 1.0, PowerA = 1, CoefficientB=1.0, PowerB=1){
  }
  Binomial(float thenuma):Binomial(CoefficientA = thenuma,PowerA =1, CoefficientB =1.0,PowerB=1){
  }
  Binomial(float thenuma, int powa):Binomial(CoefficientA=thenuma, PowerA=powa, CoefficientB=1.0, PowerB=1){
  }
  Binomial(float thenuma, int powa, float thenumb):Binomial(CoefficientA= thenuma, PowerA= powa, CoefficientB= thenumb, PowerB=1){
  }

  Binomial(float thenuma, int powa, float thenumb, int powb){
    CoefficientA=thenuma;
    CoefficientB=thenumb;
    PowerA=powa;
    PowerB=powb;
    if (thenuma<1){
      CoefficientA=1.0;
    }
    if (powa <1){
      PowerA=1;
    }
    if (thenumb <1){
      CoefficientB=1.0;
    }
    if (powb<1){
      PowerB=1;
    }
  }
    float Add(Binomial &XYZ);
    int GetPower(int index);
    int SetPower(int index, int updatedpower);
    float GetCoefficient(int index);
    void Multiply(float time);
    void Multiply(float thecoefficient, int ff);
  

};
#endif