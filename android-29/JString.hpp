#pragma once
#include "./JObject.hpp"
class JString : public JObject
{
public:
    template<typename ...Ts>
    explicit JString(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
    JString(QAndroidJniObject obj);
    JString(const QString &string);
};