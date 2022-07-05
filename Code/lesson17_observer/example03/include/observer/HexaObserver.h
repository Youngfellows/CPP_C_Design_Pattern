#ifndef HEXA_OBSERVER_H
#define HEXA_OBSERVER_H

#include "../Observer.h"

/**
 * @brief 派生类: 16进制数据观察者
 *
 */
class HexaObserver : public Observer
{
public:
    using Observer::Observer; //使用父类普通函数及其构造函数
    HexaObserver();
    ~HexaObserver();
    virtual void update() override; //实现update()函数
};
#endif
