#pragma once

#include "./BaseInterpolator.hpp"

namespace android::content
{
	class Context;
}

namespace android::view::animation
{
	class CycleInterpolator : public android::view::animation::BaseInterpolator
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CycleInterpolator(const char *className, const char *sig, Ts...agv) : android::view::animation::BaseInterpolator(className, sig, std::forward<Ts>(agv)...) {}
		CycleInterpolator(QJniObject obj);
		
		// Constructors
		CycleInterpolator(jfloat arg0);
		CycleInterpolator(android::content::Context arg0, JObject arg1);
		
		// Methods
		jfloat getInterpolation(jfloat arg0) const;
	};
} // namespace android::view::animation

