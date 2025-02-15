#include "./AudioMetadata_Format.hpp"

namespace android::media
{
	// Fields
	JObject AudioMetadata_Format::KEY_ATMOS_PRESENT()
	{
		return getStaticObjectField(
			"android.media.AudioMetadata$Format",
			"KEY_ATMOS_PRESENT",
			"Landroid/media/AudioMetadata$Key;"
		);
	}
	JObject AudioMetadata_Format::KEY_AUDIO_ENCODING()
	{
		return getStaticObjectField(
			"android.media.AudioMetadata$Format",
			"KEY_AUDIO_ENCODING",
			"Landroid/media/AudioMetadata$Key;"
		);
	}
	JObject AudioMetadata_Format::KEY_BIT_RATE()
	{
		return getStaticObjectField(
			"android.media.AudioMetadata$Format",
			"KEY_BIT_RATE",
			"Landroid/media/AudioMetadata$Key;"
		);
	}
	JObject AudioMetadata_Format::KEY_BIT_WIDTH()
	{
		return getStaticObjectField(
			"android.media.AudioMetadata$Format",
			"KEY_BIT_WIDTH",
			"Landroid/media/AudioMetadata$Key;"
		);
	}
	JObject AudioMetadata_Format::KEY_CHANNEL_MASK()
	{
		return getStaticObjectField(
			"android.media.AudioMetadata$Format",
			"KEY_CHANNEL_MASK",
			"Landroid/media/AudioMetadata$Key;"
		);
	}
	JObject AudioMetadata_Format::KEY_MIME()
	{
		return getStaticObjectField(
			"android.media.AudioMetadata$Format",
			"KEY_MIME",
			"Landroid/media/AudioMetadata$Key;"
		);
	}
	JObject AudioMetadata_Format::KEY_SAMPLE_RATE()
	{
		return getStaticObjectField(
			"android.media.AudioMetadata$Format",
			"KEY_SAMPLE_RATE",
			"Landroid/media/AudioMetadata$Key;"
		);
	}
	
	// QJniObject forward
	AudioMetadata_Format::AudioMetadata_Format(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::media

