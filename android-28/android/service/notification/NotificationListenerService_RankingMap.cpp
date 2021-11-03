#include "../../os/Parcel.hpp"
#include "./NotificationListenerService_Ranking.hpp"
#include "./NotificationListenerService_RankingMap.hpp"

namespace android::service::notification
{
	// Fields
	JObject NotificationListenerService_RankingMap::CREATOR()
	{
		return getStaticObjectField(
			"android.service.notification.NotificationListenerService$RankingMap",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	NotificationListenerService_RankingMap::NotificationListenerService_RankingMap(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint NotificationListenerService_RankingMap::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jarray NotificationListenerService_RankingMap::getOrderedKeys()
	{
		return callObjectMethod(
			"getOrderedKeys",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jboolean NotificationListenerService_RankingMap::getRanking(jstring arg0, android::service::notification::NotificationListenerService_Ranking arg1)
	{
		return callMethod<jboolean>(
			"getRanking",
			"(Ljava/lang/String;Landroid/service/notification/NotificationListenerService$Ranking;)Z",
			arg0,
			arg1.object()
		);
	}
	void NotificationListenerService_RankingMap::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::notification

