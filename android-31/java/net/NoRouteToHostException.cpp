#include "../../JString.hpp"
#include "./NoRouteToHostException.hpp"

namespace java::net
{
	// Fields
	
	// QJniObject forward
	NoRouteToHostException::NoRouteToHostException(QJniObject obj) : java::net::SocketException(obj) {}
	
	// Constructors
	NoRouteToHostException::NoRouteToHostException()
		: java::net::SocketException(
			"java.net.NoRouteToHostException",
			"()V"
		) {}
	NoRouteToHostException::NoRouteToHostException(JString arg0)
		: java::net::SocketException(
			"java.net.NoRouteToHostException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::net

