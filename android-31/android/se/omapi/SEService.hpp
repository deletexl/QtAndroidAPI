#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::se::omapi
{
	class Reader;
}

namespace android::se::omapi
{
	class SEService : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_SECURE_ELEMENT_STATE_CHANGED();
		static jstring EXTRA_READER_NAME();
		static jstring EXTRA_READER_STATE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SEService(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SEService(QAndroidJniObject obj);
		
		// Constructors
		SEService(android::content::Context arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		
		// Methods
		jarray getReaders();
		android::se::omapi::Reader getUiccReader(jint arg0);
		jstring getVersion();
		jboolean isConnected();
		void shutdown();
	};
} // namespace android::se::omapi
