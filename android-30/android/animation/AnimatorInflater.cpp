#include "./Animator.hpp"
#include "./StateListAnimator.hpp"
#include "../content/Context.hpp"
#include "./AnimatorInflater.hpp"

namespace android::animation
{
	// Fields
	
	// QJniObject forward
	AnimatorInflater::AnimatorInflater(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	AnimatorInflater::AnimatorInflater()
		: JObject(
			"android.animation.AnimatorInflater",
			"()V"
		) {}
	
	// Methods
	android::animation::Animator AnimatorInflater::loadAnimator(android::content::Context arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.animation.AnimatorInflater",
			"loadAnimator",
			"(Landroid/content/Context;I)Landroid/animation/Animator;",
			arg0.object(),
			arg1
		);
	}
	android::animation::StateListAnimator AnimatorInflater::loadStateListAnimator(android::content::Context arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.animation.AnimatorInflater",
			"loadStateListAnimator",
			"(Landroid/content/Context;I)Landroid/animation/StateListAnimator;",
			arg0.object(),
			arg1
		);
	}
} // namespace android::animation

