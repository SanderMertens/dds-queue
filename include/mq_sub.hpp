
#include "mq_DCPS.h"

namespace dds {
namespace mq {

class AnyReader {
public:
    AnyReader();
    virtual void take();
};

class Subscriber {
public:
    Subscriber(domain::DomainParticipant dp, std::string name);
};

template <class T>
class Handler {
    Handler() {}
    virtual void on_message(T msg);
};

template <class T>
class Reader : public anyreader {
public:
    Reader(Subscriber sub, handler<T> handler);
private:
    handler<T> m_handler;
};

}
}
