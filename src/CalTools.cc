#include "../include/CalTools.h"
#include <iostream>
float CalRMSError(vector<float> v){
  float sum =0;
  //float sum2=0;
  for(unsigned int i = 0 ; i < v.size(); i++){
    //    cout<<v[i]<<endl;
    sum = sum + v[i];
    //sum2 = sum2 + pow(v[i], 2.);
  }
  float avg = sum/v.size(); 
  // cout<<"avg="<<avg<<endl;

  //  float dev2 = sum2/(v.size()) - pow( (sum/v.size()), 2.);
  //cout<<dev2<<endl;
  //float dev = sqrt(dev2);
  //float dev = 0;
  float dsum=0;
  for(unsigned int i = 0 ; i < v.size(); i++){
    dsum = dsum + pow((avg - v[i]) ,2);

  }
  //  dev = dev/v.size();
  float dev2 = dsum/v.size();
  float dev = sqrt(dev2);


  return dev;

}

float CalRMS(vector<float> v){
  float sum2 = 0;
  for(unsigned int i = 0 ; i < v.size(); i ++){
    sum2 = sum2 + pow(v[i],2);
  }

  float MS = sum2/v.size();
  float RMS = sqrt(MS);
  return RMS;


}


float CalSQSUM2(vector<float> v){
  float sum2 = 0;
  for(unsigned int i = 0 ; i < v.size(); i ++){
    sum2 = sum2 + pow(v[i],2);
  }

  //  float MS = sum2/v.size();
  //float RMS = sqrt(MS);
  return sqrt(sum2);


}
