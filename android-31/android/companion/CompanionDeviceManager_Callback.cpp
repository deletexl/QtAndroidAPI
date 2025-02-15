#include "../content/IntentSender.hpp"
#include "../../JString.hpp"
#include "./CompanionDeviceManager_Callback.hpp"

namespace android::companion
{
	// Fields
	
	// QJniObject forward
	CompanionDeviceManager_Callback::CompanionDeviceManager_Callback(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	CompanionDeviceManager_Callback::CompanionDeviceManager_Callback()
		: JObject(
			"android.companion.CompanionDeviceManager$Callback",
			"()V"
		) {}
	
	// Methods
	void CompanionDeviceManager_Callback::onDeviceFound(android::content::IntentSender arg0) const
	{
		callMethod<void>(
			"onDeviceFound",
			"(Landroid/content/IntentSender;)V",
			arg0.object()
		);
	}
	void CompanionDeviceManager_Callback::onFailure(JString arg0) const
	{
		callMethod<void>(
			"onFailure",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::companion

