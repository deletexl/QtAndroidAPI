#include "../../content/ComponentName.hpp"
#include "../../graphics/Rect.hpp"
#include "../../service/autofill/UserData.hpp"
#include "../View.hpp"
#include "./AutofillId.hpp"
#include "./AutofillManager_AutofillCallback.hpp"
#include "./AutofillValue.hpp"
#include "./AutofillManager.hpp"

namespace android::view::autofill
{
	// Fields
	jstring AutofillManager::EXTRA_ASSIST_STRUCTURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.autofill.AutofillManager",
			"EXTRA_ASSIST_STRUCTURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AutofillManager::EXTRA_AUTHENTICATION_RESULT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.autofill.AutofillManager",
			"EXTRA_AUTHENTICATION_RESULT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AutofillManager::EXTRA_CLIENT_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.autofill.AutofillManager",
			"EXTRA_CLIENT_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	AutofillManager::AutofillManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void AutofillManager::cancel()
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	void AutofillManager::commit()
	{
		callMethod<void>(
			"commit",
			"()V"
		);
	}
	void AutofillManager::disableAutofillServices()
	{
		callMethod<void>(
			"disableAutofillServices",
			"()V"
		);
	}
	QAndroidJniObject AutofillManager::getAutofillServiceComponentName()
	{
		return callObjectMethod(
			"getAutofillServiceComponentName",
			"()Landroid/content/ComponentName;"
		);
	}
	QAndroidJniObject AutofillManager::getAvailableFieldClassificationAlgorithms()
	{
		return callObjectMethod(
			"getAvailableFieldClassificationAlgorithms",
			"()Ljava/util/List;"
		);
	}
	jstring AutofillManager::getDefaultFieldClassificationAlgorithm()
	{
		return callObjectMethod(
			"getDefaultFieldClassificationAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject AutofillManager::getNextAutofillId()
	{
		return callObjectMethod(
			"getNextAutofillId",
			"()Landroid/view/autofill/AutofillId;"
		);
	}
	QAndroidJniObject AutofillManager::getUserData()
	{
		return callObjectMethod(
			"getUserData",
			"()Landroid/service/autofill/UserData;"
		);
	}
	jstring AutofillManager::getUserDataId()
	{
		return callObjectMethod(
			"getUserDataId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean AutofillManager::hasEnabledAutofillServices()
	{
		return callMethod<jboolean>(
			"hasEnabledAutofillServices",
			"()Z"
		);
	}
	jboolean AutofillManager::isAutofillSupported()
	{
		return callMethod<jboolean>(
			"isAutofillSupported",
			"()Z"
		);
	}
	jboolean AutofillManager::isEnabled()
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	jboolean AutofillManager::isFieldClassificationEnabled()
	{
		return callMethod<jboolean>(
			"isFieldClassificationEnabled",
			"()Z"
		);
	}
	void AutofillManager::notifyValueChanged(android::view::View arg0)
	{
		callMethod<void>(
			"notifyValueChanged",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void AutofillManager::notifyValueChanged(android::view::View arg0, jint arg1, android::view::autofill::AutofillValue arg2)
	{
		callMethod<void>(
			"notifyValueChanged",
			"(Landroid/view/View;ILandroid/view/autofill/AutofillValue;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	void AutofillManager::notifyViewClicked(android::view::View arg0)
	{
		callMethod<void>(
			"notifyViewClicked",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void AutofillManager::notifyViewClicked(android::view::View arg0, jint arg1)
	{
		callMethod<void>(
			"notifyViewClicked",
			"(Landroid/view/View;I)V",
			arg0.object(),
			arg1
		);
	}
	void AutofillManager::notifyViewEntered(android::view::View arg0)
	{
		callMethod<void>(
			"notifyViewEntered",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void AutofillManager::notifyViewEntered(android::view::View arg0, jint arg1, android::graphics::Rect arg2)
	{
		callMethod<void>(
			"notifyViewEntered",
			"(Landroid/view/View;ILandroid/graphics/Rect;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	void AutofillManager::notifyViewExited(android::view::View arg0)
	{
		callMethod<void>(
			"notifyViewExited",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void AutofillManager::notifyViewExited(android::view::View arg0, jint arg1)
	{
		callMethod<void>(
			"notifyViewExited",
			"(Landroid/view/View;I)V",
			arg0.object(),
			arg1
		);
	}
	void AutofillManager::notifyViewVisibilityChanged(android::view::View arg0, jboolean arg1)
	{
		callMethod<void>(
			"notifyViewVisibilityChanged",
			"(Landroid/view/View;Z)V",
			arg0.object(),
			arg1
		);
	}
	void AutofillManager::notifyViewVisibilityChanged(android::view::View arg0, jint arg1, jboolean arg2)
	{
		callMethod<void>(
			"notifyViewVisibilityChanged",
			"(Landroid/view/View;IZ)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void AutofillManager::registerCallback(android::view::autofill::AutofillManager_AutofillCallback arg0)
	{
		callMethod<void>(
			"registerCallback",
			"(Landroid/view/autofill/AutofillManager$AutofillCallback;)V",
			arg0.object()
		);
	}
	void AutofillManager::requestAutofill(android::view::View arg0)
	{
		callMethod<void>(
			"requestAutofill",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void AutofillManager::requestAutofill(android::view::View arg0, jint arg1, android::graphics::Rect arg2)
	{
		callMethod<void>(
			"requestAutofill",
			"(Landroid/view/View;ILandroid/graphics/Rect;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	void AutofillManager::setUserData(android::service::autofill::UserData arg0)
	{
		callMethod<void>(
			"setUserData",
			"(Landroid/service/autofill/UserData;)V",
			arg0.object()
		);
	}
	void AutofillManager::unregisterCallback(android::view::autofill::AutofillManager_AutofillCallback arg0)
	{
		callMethod<void>(
			"unregisterCallback",
			"(Landroid/view/autofill/AutofillManager$AutofillCallback;)V",
			arg0.object()
		);
	}
} // namespace android::view::autofill

