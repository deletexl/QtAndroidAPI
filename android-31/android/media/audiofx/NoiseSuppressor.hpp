#pragma once

#include "./AudioEffect.hpp"

namespace android::media::audiofx
{
	class NoiseSuppressor : public android::media::audiofx::AudioEffect
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NoiseSuppressor(const char *className, const char *sig, Ts...agv) : android::media::audiofx::AudioEffect(className, sig, std::forward<Ts>(agv)...) {}
		NoiseSuppressor(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::media::audiofx::NoiseSuppressor create(jint arg0);
		static jboolean isAvailable();
	};
} // namespace android::media::audiofx

