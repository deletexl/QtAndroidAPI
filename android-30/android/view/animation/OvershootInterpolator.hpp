#pragma once

#include "./BaseInterpolator.hpp"

namespace android::content
{
	class Context;
}

namespace android::view::animation
{
	class OvershootInterpolator : public android::view::animation::BaseInterpolator
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit OvershootInterpolator(const char *className, const char *sig, Ts...agv) : android::view::animation::BaseInterpolator(className, sig, std::forward<Ts>(agv)...) {}
		OvershootInterpolator(QJniObject obj);
		
		// Constructors
		OvershootInterpolator();
		OvershootInterpolator(jfloat arg0);
		OvershootInterpolator(android::content::Context arg0, JObject arg1);
		
		// Methods
		jfloat getInterpolation(jfloat arg0) const;
	};
} // namespace android::view::animation

