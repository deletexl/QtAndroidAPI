#pragma once

#include "./AudioEffect.hpp"

namespace android::media::audiofx
{
	class PresetReverb_Settings;
}

namespace android::media::audiofx
{
	class PresetReverb : public android::media::audiofx::AudioEffect
	{
	public:
		// Fields
		static jint PARAM_PRESET();
		static jshort PRESET_LARGEHALL();
		static jshort PRESET_LARGEROOM();
		static jshort PRESET_MEDIUMHALL();
		static jshort PRESET_MEDIUMROOM();
		static jshort PRESET_NONE();
		static jshort PRESET_PLATE();
		static jshort PRESET_SMALLROOM();
		
		// QJniObject forward
		template<typename ...Ts> explicit PresetReverb(const char *className, const char *sig, Ts...agv) : android::media::audiofx::AudioEffect(className, sig, std::forward<Ts>(agv)...) {}
		PresetReverb(QJniObject obj);
		
		// Constructors
		PresetReverb(jint arg0, jint arg1);
		
		// Methods
		jshort getPreset() const;
		android::media::audiofx::PresetReverb_Settings getProperties() const;
		void setParameterListener(JObject arg0) const;
		void setPreset(jshort arg0) const;
		void setProperties(android::media::audiofx::PresetReverb_Settings arg0) const;
	};
} // namespace android::media::audiofx

