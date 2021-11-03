#include "../view/View.hpp"
#include "./FragmentContainer.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	FragmentContainer::FragmentContainer(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	FragmentContainer::FragmentContainer()
		: JObject(
			"android.app.FragmentContainer",
			"()V"
		) {}
	
	// Methods
	android::view::View FragmentContainer::onFindViewById(jint arg0)
	{
		return callObjectMethod(
			"onFindViewById",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	jboolean FragmentContainer::onHasView()
	{
		return callMethod<jboolean>(
			"onHasView",
			"()Z"
		);
	}
} // namespace android::app

