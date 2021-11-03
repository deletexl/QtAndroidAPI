#include "./ScaleGestureDetector.hpp"
#include "./ScaleGestureDetector_SimpleOnScaleGestureListener.hpp"

namespace android::view
{
	// Fields
	
	// QAndroidJniObject forward
	ScaleGestureDetector_SimpleOnScaleGestureListener::ScaleGestureDetector_SimpleOnScaleGestureListener(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ScaleGestureDetector_SimpleOnScaleGestureListener::ScaleGestureDetector_SimpleOnScaleGestureListener()
		: JObject(
			"android.view.ScaleGestureDetector$SimpleOnScaleGestureListener",
			"()V"
		) {}
	
	// Methods
	jboolean ScaleGestureDetector_SimpleOnScaleGestureListener::onScale(android::view::ScaleGestureDetector arg0)
	{
		return callMethod<jboolean>(
			"onScale",
			"(Landroid/view/ScaleGestureDetector;)Z",
			arg0.object()
		);
	}
	jboolean ScaleGestureDetector_SimpleOnScaleGestureListener::onScaleBegin(android::view::ScaleGestureDetector arg0)
	{
		return callMethod<jboolean>(
			"onScaleBegin",
			"(Landroid/view/ScaleGestureDetector;)Z",
			arg0.object()
		);
	}
	void ScaleGestureDetector_SimpleOnScaleGestureListener::onScaleEnd(android::view::ScaleGestureDetector arg0)
	{
		callMethod<void>(
			"onScaleEnd",
			"(Landroid/view/ScaleGestureDetector;)V",
			arg0.object()
		);
	}
} // namespace android::view

