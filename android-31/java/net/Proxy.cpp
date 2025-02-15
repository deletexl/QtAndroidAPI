#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Proxy_Type.hpp"
#include "./SocketAddress.hpp"
#include "./Proxy.hpp"

namespace java::net
{
	// Fields
	java::net::Proxy Proxy::NO_PROXY()
	{
		return getStaticObjectField(
			"java.net.Proxy",
			"NO_PROXY",
			"Ljava/net/Proxy;"
		);
	}
	
	// QJniObject forward
	Proxy::Proxy(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Proxy::Proxy(java::net::Proxy_Type arg0, java::net::SocketAddress arg1)
		: JObject(
			"java.net.Proxy",
			"(Ljava/net/Proxy$Type;Ljava/net/SocketAddress;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	java::net::SocketAddress Proxy::address() const
	{
		return callObjectMethod(
			"address",
			"()Ljava/net/SocketAddress;"
		);
	}
	jboolean Proxy::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint Proxy::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString Proxy::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	java::net::Proxy_Type Proxy::type() const
	{
		return callObjectMethod(
			"type",
			"()Ljava/net/Proxy$Type;"
		);
	}
} // namespace java::net

