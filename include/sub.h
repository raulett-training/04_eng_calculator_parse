//
// Created by raulett on 28.05.2023.
//

#ifndef CALC_SUB_H
#define CALC_SUB_H

#include <string>
#include "astnode.hpp"

class Sub: public ASTNode {
public:
    Sub(ASTNode *lhs, ASTNode *rhs)
            : ASTNode("-", lhs, rhs)
            , operator_("-"){}

    std::string value() const {return operator_;}
private:
    std::string operator_;
};

#endif //CALC_SUB_H
