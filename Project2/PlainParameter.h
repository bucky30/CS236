#pragma once
#include "Parameter.h"

class PlainParameter : public Parameter {

    public:

    PlainParameter(std::string parameter){
    this->parameter = parameter;
};

    std::string toString() {
        return parameter;
    }
};
