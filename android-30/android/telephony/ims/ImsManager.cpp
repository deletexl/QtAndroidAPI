#include "./ImsMmTelManager.hpp"
#include "./ImsRcsManager.hpp"
#include "./ImsManager.hpp"

namespace android::telephony::ims
{
	// Fields
	jstring ImsManager::ACTION_WFC_IMS_REGISTRATION_ERROR()
	{
		return getStaticObjectField(
			"android.telephony.ims.ImsManager",
			"ACTION_WFC_IMS_REGISTRATION_ERROR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ImsManager::EXTRA_WFC_REGISTRATION_FAILURE_MESSAGE()
	{
		return getStaticObjectField(
			"android.telephony.ims.ImsManager",
			"EXTRA_WFC_REGISTRATION_FAILURE_MESSAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ImsManager::EXTRA_WFC_REGISTRATION_FAILURE_TITLE()
	{
		return getStaticObjectField(
			"android.telephony.ims.ImsManager",
			"EXTRA_WFC_REGISTRATION_FAILURE_TITLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	ImsManager::ImsManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::telephony::ims::ImsMmTelManager ImsManager::getImsMmTelManager(jint arg0)
	{
		return callObjectMethod(
			"getImsMmTelManager",
			"(I)Landroid/telephony/ims/ImsMmTelManager;",
			arg0
		);
	}
	android::telephony::ims::ImsRcsManager ImsManager::getImsRcsManager(jint arg0)
	{
		return callObjectMethod(
			"getImsRcsManager",
			"(I)Landroid/telephony/ims/ImsRcsManager;",
			arg0
		);
	}
} // namespace android::telephony::ims
