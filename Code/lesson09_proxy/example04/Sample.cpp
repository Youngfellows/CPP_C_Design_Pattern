#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //代理模式,创建被代理对象
    std::shared_ptr<Image> image = std::make_shared<RealImage>("妹妹好漂亮.png");
    //创建代理类
    std::shared_ptr<Image> proxy = std::make_shared<ProxyImage>(image);
    //通过代理类访问代理对象
    proxy->display();

    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    cout << endl;
}

void test3()
{
    cout << "test3():: ..." << endl;
    cout << endl;
}

void test4()
{
    cout << "test4():: ..." << endl;
    cout << endl;
}