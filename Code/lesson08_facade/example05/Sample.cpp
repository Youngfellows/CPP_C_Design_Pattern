#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //外观模式,创建对象,动态申请内存
    MovieFacade *movieFacade = new MovieFacade();
    //通过指针调用函数
    movieFacade->openMovie();
    movieFacade->closeMovie();

    //释放内存
    delete movieFacade;
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