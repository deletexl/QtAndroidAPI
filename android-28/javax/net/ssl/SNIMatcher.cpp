#include "./SNIServerName.hpp"
#include "./SNIMatcher.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// QJniObject forward
	SNIMatcher::SNIMatcher(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint SNIMatcher::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jboolean SNIMatcher::matches(javax::net::ssl::SNIServerName arg0) const
	{
		return callMethod<jboolean>(
			"matches",
			"(Ljavax/net/ssl/SNIServerName;)Z",
			arg0.object()
		);
	}
} // namespace javax::net::ssl

