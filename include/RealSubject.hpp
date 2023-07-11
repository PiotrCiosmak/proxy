#pragma once

#include <iostream>
#include "Subject.hpp"

class RealSubject : public Subject
{
public:
    void request() const override;
};
