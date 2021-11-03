#pragma once

#include "../../JObject.hpp"

namespace android::app
{
	class PendingIntent;
}
namespace android::app
{
	class RemoteInput;
}

namespace android::app
{
	class Notification_CarExtender_UnreadConversation : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Notification_CarExtender_UnreadConversation(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Notification_CarExtender_UnreadConversation(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jlong getLatestTimestamp();
		jarray getMessages();
		jstring getParticipant();
		jarray getParticipants();
		android::app::PendingIntent getReadPendingIntent();
		android::app::RemoteInput getRemoteInput();
		android::app::PendingIntent getReplyPendingIntent();
	};
} // namespace android::app

