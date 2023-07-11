#pragma once

#include <memory>
#include "RealSubject.hpp"

class Proxy : public Subject
{
public:
    explicit Proxy(const std::shared_ptr<RealSubject>& new_real_subject);
    void request() const override;

private:
    [[nodiscard]] bool checkAccess() const;
    void logAccess() const;
    std::shared_ptr<RealSubject> real_subject;
};
