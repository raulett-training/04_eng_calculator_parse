//
// Created by raulett on 03.06.2023.
//
#include "astnode.hpp"

#ifndef CALC_VARIABLE_H
#define CALC_VARIABLE_H

class Variable: public ASTNode {
public:
    Variable(std::string name)
    : ASTNode(name)
    , name_(name){}
private:
    std::string name_;
};

#endif //CALC_VARIABLE_H
