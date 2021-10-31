#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::animation
{
	class Animator;
}
namespace android::animation
{
	class StateListAnimator;
}
namespace android::content
{
	class Context;
}

namespace android::animation
{
	class AnimatorInflater : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AnimatorInflater(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AnimatorInflater(QAndroidJniObject obj);
		
		// Constructors
		AnimatorInflater();
		
		// Methods
		static QAndroidJniObject loadAnimator(android::content::Context arg0, jint arg1);
		static QAndroidJniObject loadStateListAnimator(android::content::Context arg0, jint arg1);
	};
} // namespace android::animation

