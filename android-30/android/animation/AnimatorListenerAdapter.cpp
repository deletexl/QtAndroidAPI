#include "./Animator.hpp"
#include "./AnimatorListenerAdapter.hpp"

namespace android::animation
{
	// Fields
	
	// QJniObject forward
	AnimatorListenerAdapter::AnimatorListenerAdapter(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	AnimatorListenerAdapter::AnimatorListenerAdapter()
		: JObject(
			"android.animation.AnimatorListenerAdapter",
			"()V"
		) {}
	
	// Methods
	void AnimatorListenerAdapter::onAnimationCancel(android::animation::Animator arg0) const
	{
		callMethod<void>(
			"onAnimationCancel",
			"(Landroid/animation/Animator;)V",
			arg0.object()
		);
	}
	void AnimatorListenerAdapter::onAnimationEnd(android::animation::Animator arg0) const
	{
		callMethod<void>(
			"onAnimationEnd",
			"(Landroid/animation/Animator;)V",
			arg0.object()
		);
	}
	void AnimatorListenerAdapter::onAnimationPause(android::animation::Animator arg0) const
	{
		callMethod<void>(
			"onAnimationPause",
			"(Landroid/animation/Animator;)V",
			arg0.object()
		);
	}
	void AnimatorListenerAdapter::onAnimationRepeat(android::animation::Animator arg0) const
	{
		callMethod<void>(
			"onAnimationRepeat",
			"(Landroid/animation/Animator;)V",
			arg0.object()
		);
	}
	void AnimatorListenerAdapter::onAnimationResume(android::animation::Animator arg0) const
	{
		callMethod<void>(
			"onAnimationResume",
			"(Landroid/animation/Animator;)V",
			arg0.object()
		);
	}
	void AnimatorListenerAdapter::onAnimationStart(android::animation::Animator arg0) const
	{
		callMethod<void>(
			"onAnimationStart",
			"(Landroid/animation/Animator;)V",
			arg0.object()
		);
	}
} // namespace android::animation

