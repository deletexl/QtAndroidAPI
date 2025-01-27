#pragma once

#include "../JObject.hpp"

namespace android
{
	class R_anim : public JObject
	{
	public:
		// Fields
		static jint accelerate_decelerate_interpolator();
		static jint accelerate_interpolator();
		static jint anticipate_interpolator();
		static jint anticipate_overshoot_interpolator();
		static jint bounce_interpolator();
		static jint cycle_interpolator();
		static jint decelerate_interpolator();
		static jint fade_in();
		static jint fade_out();
		static jint linear_interpolator();
		static jint overshoot_interpolator();
		static jint slide_in_left();
		static jint slide_out_right();
		
		// QJniObject forward
		template<typename ...Ts> explicit R_anim(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		R_anim(QJniObject obj);
		
		// Constructors
		R_anim();
		
		// Methods
	};
} // namespace android

