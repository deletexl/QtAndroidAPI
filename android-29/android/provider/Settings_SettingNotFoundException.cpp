#include "../../JString.hpp"
#include "./Settings_SettingNotFoundException.hpp"

namespace android::provider
{
	// Fields
	
	// QAndroidJniObject forward
	Settings_SettingNotFoundException::Settings_SettingNotFoundException(QAndroidJniObject obj) : android::util::AndroidException(obj) {}
	
	// Constructors
	Settings_SettingNotFoundException::Settings_SettingNotFoundException(JString arg0)
		: android::util::AndroidException(
			"android.provider.Settings$SettingNotFoundException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::provider

