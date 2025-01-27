#include "../../JString.hpp"
#include "./SocketTimeoutException.hpp"

namespace java::net
{
	// Fields
	
	// QJniObject forward
	SocketTimeoutException::SocketTimeoutException(QJniObject obj) : java::io::InterruptedIOException(obj) {}
	
	// Constructors
	SocketTimeoutException::SocketTimeoutException()
		: java::io::InterruptedIOException(
			"java.net.SocketTimeoutException",
			"()V"
		) {}
	SocketTimeoutException::SocketTimeoutException(JString arg0)
		: java::io::InterruptedIOException(
			"java.net.SocketTimeoutException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::net

