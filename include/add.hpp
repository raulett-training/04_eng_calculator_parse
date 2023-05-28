//
// Created by raulett on 28.05.2023.
//

#ifndef CALC_ADD_HPP
#define CALC_ADD_HPP

#include <string>
#include "astnode.hpp"

class Add: public ASTNode {
public:
    Add(ASTNode *lhs, ASTNode *rhs)
    : ASTNode("+", lhs, rhs)
    , operator_("+"){}

    std::string value() const {return operator_;}
private:
    std::string operator_;
};

#endif //CALC_ADD_HPP
