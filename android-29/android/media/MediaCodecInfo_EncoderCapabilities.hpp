#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::util
{
	class Range;
}

namespace android::media
{
	class MediaCodecInfo_EncoderCapabilities : public __JniBaseClass
	{
	public:
		// Fields
		static jint BITRATE_MODE_CBR();
		static jint BITRATE_MODE_CQ();
		static jint BITRATE_MODE_VBR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaCodecInfo_EncoderCapabilities(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaCodecInfo_EncoderCapabilities(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		QAndroidJniObject getComplexityRange();
		QAndroidJniObject getQualityRange();
		jboolean isBitrateModeSupported(jint arg0);
	};
} // namespace android::media

