#include "./VisibilitySetterAction.hpp"
#include "./VisibilitySetterAction_Builder.hpp"

namespace android::service::autofill
{
	// Fields
	
	// QAndroidJniObject forward
	VisibilitySetterAction_Builder::VisibilitySetterAction_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	VisibilitySetterAction_Builder::VisibilitySetterAction_Builder(jint arg0, jint arg1)
		: __JniBaseClass(
			"android.service.autofill.VisibilitySetterAction$Builder",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	QAndroidJniObject VisibilitySetterAction_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/service/autofill/VisibilitySetterAction;"
		);
	}
	QAndroidJniObject VisibilitySetterAction_Builder::setVisibility(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"setVisibility",
			"(II)Landroid/service/autofill/VisibilitySetterAction$Builder;",
			arg0,
			arg1
		);
	}
} // namespace android::service::autofill

