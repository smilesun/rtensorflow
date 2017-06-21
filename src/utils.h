#include <Rcpp.h>
using namespace Rcpp;
#include <stdio.h>
#include <iostream>
using namespace std;
#include <tensorflow/c/c_api.h>
#include <stdlib.h>   
#include <vector>  
#include <string>

void deallocator(void* data, size_t length);

void tensor_deallocator(void* data, size_t length,void* arg);

TF_Buffer* read_file(std::string path);

void deleteInputValues();

void resetOutputValues();

void setInputs(std::vector<std::pair<TF_Operation*,TF_Tensor*>> inputs);

void setOutputs(std::vector<TF_Operation*> outputs);

void setPointers();

int getOutputs();

void runSession(TF_Session* session, TF_Status* status);