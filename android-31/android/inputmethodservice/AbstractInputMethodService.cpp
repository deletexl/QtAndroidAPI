#include "../../JArray.hpp"
#include "../content/Intent.hpp"
#include "./AbstractInputMethodService_AbstractInputMethodImpl.hpp"
#include "./AbstractInputMethodService_AbstractInputMethodSessionImpl.hpp"
#include "../view/KeyEvent_DispatcherState.hpp"
#include "../view/MotionEvent.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/PrintWriter.hpp"
#include "./AbstractInputMethodService.hpp"

namespace android::inputmethodservice
{
	// Fields
	
	// QJniObject forward
	AbstractInputMethodService::AbstractInputMethodService(QJniObject obj) : android::app::Service(obj) {}
	
	// Constructors
	AbstractInputMethodService::AbstractInputMethodService()
		: android::app::Service(
			"android.inputmethodservice.AbstractInputMethodService",
			"()V"
		) {}
	
	// Methods
	android::view::KeyEvent_DispatcherState AbstractInputMethodService::getKeyDispatcherState() const
	{
		return callObjectMethod(
			"getKeyDispatcherState",
			"()Landroid/view/KeyEvent$DispatcherState;"
		);
	}
	jboolean AbstractInputMethodService::isUiContext() const
	{
		return callMethod<jboolean>(
			"isUiContext",
			"()Z"
		);
	}
	JObject AbstractInputMethodService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl AbstractInputMethodService::onCreateInputMethodInterface() const
	{
		return callObjectMethod(
			"onCreateInputMethodInterface",
			"()Landroid/inputmethodservice/AbstractInputMethodService$AbstractInputMethodImpl;"
		);
	}
	android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl AbstractInputMethodService::onCreateInputMethodSessionInterface() const
	{
		return callObjectMethod(
			"onCreateInputMethodSessionInterface",
			"()Landroid/inputmethodservice/AbstractInputMethodService$AbstractInputMethodSessionImpl;"
		);
	}
	jboolean AbstractInputMethodService::onGenericMotionEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean AbstractInputMethodService::onTrackballEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
} // namespace android::inputmethodservice

