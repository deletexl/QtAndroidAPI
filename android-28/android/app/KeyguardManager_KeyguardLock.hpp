#pragma once

#include "../../JObject.hpp"

namespace android::app
{
	class KeyguardManager;
}

namespace android::app
{
	class KeyguardManager_KeyguardLock : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyguardManager_KeyguardLock(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyguardManager_KeyguardLock(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void disableKeyguard();
		void reenableKeyguard();
	};
} // namespace android::app

