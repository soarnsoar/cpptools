#include <TString.h>
#include <string>       // std::string
#include <iostream>     // std::cout
#include <sstream>      // std::istringstream
#include "../include/type_changer.h"
using namespace std;

string double_to_string(double value_d){
  string value_s;
  std::ostringstream strstr;
  strstr<<value_d;
  value_s=strstr.str();
  return value_s;
}


TString double_to_TString(double value_d){
  string value_s;
  std::ostringstream strstr;
  strstr<<value_d;
  value_s=strstr.str();
  
  TString value_Ts = value_s;
  return value_Ts;
}

TString float_to_TString(float value_f){
  string value_s;
  std::ostringstream strstr;
  strstr<<value_f;
  value_s=strstr.str();

  TString value_Ts = value_s;
  return value_Ts;
}

string float_to_string(float value_f){
  string value_s;
  std::ostringstream strstr;
  strstr<<value_f;
  value_s=strstr.str();
  return value_s;
}


string int_to_string(double value_i){
  string value_s;
  std::ostringstream strstr;
  strstr<<value_i;
  value_s=strstr.str();
  return value_s;
}

double string_to_double(string value_s){
  double value_d;
  std::istringstream ii(value_s);
  ii>>value_d;
  return value_d;

}


Double_t string_to_double(TString value_s){
  Double_t value_d;
  //  std::istringstream ii(value_s);
  // ii>>value_d;
  value_d = value_s.Atof();  
return value_d;

}

float TString_to_float(TString value_s){
  float value_f;
  //  std::istringstream ii(value_s);                                                                                                          
  // ii>>value_d;                                                                                                                              
  value_f = value_s.Atof();
  return value_f;

}


int string_to_int(TString value_s){
  int value_i;
  value_i=value_s.Atoi();
  //std::istringstream ii(value_s);
  //ii>>value_i;
  return value_i;

}

int TString_to_int(TString value_s){
  int value_i;
  value_i=value_s.Atoi();
 
  return value_i;

}

