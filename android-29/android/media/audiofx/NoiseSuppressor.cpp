#include "./NoiseSuppressor.hpp"

namespace android::media::audiofx
{
	// Fields
	
	// QJniObject forward
	NoiseSuppressor::NoiseSuppressor(QJniObject obj) : android::media::audiofx::AudioEffect(obj) {}
	
	// Constructors
	
	// Methods
	android::media::audiofx::NoiseSuppressor NoiseSuppressor::create(jint arg0)
	{
		return callStaticObjectMethod(
			"android.media.audiofx.NoiseSuppressor",
			"create",
			"(I)Landroid/media/audiofx/NoiseSuppressor;",
			arg0
		);
	}
	jboolean NoiseSuppressor::isAvailable()
	{
		return callStaticMethod<jboolean>(
			"android.media.audiofx.NoiseSuppressor",
			"isAvailable",
			"()Z"
		);
	}
} // namespace android::media::audiofx

