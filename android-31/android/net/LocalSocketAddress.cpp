#include "./LocalSocketAddress_Namespace.hpp"
#include "../../JString.hpp"
#include "./LocalSocketAddress.hpp"

namespace android::net
{
	// Fields
	
	// QJniObject forward
	LocalSocketAddress::LocalSocketAddress(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	LocalSocketAddress::LocalSocketAddress(JString arg0)
		: JObject(
			"android.net.LocalSocketAddress",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	LocalSocketAddress::LocalSocketAddress(JString arg0, android::net::LocalSocketAddress_Namespace arg1)
		: JObject(
			"android.net.LocalSocketAddress",
			"(Ljava/lang/String;Landroid/net/LocalSocketAddress$Namespace;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
	JString LocalSocketAddress::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	android::net::LocalSocketAddress_Namespace LocalSocketAddress::getNamespace() const
	{
		return callObjectMethod(
			"getNamespace",
			"()Landroid/net/LocalSocketAddress$Namespace;"
		);
	}
} // namespace android::net

