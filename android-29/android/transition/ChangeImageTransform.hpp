#pragma once

#include "./Transition.hpp"

class JArray;
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
	class ViewGroup;
}

namespace android::transition
{
	class ChangeImageTransform : public android::transition::Transition
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ChangeImageTransform(const char *className, const char *sig, Ts...agv) : android::transition::Transition(className, sig, std::forward<Ts>(agv)...) {}
		ChangeImageTransform(QJniObject obj);
		
		// Constructors
		ChangeImageTransform();
		ChangeImageTransform(android::content::Context arg0, JObject arg1);
		
		// Methods
		void captureEndValues(android::transition::TransitionValues arg0) const;
		void captureStartValues(android::transition::TransitionValues arg0) const;
		android::animation::Animator createAnimator(android::view::ViewGroup arg0, android::transition::TransitionValues arg1, android::transition::TransitionValues arg2) const;
		JArray getTransitionProperties() const;
	};
} // namespace android::transition

