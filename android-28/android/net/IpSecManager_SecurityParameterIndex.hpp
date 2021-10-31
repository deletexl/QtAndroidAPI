#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::net
{
	class IpSecManager_SecurityParameterIndex : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IpSecManager_SecurityParameterIndex(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		IpSecManager_SecurityParameterIndex(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		jint getSpi();
		jstring toString();
	};
} // namespace android::net
