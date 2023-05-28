//
// Created by raulett on 28.05.2023.
//

#ifndef CALC_DIV_H
#define CALC_DIV_H

#include <string>
#include "astnode.hpp"

class Div: public ASTNode {
public:
    Div(ASTNode *root, ASTNode *rhs)
            : ASTNode("/", root,  rhs)
            , operator_("/"){}

    std::string value() const {return operator_;}
private:
    std::string operator_;
};

#endif //CALC_DIV_H
