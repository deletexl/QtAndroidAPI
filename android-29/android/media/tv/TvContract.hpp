#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class Context;
}
namespace android::net
{
	class Uri;
}

namespace android::media::tv
{
	class TvContract : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_INITIALIZE_PROGRAMS();
		static jstring ACTION_PREVIEW_PROGRAM_ADDED_TO_WATCH_NEXT();
		static jstring ACTION_PREVIEW_PROGRAM_BROWSABLE_DISABLED();
		static jstring ACTION_REQUEST_CHANNEL_BROWSABLE();
		static jstring ACTION_WATCH_NEXT_PROGRAM_BROWSABLE_DISABLED();
		static jstring AUTHORITY();
		static jstring EXTRA_CHANNEL_ID();
		static jstring EXTRA_PREVIEW_PROGRAM_ID();
		static jstring EXTRA_WATCH_NEXT_PROGRAM_ID();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TvContract(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TvContract(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject buildChannelLogoUri(android::net::Uri arg0);
		static QAndroidJniObject buildChannelLogoUri(jlong arg0);
		static QAndroidJniObject buildChannelUri(jlong arg0);
		static QAndroidJniObject buildChannelUriForPassthroughInput(jstring arg0);
		static QAndroidJniObject buildChannelsUriForInput(jstring arg0);
		static jstring buildInputId(android::content::ComponentName arg0);
		static QAndroidJniObject buildPreviewProgramUri(jlong arg0);
		static QAndroidJniObject buildPreviewProgramsUriForChannel(android::net::Uri arg0);
		static QAndroidJniObject buildPreviewProgramsUriForChannel(jlong arg0);
		static QAndroidJniObject buildProgramUri(jlong arg0);
		static QAndroidJniObject buildProgramsUriForChannel(android::net::Uri arg0);
		static QAndroidJniObject buildProgramsUriForChannel(jlong arg0);
		static QAndroidJniObject buildProgramsUriForChannel(android::net::Uri arg0, jlong arg1, jlong arg2);
		static QAndroidJniObject buildProgramsUriForChannel(jlong arg0, jlong arg1, jlong arg2);
		static QAndroidJniObject buildRecordedProgramUri(jlong arg0);
		static QAndroidJniObject buildWatchNextProgramUri(jlong arg0);
		static jboolean isChannelUri(android::net::Uri arg0);
		static jboolean isChannelUriForPassthroughInput(android::net::Uri arg0);
		static jboolean isChannelUriForTunerInput(android::net::Uri arg0);
		static jboolean isProgramUri(android::net::Uri arg0);
		static jboolean isRecordedProgramUri(android::net::Uri arg0);
		static void requestChannelBrowsable(android::content::Context arg0, jlong arg1);
	};
} // namespace android::media::tv

