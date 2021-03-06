#include "../include/Proxy.h"

Proxy::Proxy(std::shared_ptr<Subject> subject)
{
    cout << "Proxy()构造函数" << endl;
    if(nullptr == subject)
    {
        this->subject = std::make_shared<ConcreteSubject>();
    }else 
    {
        this->subject = subject;
    }
}

Proxy::~Proxy()
{
    cout << "~Proxy()析构函数" << endl;
    if(nullptr != this->subject)
    {
       this->subject = nullptr;
    }
}

void Proxy::request()
{
    if(this->subject == nullptr)
    {
        this->subject = std::make_shared<ConcreteSubject>();
    }
    this->subject->request();//通过代理实现主体需要完成的操作
}