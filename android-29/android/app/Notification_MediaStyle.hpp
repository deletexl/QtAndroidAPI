#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Notification_Style.hpp"

namespace android::app
{
	class Notification_Builder;
}
namespace android::media::session
{
	class MediaSession_Token;
}

namespace android::app
{
	class Notification_MediaStyle : public android::app::Notification_Style
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Notification_MediaStyle(const char *className, const char *sig, Ts...agv) : android::app::Notification_Style(className, sig, std::forward<Ts>(agv)...) {}
		Notification_MediaStyle(QAndroidJniObject obj);
		
		// Constructors
		Notification_MediaStyle();
		Notification_MediaStyle(android::app::Notification_Builder arg0);
		
		// Methods
		QAndroidJniObject setMediaSession(android::media::session::MediaSession_Token arg0);
		QAndroidJniObject setShowActionsInCompactView(jintArray arg0);
	};
} // namespace android::app

