#include <iostream>
#include <memory>
#include "include/RealSubject.hpp"
#include "include/Proxy.hpp"

void clientCode(const std::shared_ptr<Subject>& subject);

int main()
{
    std::cout << "Client: Executing the client code with a real subject:" << std::endl;
    std::shared_ptr<RealSubject> real_subject = std::make_shared<RealSubject>();
    clientCode(real_subject);
    std::cout << "\nClient: Executing the same client code with a proxy:" << std::endl;
    std::shared_ptr<Proxy> proxy = std::make_shared<Proxy>(real_subject);
    clientCode(proxy);
}

void clientCode(const std::shared_ptr<Subject>& subject)
{
    subject->request();
}