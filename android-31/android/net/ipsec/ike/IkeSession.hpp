#pragma once

#include "../../../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::net::ipsec::ike
{
	class ChildSessionParams;
}
namespace android::net::ipsec::ike
{
	class IkeSessionParams;
}

namespace android::net::ipsec::ike
{
	class IkeSession : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IkeSession(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IkeSession(QAndroidJniObject obj);
		
		// Constructors
		IkeSession(android::content::Context arg0, android::net::ipsec::ike::IkeSessionParams arg1, android::net::ipsec::ike::ChildSessionParams arg2, JObject arg3, JObject arg4, JObject arg5);
		
		// Methods
		void close();
		void closeChildSession(JObject arg0);
		void finalize();
		void kill();
		void openChildSession(android::net::ipsec::ike::ChildSessionParams arg0, JObject arg1);
	};
} // namespace android::net::ipsec::ike

