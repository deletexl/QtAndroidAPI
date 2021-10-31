#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class SubtitleData : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SubtitleData(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SubtitleData(QAndroidJniObject obj);
		
		// Constructors
		SubtitleData(jint arg0, jlong arg1, jlong arg2, jbyteArray arg3);
		
		// Methods
		jbyteArray getData();
		jlong getDurationUs();
		jlong getStartTimeUs();
		jint getTrackIndex();
	};
} // namespace android::media
