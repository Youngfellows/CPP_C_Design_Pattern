#include "../include/IObserver.h"

IObserver::IObserver(ISubject *subject)
{
    this->subject = subject;
    // subject->attach(this);
}
