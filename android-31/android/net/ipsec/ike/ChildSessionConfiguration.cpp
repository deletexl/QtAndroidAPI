#include "./ChildSessionConfiguration.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	
	// QAndroidJniObject forward
	ChildSessionConfiguration::ChildSessionConfiguration(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass ChildSessionConfiguration::getInboundTrafficSelectors()
	{
		return callObjectMethod(
			"getInboundTrafficSelectors",
			"()Ljava/util/List;"
		);
	}
	__JniBaseClass ChildSessionConfiguration::getOutboundTrafficSelectors()
	{
		return callObjectMethod(
			"getOutboundTrafficSelectors",
			"()Ljava/util/List;"
		);
	}
} // namespace android::net::ipsec::ike
