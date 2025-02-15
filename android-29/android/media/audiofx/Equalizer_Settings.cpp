#include "../../../JShortArray.hpp"
#include "../../../JString.hpp"
#include "./Equalizer_Settings.hpp"

namespace android::media::audiofx
{
	// Fields
	JShortArray Equalizer_Settings::bandLevels()
	{
		return getObjectField(
			"bandLevels",
			"[S"
		);
	}
	jshort Equalizer_Settings::curPreset()
	{
		return getField<jshort>(
			"curPreset"
		);
	}
	jshort Equalizer_Settings::numBands()
	{
		return getField<jshort>(
			"numBands"
		);
	}
	
	// QJniObject forward
	Equalizer_Settings::Equalizer_Settings(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Equalizer_Settings::Equalizer_Settings()
		: JObject(
			"android.media.audiofx.Equalizer$Settings",
			"()V"
		) {}
	Equalizer_Settings::Equalizer_Settings(JString arg0)
		: JObject(
			"android.media.audiofx.Equalizer$Settings",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	JString Equalizer_Settings::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media::audiofx

