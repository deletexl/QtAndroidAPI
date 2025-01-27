#include "../../os/Bundle.hpp"
#include "../../os/Message.hpp"
#include "../View.hpp"
#include "../../../JString.hpp"
#include "./AccessibilityRequestPreparer.hpp"

namespace android::view::accessibility
{
	// Fields
	jint AccessibilityRequestPreparer::REQUEST_TYPE_EXTRA_DATA()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityRequestPreparer",
			"REQUEST_TYPE_EXTRA_DATA"
		);
	}
	
	// QJniObject forward
	AccessibilityRequestPreparer::AccessibilityRequestPreparer(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	AccessibilityRequestPreparer::AccessibilityRequestPreparer(android::view::View arg0, jint arg1)
		: JObject(
			"android.view.accessibility.AccessibilityRequestPreparer",
			"(Landroid/view/View;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	android::view::View AccessibilityRequestPreparer::getView() const
	{
		return callObjectMethod(
			"getView",
			"()Landroid/view/View;"
		);
	}
	void AccessibilityRequestPreparer::onPrepareExtraData(jint arg0, JString arg1, android::os::Bundle arg2, android::os::Message arg3) const
	{
		callMethod<void>(
			"onPrepareExtraData",
			"(ILjava/lang/String;Landroid/os/Bundle;Landroid/os/Message;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object()
		);
	}
} // namespace android::view::accessibility

