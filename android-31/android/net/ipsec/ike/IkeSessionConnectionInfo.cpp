#include "../../Network.hpp"
#include "../../../../java/net/InetAddress.hpp"
#include "./IkeSessionConnectionInfo.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	
	// QAndroidJniObject forward
	IkeSessionConnectionInfo::IkeSessionConnectionInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	IkeSessionConnectionInfo::IkeSessionConnectionInfo(java::net::InetAddress arg0, java::net::InetAddress arg1, android::net::Network arg2)
		: __JniBaseClass(
			"android.net.ipsec.ike.IkeSessionConnectionInfo",
			"(Ljava/net/InetAddress;Ljava/net/InetAddress;Landroid/net/Network;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	java::net::InetAddress IkeSessionConnectionInfo::getLocalAddress()
	{
		return callObjectMethod(
			"getLocalAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	android::net::Network IkeSessionConnectionInfo::getNetwork()
	{
		return callObjectMethod(
			"getNetwork",
			"()Landroid/net/Network;"
		);
	}
	java::net::InetAddress IkeSessionConnectionInfo::getRemoteAddress()
	{
		return callObjectMethod(
			"getRemoteAddress",
			"()Ljava/net/InetAddress;"
		);
	}
} // namespace android::net::ipsec::ike
