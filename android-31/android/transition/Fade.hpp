#pragma once

#include "./Visibility.hpp"

namespace android::animation
{
	class Animator;
}
namespace android::content
{
	class Context;
}
namespace android::transition
{
	class TransitionValues;
}
namespace android::view
{
	class View;
}
namespace android::view
{
	class ViewGroup;
}

namespace android::transition
{
	class Fade : public android::transition::Visibility
	{
	public:
		// Fields
		static jint IN();
		static jint OUT();
		
		// QJniObject forward
		template<typename ...Ts> explicit Fade(const char *className, const char *sig, Ts...agv) : android::transition::Visibility(className, sig, std::forward<Ts>(agv)...) {}
		Fade(QJniObject obj);
		
		// Constructors
		Fade();
		Fade(jint arg0);
		Fade(android::content::Context arg0, JObject arg1);
		
		// Methods
		void captureStartValues(android::transition::TransitionValues arg0) const;
		android::animation::Animator onAppear(android::view::ViewGroup arg0, android::view::View arg1, android::transition::TransitionValues arg2, android::transition::TransitionValues arg3) const;
		android::animation::Animator onDisappear(android::view::ViewGroup arg0, android::view::View arg1, android::transition::TransitionValues arg2, android::transition::TransitionValues arg3) const;
	};
} // namespace android::transition

