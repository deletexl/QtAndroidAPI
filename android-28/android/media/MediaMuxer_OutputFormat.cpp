#include "./MediaMuxer_OutputFormat.hpp"

namespace android::media
{
	// Fields
	jint MediaMuxer_OutputFormat::MUXER_OUTPUT_3GPP()
	{
		return getStaticField<jint>(
			"android.media.MediaMuxer$OutputFormat",
			"MUXER_OUTPUT_3GPP"
		);
	}
	jint MediaMuxer_OutputFormat::MUXER_OUTPUT_HEIF()
	{
		return getStaticField<jint>(
			"android.media.MediaMuxer$OutputFormat",
			"MUXER_OUTPUT_HEIF"
		);
	}
	jint MediaMuxer_OutputFormat::MUXER_OUTPUT_MPEG_4()
	{
		return getStaticField<jint>(
			"android.media.MediaMuxer$OutputFormat",
			"MUXER_OUTPUT_MPEG_4"
		);
	}
	jint MediaMuxer_OutputFormat::MUXER_OUTPUT_WEBM()
	{
		return getStaticField<jint>(
			"android.media.MediaMuxer$OutputFormat",
			"MUXER_OUTPUT_WEBM"
		);
	}
	
	// QJniObject forward
	MediaMuxer_OutputFormat::MediaMuxer_OutputFormat(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::media

