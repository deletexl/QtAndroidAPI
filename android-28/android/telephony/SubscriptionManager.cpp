#include "../content/Context.hpp"
#include "./SubscriptionInfo.hpp"
#include "./SubscriptionManager_OnSubscriptionsChangedListener.hpp"
#include "../../JString.hpp"
#include "./SubscriptionManager.hpp"

namespace android::telephony
{
	// Fields
	JString SubscriptionManager::ACTION_DEFAULT_SMS_SUBSCRIPTION_CHANGED()
	{
		return getStaticObjectField(
			"android.telephony.SubscriptionManager",
			"ACTION_DEFAULT_SMS_SUBSCRIPTION_CHANGED",
			"Ljava/lang/String;"
		);
	}
	JString SubscriptionManager::ACTION_DEFAULT_SUBSCRIPTION_CHANGED()
	{
		return getStaticObjectField(
			"android.telephony.SubscriptionManager",
			"ACTION_DEFAULT_SUBSCRIPTION_CHANGED",
			"Ljava/lang/String;"
		);
	}
	JString SubscriptionManager::ACTION_MANAGE_SUBSCRIPTION_PLANS()
	{
		return getStaticObjectField(
			"android.telephony.SubscriptionManager",
			"ACTION_MANAGE_SUBSCRIPTION_PLANS",
			"Ljava/lang/String;"
		);
	}
	JString SubscriptionManager::ACTION_REFRESH_SUBSCRIPTION_PLANS()
	{
		return getStaticObjectField(
			"android.telephony.SubscriptionManager",
			"ACTION_REFRESH_SUBSCRIPTION_PLANS",
			"Ljava/lang/String;"
		);
	}
	jint SubscriptionManager::DATA_ROAMING_DISABLE()
	{
		return getStaticField<jint>(
			"android.telephony.SubscriptionManager",
			"DATA_ROAMING_DISABLE"
		);
	}
	jint SubscriptionManager::DATA_ROAMING_ENABLE()
	{
		return getStaticField<jint>(
			"android.telephony.SubscriptionManager",
			"DATA_ROAMING_ENABLE"
		);
	}
	JString SubscriptionManager::EXTRA_SUBSCRIPTION_INDEX()
	{
		return getStaticObjectField(
			"android.telephony.SubscriptionManager",
			"EXTRA_SUBSCRIPTION_INDEX",
			"Ljava/lang/String;"
		);
	}
	jint SubscriptionManager::INVALID_SUBSCRIPTION_ID()
	{
		return getStaticField<jint>(
			"android.telephony.SubscriptionManager",
			"INVALID_SUBSCRIPTION_ID"
		);
	}
	
	// QJniObject forward
	SubscriptionManager::SubscriptionManager(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::telephony::SubscriptionManager SubscriptionManager::from(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.telephony.SubscriptionManager",
			"from",
			"(Landroid/content/Context;)Landroid/telephony/SubscriptionManager;",
			arg0.object()
		);
	}
	jint SubscriptionManager::getDefaultDataSubscriptionId()
	{
		return callStaticMethod<jint>(
			"android.telephony.SubscriptionManager",
			"getDefaultDataSubscriptionId",
			"()I"
		);
	}
	jint SubscriptionManager::getDefaultSmsSubscriptionId()
	{
		return callStaticMethod<jint>(
			"android.telephony.SubscriptionManager",
			"getDefaultSmsSubscriptionId",
			"()I"
		);
	}
	jint SubscriptionManager::getDefaultSubscriptionId()
	{
		return callStaticMethod<jint>(
			"android.telephony.SubscriptionManager",
			"getDefaultSubscriptionId",
			"()I"
		);
	}
	jint SubscriptionManager::getDefaultVoiceSubscriptionId()
	{
		return callStaticMethod<jint>(
			"android.telephony.SubscriptionManager",
			"getDefaultVoiceSubscriptionId",
			"()I"
		);
	}
	void SubscriptionManager::addOnSubscriptionsChangedListener(android::telephony::SubscriptionManager_OnSubscriptionsChangedListener arg0) const
	{
		callMethod<void>(
			"addOnSubscriptionsChangedListener",
			"(Landroid/telephony/SubscriptionManager$OnSubscriptionsChangedListener;)V",
			arg0.object()
		);
	}
	jboolean SubscriptionManager::canManageSubscription(android::telephony::SubscriptionInfo arg0) const
	{
		return callMethod<jboolean>(
			"canManageSubscription",
			"(Landroid/telephony/SubscriptionInfo;)Z",
			arg0.object()
		);
	}
	JObject SubscriptionManager::getAccessibleSubscriptionInfoList() const
	{
		return callObjectMethod(
			"getAccessibleSubscriptionInfoList",
			"()Ljava/util/List;"
		);
	}
	android::telephony::SubscriptionInfo SubscriptionManager::getActiveSubscriptionInfo(jint arg0) const
	{
		return callObjectMethod(
			"getActiveSubscriptionInfo",
			"(I)Landroid/telephony/SubscriptionInfo;",
			arg0
		);
	}
	jint SubscriptionManager::getActiveSubscriptionInfoCount() const
	{
		return callMethod<jint>(
			"getActiveSubscriptionInfoCount",
			"()I"
		);
	}
	jint SubscriptionManager::getActiveSubscriptionInfoCountMax() const
	{
		return callMethod<jint>(
			"getActiveSubscriptionInfoCountMax",
			"()I"
		);
	}
	android::telephony::SubscriptionInfo SubscriptionManager::getActiveSubscriptionInfoForSimSlotIndex(jint arg0) const
	{
		return callObjectMethod(
			"getActiveSubscriptionInfoForSimSlotIndex",
			"(I)Landroid/telephony/SubscriptionInfo;",
			arg0
		);
	}
	JObject SubscriptionManager::getActiveSubscriptionInfoList() const
	{
		return callObjectMethod(
			"getActiveSubscriptionInfoList",
			"()Ljava/util/List;"
		);
	}
	JObject SubscriptionManager::getSubscriptionPlans(jint arg0) const
	{
		return callObjectMethod(
			"getSubscriptionPlans",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	jboolean SubscriptionManager::isNetworkRoaming(jint arg0) const
	{
		return callMethod<jboolean>(
			"isNetworkRoaming",
			"(I)Z",
			arg0
		);
	}
	void SubscriptionManager::removeOnSubscriptionsChangedListener(android::telephony::SubscriptionManager_OnSubscriptionsChangedListener arg0) const
	{
		callMethod<void>(
			"removeOnSubscriptionsChangedListener",
			"(Landroid/telephony/SubscriptionManager$OnSubscriptionsChangedListener;)V",
			arg0.object()
		);
	}
	void SubscriptionManager::setSubscriptionOverrideCongested(jint arg0, jboolean arg1, jlong arg2) const
	{
		callMethod<void>(
			"setSubscriptionOverrideCongested",
			"(IZJ)V",
			arg0,
			arg1,
			arg2
		);
	}
	void SubscriptionManager::setSubscriptionOverrideUnmetered(jint arg0, jboolean arg1, jlong arg2) const
	{
		callMethod<void>(
			"setSubscriptionOverrideUnmetered",
			"(IZJ)V",
			arg0,
			arg1,
			arg2
		);
	}
	void SubscriptionManager::setSubscriptionPlans(jint arg0, JObject arg1) const
	{
		callMethod<void>(
			"setSubscriptionPlans",
			"(ILjava/util/List;)V",
			arg0,
			arg1.object()
		);
	}
} // namespace android::telephony

