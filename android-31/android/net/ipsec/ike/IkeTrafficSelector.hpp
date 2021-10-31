#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace java::net
{
	class InetAddress;
}

namespace android::net::ipsec::ike
{
	class IkeTrafficSelector : public __JniBaseClass
	{
	public:
		// Fields
		jint endPort();
		java::net::InetAddress endingAddress();
		jint startPort();
		java::net::InetAddress startingAddress();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IkeTrafficSelector(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		IkeTrafficSelector(QAndroidJniObject obj);
		
		// Constructors
		IkeTrafficSelector(jint arg0, jint arg1, java::net::InetAddress arg2, java::net::InetAddress arg3);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
	};
} // namespace android::net::ipsec::ike
