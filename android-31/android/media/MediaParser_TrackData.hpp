#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::media
{
	class DrmInitData;
}
namespace android::media
{
	class MediaFormat;
}

namespace android::media
{
	class MediaParser_TrackData : public __JniBaseClass
	{
	public:
		// Fields
		android::media::DrmInitData drmInitData();
		android::media::MediaFormat mediaFormat();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaParser_TrackData(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaParser_TrackData(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::media
