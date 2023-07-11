#include "Proxy.hpp"

Proxy::Proxy(const std::shared_ptr<RealSubject>& new_real_subject) : real_subject{new_real_subject}
{}

void Proxy::request() const
{
    if (this->checkAccess())
    {
        this->real_subject->request();
        this->logAccess();
    }
}

bool Proxy::checkAccess() const
{
    std::cout << "Proxy: Checking access prior to firing a real request" << std::endl;
    return true;
}

void Proxy::logAccess() const
{
    std::cout << "Proxy: Logging the time of request" << std::endl;
}

