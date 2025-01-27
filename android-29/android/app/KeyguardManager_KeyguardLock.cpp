#include "./KeyguardManager.hpp"
#include "../../JString.hpp"
#include "./KeyguardManager_KeyguardLock.hpp"

namespace android::app
{
	// Fields
	
	// QJniObject forward
	KeyguardManager_KeyguardLock::KeyguardManager_KeyguardLock(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void KeyguardManager_KeyguardLock::disableKeyguard() const
	{
		callMethod<void>(
			"disableKeyguard",
			"()V"
		);
	}
	void KeyguardManager_KeyguardLock::reenableKeyguard() const
	{
		callMethod<void>(
			"reenableKeyguard",
			"()V"
		);
	}
} // namespace android::app

