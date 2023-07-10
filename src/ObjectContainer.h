#ifndef _GULDAN_OBJECT_CONTAINER_H
#define _GULDAN_OBJECT_CONTAINER_H

#include <map>

template<typename T>
class ObjectContainer
{
public:
    ObjectContainer() {}
    ~ObjectContainer() {}

    void Attach(uint64_t id, T obj)
    {
        c[id] = obj;
    }
    void Detach(uint64_t id)
    {
        c.erase(id);
    }
    T Get(uint64_t id)
    {
        return c[id];
    }
private:
    std::map<uint64_t, T> c;
};

#endif