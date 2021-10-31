#include "../../app/Activity.hpp"
#include "../../app/PendingIntent.hpp"
#include "../../content/Context.hpp"
#include "../../content/Intent.hpp"
#include "./DownloadableSubscription.hpp"
#include "./EuiccInfo.hpp"
#include "./EuiccManager.hpp"

namespace android::telephony::euicc
{
	// Fields
	jstring EuiccManager::ACTION_MANAGE_EMBEDDED_SUBSCRIPTIONS()
	{
		return getStaticObjectField(
			"android.telephony.euicc.EuiccManager",
			"ACTION_MANAGE_EMBEDDED_SUBSCRIPTIONS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring EuiccManager::ACTION_NOTIFY_CARRIER_SETUP_INCOMPLETE()
	{
		return getStaticObjectField(
			"android.telephony.euicc.EuiccManager",
			"ACTION_NOTIFY_CARRIER_SETUP_INCOMPLETE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint EuiccManager::EMBEDDED_SUBSCRIPTION_RESULT_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"EMBEDDED_SUBSCRIPTION_RESULT_ERROR"
		);
	}
	jint EuiccManager::EMBEDDED_SUBSCRIPTION_RESULT_OK()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"EMBEDDED_SUBSCRIPTION_RESULT_OK"
		);
	}
	jint EuiccManager::EMBEDDED_SUBSCRIPTION_RESULT_RESOLVABLE_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.euicc.EuiccManager",
			"EMBEDDED_SUBSCRIPTION_RESULT_RESOLVABLE_ERROR"
		);
	}
	jstring EuiccManager::EXTRA_EMBEDDED_SUBSCRIPTION_DETAILED_CODE()
	{
		return getStaticObjectField(
			"android.telephony.euicc.EuiccManager",
			"EXTRA_EMBEDDED_SUBSCRIPTION_DETAILED_CODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring EuiccManager::EXTRA_EMBEDDED_SUBSCRIPTION_DOWNLOADABLE_SUBSCRIPTION()
	{
		return getStaticObjectField(
			"android.telephony.euicc.EuiccManager",
			"EXTRA_EMBEDDED_SUBSCRIPTION_DOWNLOADABLE_SUBSCRIPTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring EuiccManager::META_DATA_CARRIER_ICON()
	{
		return getStaticObjectField(
			"android.telephony.euicc.EuiccManager",
			"META_DATA_CARRIER_ICON",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	EuiccManager::EuiccManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void EuiccManager::deleteSubscription(jint arg0, android::app::PendingIntent arg1)
	{
		callMethod<void>(
			"deleteSubscription",
			"(ILandroid/app/PendingIntent;)V",
			arg0,
			arg1.object()
		);
	}
	void EuiccManager::downloadSubscription(android::telephony::euicc::DownloadableSubscription arg0, jboolean arg1, android::app::PendingIntent arg2)
	{
		callMethod<void>(
			"downloadSubscription",
			"(Landroid/telephony/euicc/DownloadableSubscription;ZLandroid/app/PendingIntent;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	jstring EuiccManager::getEid()
	{
		return callObjectMethod(
			"getEid",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::telephony::euicc::EuiccInfo EuiccManager::getEuiccInfo()
	{
		return callObjectMethod(
			"getEuiccInfo",
			"()Landroid/telephony/euicc/EuiccInfo;"
		);
	}
	jboolean EuiccManager::isEnabled()
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	void EuiccManager::startResolutionActivity(android::app::Activity arg0, jint arg1, android::content::Intent arg2, android::app::PendingIntent arg3)
	{
		callMethod<void>(
			"startResolutionActivity",
			"(Landroid/app/Activity;ILandroid/content/Intent;Landroid/app/PendingIntent;)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
	void EuiccManager::switchToSubscription(jint arg0, android::app::PendingIntent arg1)
	{
		callMethod<void>(
			"switchToSubscription",
			"(ILandroid/app/PendingIntent;)V",
			arg0,
			arg1.object()
		);
	}
} // namespace android::telephony::euicc
