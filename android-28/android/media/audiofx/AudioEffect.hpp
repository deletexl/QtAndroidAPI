#pragma once

#include "../../../JObject.hpp"

class JArray;
namespace android::media::audiofx
{
	class AudioEffect_Descriptor;
}
class JString;
namespace java::util
{
	class UUID;
}

namespace android::media::audiofx
{
	class AudioEffect : public JObject
	{
	public:
		// Fields
		static JString ACTION_CLOSE_AUDIO_EFFECT_CONTROL_SESSION();
		static JString ACTION_DISPLAY_AUDIO_EFFECT_CONTROL_PANEL();
		static JString ACTION_OPEN_AUDIO_EFFECT_CONTROL_SESSION();
		static jint ALREADY_EXISTS();
		static jint CONTENT_TYPE_GAME();
		static jint CONTENT_TYPE_MOVIE();
		static jint CONTENT_TYPE_MUSIC();
		static jint CONTENT_TYPE_VOICE();
		static JString EFFECT_AUXILIARY();
		static JString EFFECT_INSERT();
		static java::util::UUID EFFECT_TYPE_AEC();
		static java::util::UUID EFFECT_TYPE_AGC();
		static java::util::UUID EFFECT_TYPE_BASS_BOOST();
		static java::util::UUID EFFECT_TYPE_DYNAMICS_PROCESSING();
		static java::util::UUID EFFECT_TYPE_ENV_REVERB();
		static java::util::UUID EFFECT_TYPE_EQUALIZER();
		static java::util::UUID EFFECT_TYPE_LOUDNESS_ENHANCER();
		static java::util::UUID EFFECT_TYPE_NS();
		static java::util::UUID EFFECT_TYPE_PRESET_REVERB();
		static java::util::UUID EFFECT_TYPE_VIRTUALIZER();
		static jint ERROR();
		static jint ERROR_BAD_VALUE();
		static jint ERROR_DEAD_OBJECT();
		static jint ERROR_INVALID_OPERATION();
		static jint ERROR_NO_INIT();
		static jint ERROR_NO_MEMORY();
		static JString EXTRA_AUDIO_SESSION();
		static JString EXTRA_CONTENT_TYPE();
		static JString EXTRA_PACKAGE_NAME();
		static jint SUCCESS();
		
		// QJniObject forward
		template<typename ...Ts> explicit AudioEffect(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AudioEffect(QJniObject obj);
		
		// Constructors
		
		// Methods
		static JArray queryEffects();
		android::media::audiofx::AudioEffect_Descriptor getDescriptor() const;
		jboolean getEnabled() const;
		jint getId() const;
		jboolean hasControl() const;
		void release() const;
		void setControlStatusListener(JObject arg0) const;
		void setEnableStatusListener(JObject arg0) const;
		jint setEnabled(jboolean arg0) const;
	};
} // namespace android::media::audiofx

