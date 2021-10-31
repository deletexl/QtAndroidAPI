#include "./ZenPolicy.hpp"
#include "./ZenPolicy_Builder.hpp"

namespace android::service::notification
{
	// Fields
	
	// QAndroidJniObject forward
	ZenPolicy_Builder::ZenPolicy_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ZenPolicy_Builder::ZenPolicy_Builder()
		: __JniBaseClass(
			"android.service.notification.ZenPolicy$Builder",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject ZenPolicy_Builder::allowAlarms(jboolean arg0)
	{
		return callObjectMethod(
			"allowAlarms",
			"(Z)Landroid/service/notification/ZenPolicy$Builder;",
			arg0
		);
	}
	QAndroidJniObject ZenPolicy_Builder::allowAllSounds()
	{
		return callObjectMethod(
			"allowAllSounds",
			"()Landroid/service/notification/ZenPolicy$Builder;"
		);
	}
	QAndroidJniObject ZenPolicy_Builder::allowCalls(jint arg0)
	{
		return callObjectMethod(
			"allowCalls",
			"(I)Landroid/service/notification/ZenPolicy$Builder;",
			arg0
		);
	}
	QAndroidJniObject ZenPolicy_Builder::allowEvents(jboolean arg0)
	{
		return callObjectMethod(
			"allowEvents",
			"(Z)Landroid/service/notification/ZenPolicy$Builder;",
			arg0
		);
	}
	QAndroidJniObject ZenPolicy_Builder::allowMedia(jboolean arg0)
	{
		return callObjectMethod(
			"allowMedia",
			"(Z)Landroid/service/notification/ZenPolicy$Builder;",
			arg0
		);
	}
	QAndroidJniObject ZenPolicy_Builder::allowMessages(jint arg0)
	{
		return callObjectMethod(
			"allowMessages",
			"(I)Landroid/service/notification/ZenPolicy$Builder;",
			arg0
		);
	}
	QAndroidJniObject ZenPolicy_Builder::allowReminders(jboolean arg0)
	{
		return callObjectMethod(
			"allowReminders",
			"(Z)Landroid/service/notification/ZenPolicy$Builder;",
			arg0
		);
	}
	QAndroidJniObject ZenPolicy_Builder::allowRepeatCallers(jboolean arg0)
	{
		return callObjectMethod(
			"allowRepeatCallers",
			"(Z)Landroid/service/notification/ZenPolicy$Builder;",
			arg0
		);
	}
	QAndroidJniObject ZenPolicy_Builder::allowSystem(jboolean arg0)
	{
		return callObjectMethod(
			"allowSystem",
			"(Z)Landroid/service/notification/ZenPolicy$Builder;",
			arg0
		);
	}
	QAndroidJniObject ZenPolicy_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/service/notification/ZenPolicy;"
		);
	}
	QAndroidJniObject ZenPolicy_Builder::disallowAllSounds()
	{
		return callObjectMethod(
			"disallowAllSounds",
			"()Landroid/service/notification/ZenPolicy$Builder;"
		);
	}
	QAndroidJniObject ZenPolicy_Builder::hideAllVisualEffects()
	{
		return callObjectMethod(
			"hideAllVisualEffects",
			"()Landroid/service/notification/ZenPolicy$Builder;"
		);
	}
	QAndroidJniObject ZenPolicy_Builder::showAllVisualEffects()
	{
		return callObjectMethod(
			"showAllVisualEffects",
			"()Landroid/service/notification/ZenPolicy$Builder;"
		);
	}
	QAndroidJniObject ZenPolicy_Builder::showBadges(jboolean arg0)
	{
		return callObjectMethod(
			"showBadges",
			"(Z)Landroid/service/notification/ZenPolicy$Builder;",
			arg0
		);
	}
	QAndroidJniObject ZenPolicy_Builder::showFullScreenIntent(jboolean arg0)
	{
		return callObjectMethod(
			"showFullScreenIntent",
			"(Z)Landroid/service/notification/ZenPolicy$Builder;",
			arg0
		);
	}
	QAndroidJniObject ZenPolicy_Builder::showInAmbientDisplay(jboolean arg0)
	{
		return callObjectMethod(
			"showInAmbientDisplay",
			"(Z)Landroid/service/notification/ZenPolicy$Builder;",
			arg0
		);
	}
	QAndroidJniObject ZenPolicy_Builder::showInNotificationList(jboolean arg0)
	{
		return callObjectMethod(
			"showInNotificationList",
			"(Z)Landroid/service/notification/ZenPolicy$Builder;",
			arg0
		);
	}
	QAndroidJniObject ZenPolicy_Builder::showLights(jboolean arg0)
	{
		return callObjectMethod(
			"showLights",
			"(Z)Landroid/service/notification/ZenPolicy$Builder;",
			arg0
		);
	}
	QAndroidJniObject ZenPolicy_Builder::showPeeking(jboolean arg0)
	{
		return callObjectMethod(
			"showPeeking",
			"(Z)Landroid/service/notification/ZenPolicy$Builder;",
			arg0
		);
	}
	QAndroidJniObject ZenPolicy_Builder::showStatusBarIcons(jboolean arg0)
	{
		return callObjectMethod(
			"showStatusBarIcons",
			"(Z)Landroid/service/notification/ZenPolicy$Builder;",
			arg0
		);
	}
} // namespace android::service::notification

