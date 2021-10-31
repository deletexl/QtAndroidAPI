#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class Telephony_Threads : public __JniBaseClass
	{
	public:
		// Fields
		static jint BROADCAST_THREAD();
		static jint COMMON_THREAD();
		static android::net::Uri CONTENT_URI();
		static android::net::Uri OBSOLETE_THREADS_URI();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Telephony_Threads(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Telephony_Threads(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jlong getOrCreateThreadId(android::content::Context arg0, jstring arg1);
		static jlong getOrCreateThreadId(android::content::Context arg0, __JniBaseClass arg1);
	};
} // namespace android::provider
