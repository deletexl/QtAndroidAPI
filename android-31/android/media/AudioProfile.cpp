#include "../../JIntArray.hpp"
#include "../../JString.hpp"
#include "./AudioProfile.hpp"

namespace android::media
{
	// Fields
	jint AudioProfile::AUDIO_ENCAPSULATION_TYPE_IEC61937()
	{
		return getStaticField<jint>(
			"android.media.AudioProfile",
			"AUDIO_ENCAPSULATION_TYPE_IEC61937"
		);
	}
	jint AudioProfile::AUDIO_ENCAPSULATION_TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.media.AudioProfile",
			"AUDIO_ENCAPSULATION_TYPE_NONE"
		);
	}
	
	// QJniObject forward
	AudioProfile::AudioProfile(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JIntArray AudioProfile::getChannelIndexMasks() const
	{
		return callObjectMethod(
			"getChannelIndexMasks",
			"()[I"
		);
	}
	JIntArray AudioProfile::getChannelMasks() const
	{
		return callObjectMethod(
			"getChannelMasks",
			"()[I"
		);
	}
	jint AudioProfile::getEncapsulationType() const
	{
		return callMethod<jint>(
			"getEncapsulationType",
			"()I"
		);
	}
	jint AudioProfile::getFormat() const
	{
		return callMethod<jint>(
			"getFormat",
			"()I"
		);
	}
	JIntArray AudioProfile::getSampleRates() const
	{
		return callObjectMethod(
			"getSampleRates",
			"()[I"
		);
	}
	JString AudioProfile::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media

