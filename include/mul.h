//
// Created by raulett on 28.05.2023.
//

#ifndef CALC_MUL_H
#define CALC_MUL_H

#include <string>
#include "astnode.hpp"

class Mul: public ASTNode {
public:
    Mul(ASTNode *root, ASTNode *rhs)
            : ASTNode("*", root,  rhs)
            , operator_("*"){}

    std::string value() const {return operator_;}
private:
    std::string operator_;
};

#endif //CALC_MUL_H
