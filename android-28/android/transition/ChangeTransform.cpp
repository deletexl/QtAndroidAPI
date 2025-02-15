#include "../../JArray.hpp"
#include "../animation/Animator.hpp"
#include "../content/Context.hpp"
#include "./TransitionValues.hpp"
#include "../view/ViewGroup.hpp"
#include "./ChangeTransform.hpp"

namespace android::transition
{
	// Fields
	
	// QJniObject forward
	ChangeTransform::ChangeTransform(QJniObject obj) : android::transition::Transition(obj) {}
	
	// Constructors
	ChangeTransform::ChangeTransform()
		: android::transition::Transition(
			"android.transition.ChangeTransform",
			"()V"
		) {}
	ChangeTransform::ChangeTransform(android::content::Context arg0, JObject arg1)
		: android::transition::Transition(
			"android.transition.ChangeTransform",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	void ChangeTransform::captureEndValues(android::transition::TransitionValues arg0) const
	{
		callMethod<void>(
			"captureEndValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.object()
		);
	}
	void ChangeTransform::captureStartValues(android::transition::TransitionValues arg0) const
	{
		callMethod<void>(
			"captureStartValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.object()
		);
	}
	android::animation::Animator ChangeTransform::createAnimator(android::view::ViewGroup arg0, android::transition::TransitionValues arg1, android::transition::TransitionValues arg2) const
	{
		return callObjectMethod(
			"createAnimator",
			"(Landroid/view/ViewGroup;Landroid/transition/TransitionValues;Landroid/transition/TransitionValues;)Landroid/animation/Animator;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	jboolean ChangeTransform::getReparent() const
	{
		return callMethod<jboolean>(
			"getReparent",
			"()Z"
		);
	}
	jboolean ChangeTransform::getReparentWithOverlay() const
	{
		return callMethod<jboolean>(
			"getReparentWithOverlay",
			"()Z"
		);
	}
	JArray ChangeTransform::getTransitionProperties() const
	{
		return callObjectMethod(
			"getTransitionProperties",
			"()[Ljava/lang/String;"
		);
	}
	void ChangeTransform::setReparent(jboolean arg0) const
	{
		callMethod<void>(
			"setReparent",
			"(Z)V",
			arg0
		);
	}
	void ChangeTransform::setReparentWithOverlay(jboolean arg0) const
	{
		callMethod<void>(
			"setReparentWithOverlay",
			"(Z)V",
			arg0
		);
	}
} // namespace android::transition

