#include "binomial.h"
using namespace std;

int Binomial::GetPower(int index){
  if (index==1){
    return PowerA;
  }
  if (index==2){
    return PowerB;
  }
  else {
    return -1;
  }


}
float Binomial::GetCoefficient(int index){
  if(index==1){
    return CoefficientA;
  }
  if (index==2){
    return CoefficientB;
  }
  else {
    return -1;
  }

}
int Binomial::SetPower(int index, int updatedpower){
  if (index==1){
    if (updatedpower <0){
      PowerA=1;
      return 0;
    }
    else{
      PowerA=updatedpower;
      return 0;
    }
  }
  if (index==2){
    if (updatedpower <0){
      PowerB=1;
      return 0;
    }
    else{
      PowerB=updatedpower;
      return 0;
    }
  }
  else{
    return -1;
  }
}

float Binomial::Add(Binomial &XYZ){
  if (PowerA==XYZ.PowerA && PowerB==XYZ.PowerB){
    CoefficientA += XYZ.CoefficientA;
    CoefficientB += XYZ.CoefficientB;
    return 0;
  }
  else{
    return -1;
  }

}
void Binomial::Multiply(float time){
  CoefficientA *= time;
  CoefficientB *= time;
}
void Binomial::Multiply(float thecoefficient, int ff){
  CoefficientA *= thecoefficient;
  CoefficientB *=thecoefficient;
  PowerA = PowerA + ff;
  PowerB = PowerB + ff;
}
