#include "../../../JString.hpp"
#include "./SSLPeerUnverifiedException.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// QJniObject forward
	SSLPeerUnverifiedException::SSLPeerUnverifiedException(QJniObject obj) : javax::net::ssl::SSLException(obj) {}
	
	// Constructors
	SSLPeerUnverifiedException::SSLPeerUnverifiedException(JString arg0)
		: javax::net::ssl::SSLException(
			"javax.net.ssl.SSLPeerUnverifiedException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace javax::net::ssl

