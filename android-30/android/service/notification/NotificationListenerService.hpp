#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

namespace android::app
{
	class NotificationChannel;
}
namespace android::app
{
	class NotificationChannelGroup;
}
namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
namespace android::os
{
	class UserHandle;
}
namespace android::service::notification
{
	class NotificationListenerService_RankingMap;
}
namespace android::service::notification
{
	class StatusBarNotification;
}

namespace android::service::notification
{
	class NotificationListenerService : public android::app::Service
	{
	public:
		// Fields
		static jint HINT_HOST_DISABLE_CALL_EFFECTS();
		static jint HINT_HOST_DISABLE_EFFECTS();
		static jint HINT_HOST_DISABLE_NOTIFICATION_EFFECTS();
		static jint INTERRUPTION_FILTER_ALARMS();
		static jint INTERRUPTION_FILTER_ALL();
		static jint INTERRUPTION_FILTER_NONE();
		static jint INTERRUPTION_FILTER_PRIORITY();
		static jint INTERRUPTION_FILTER_UNKNOWN();
		static jint NOTIFICATION_CHANNEL_OR_GROUP_ADDED();
		static jint NOTIFICATION_CHANNEL_OR_GROUP_DELETED();
		static jint NOTIFICATION_CHANNEL_OR_GROUP_UPDATED();
		static jint REASON_APP_CANCEL();
		static jint REASON_APP_CANCEL_ALL();
		static jint REASON_CANCEL();
		static jint REASON_CANCEL_ALL();
		static jint REASON_CHANNEL_BANNED();
		static jint REASON_CLICK();
		static jint REASON_ERROR();
		static jint REASON_GROUP_OPTIMIZATION();
		static jint REASON_GROUP_SUMMARY_CANCELED();
		static jint REASON_LISTENER_CANCEL();
		static jint REASON_LISTENER_CANCEL_ALL();
		static jint REASON_PACKAGE_BANNED();
		static jint REASON_PACKAGE_CHANGED();
		static jint REASON_PACKAGE_SUSPENDED();
		static jint REASON_PROFILE_TURNED_OFF();
		static jint REASON_SNOOZED();
		static jint REASON_TIMEOUT();
		static jint REASON_UNAUTOBUNDLED();
		static jint REASON_USER_STOPPED();
		static jstring SERVICE_INTERFACE();
		static jint SUPPRESSED_EFFECT_SCREEN_OFF();
		static jint SUPPRESSED_EFFECT_SCREEN_ON();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NotificationListenerService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		NotificationListenerService(QAndroidJniObject obj);
		
		// Constructors
		NotificationListenerService();
		
		// Methods
		static void requestRebind(android::content::ComponentName arg0);
		void cancelAllNotifications();
		void cancelNotification(jstring arg0);
		void cancelNotification(jstring arg0, jstring arg1, jint arg2);
		void cancelNotifications(jarray arg0);
		void clearRequestedListenerHints();
		jarray getActiveNotifications();
		jarray getActiveNotifications(jarray arg0);
		jint getCurrentInterruptionFilter();
		jint getCurrentListenerHints();
		android::service::notification::NotificationListenerService_RankingMap getCurrentRanking();
		__JniBaseClass getNotificationChannelGroups(jstring arg0, android::os::UserHandle arg1);
		__JniBaseClass getNotificationChannels(jstring arg0, android::os::UserHandle arg1);
		jarray getSnoozedNotifications();
		__JniBaseClass onBind(android::content::Intent arg0);
		void onDestroy();
		void onInterruptionFilterChanged(jint arg0);
		void onListenerConnected();
		void onListenerDisconnected();
		void onListenerHintsChanged(jint arg0);
		void onNotificationChannelGroupModified(jstring arg0, android::os::UserHandle arg1, android::app::NotificationChannelGroup arg2, jint arg3);
		void onNotificationChannelModified(jstring arg0, android::os::UserHandle arg1, android::app::NotificationChannel arg2, jint arg3);
		void onNotificationPosted(android::service::notification::StatusBarNotification arg0);
		void onNotificationPosted(android::service::notification::StatusBarNotification arg0, android::service::notification::NotificationListenerService_RankingMap arg1);
		void onNotificationRankingUpdate(android::service::notification::NotificationListenerService_RankingMap arg0);
		void onNotificationRemoved(android::service::notification::StatusBarNotification arg0);
		void onNotificationRemoved(android::service::notification::StatusBarNotification arg0, android::service::notification::NotificationListenerService_RankingMap arg1);
		void onNotificationRemoved(android::service::notification::StatusBarNotification arg0, android::service::notification::NotificationListenerService_RankingMap arg1, jint arg2);
		void onSilentStatusBarIconsVisibilityChanged(jboolean arg0);
		void requestInterruptionFilter(jint arg0);
		void requestListenerHints(jint arg0);
		void requestUnbind();
		void setNotificationsShown(jarray arg0);
		void snoozeNotification(jstring arg0, jlong arg1);
		void updateNotificationChannel(jstring arg0, android::os::UserHandle arg1, android::app::NotificationChannel arg2);
	};
} // namespace android::service::notification
