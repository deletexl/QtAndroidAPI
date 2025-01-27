#include "../../JArray.hpp"
#include "../graphics/Rect.hpp"
#include "./InputMethodService.hpp"
#include "../os/Bundle.hpp"
#include "../view/inputmethod/CursorAnchorInfo.hpp"
#include "../view/inputmethod/ExtractedText.hpp"
#include "../../JString.hpp"
#include "./InputMethodService_InputMethodSessionImpl.hpp"

namespace android::inputmethodservice
{
	// Fields
	
	// QJniObject forward
	InputMethodService_InputMethodSessionImpl::InputMethodService_InputMethodSessionImpl(QJniObject obj) : android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl(obj) {}
	
	// Constructors
	InputMethodService_InputMethodSessionImpl::InputMethodService_InputMethodSessionImpl(android::inputmethodservice::InputMethodService arg0)
		: android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl(
			"android.inputmethodservice.InputMethodService$InputMethodSessionImpl",
			"(Landroid/inputmethodservice/InputMethodService;)V",
			arg0.object()
		) {}
	
	// Methods
	void InputMethodService_InputMethodSessionImpl::appPrivateCommand(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"appPrivateCommand",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void InputMethodService_InputMethodSessionImpl::displayCompletions(JArray arg0) const
	{
		callMethod<void>(
			"displayCompletions",
			"([Landroid/view/inputmethod/CompletionInfo;)V",
			arg0.object<jarray>()
		);
	}
	void InputMethodService_InputMethodSessionImpl::finishInput() const
	{
		callMethod<void>(
			"finishInput",
			"()V"
		);
	}
	void InputMethodService_InputMethodSessionImpl::toggleSoftInput(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"toggleSoftInput",
			"(II)V",
			arg0,
			arg1
		);
	}
	void InputMethodService_InputMethodSessionImpl::updateCursor(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"updateCursor",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	void InputMethodService_InputMethodSessionImpl::updateCursorAnchorInfo(android::view::inputmethod::CursorAnchorInfo arg0) const
	{
		callMethod<void>(
			"updateCursorAnchorInfo",
			"(Landroid/view/inputmethod/CursorAnchorInfo;)V",
			arg0.object()
		);
	}
	void InputMethodService_InputMethodSessionImpl::updateExtractedText(jint arg0, android::view::inputmethod::ExtractedText arg1) const
	{
		callMethod<void>(
			"updateExtractedText",
			"(ILandroid/view/inputmethod/ExtractedText;)V",
			arg0,
			arg1.object()
		);
	}
	void InputMethodService_InputMethodSessionImpl::updateSelection(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5) const
	{
		callMethod<void>(
			"updateSelection",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void InputMethodService_InputMethodSessionImpl::viewClicked(jboolean arg0) const
	{
		callMethod<void>(
			"viewClicked",
			"(Z)V",
			arg0
		);
	}
} // namespace android::inputmethodservice

