#include "tutorial/hello.hh"

#include "debug/Hello.hh"


Hello::Hello(HelloParams *params) : SimObject(params)
{
    DPRINTF(Hello, "Created the hello object\n");
}

Hello*
HelloParams::create()
{
    return new Hello(this);
}
