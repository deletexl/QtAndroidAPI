#include "../../JIntArray.hpp"
#include "../../JObjectArray.hpp"
#include "../../JArray.hpp"
#include "../animation/Animator.hpp"
#include "./Activity.hpp"
#include "./Fragment_SavedState.hpp"
#include "./FragmentManager.hpp"
#include "./LoaderManager.hpp"
#include "./SharedElementCallback.hpp"
#include "../content/Context.hpp"
#include "../content/Intent.hpp"
#include "../content/IntentSender.hpp"
#include "../content/res/Configuration.hpp"
#include "../content/res/Resources.hpp"
#include "../os/Bundle.hpp"
#include "../transition/Transition.hpp"
#include "../view/LayoutInflater.hpp"
#include "../view/MenuInflater.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/PrintWriter.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Fragment.hpp"

namespace android::app
{
	// Fields
	
	// QJniObject forward
	Fragment::Fragment(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Fragment::Fragment()
		: JObject(
			"android.app.Fragment",
			"()V"
		) {}
	
	// Methods
	android::app::Fragment Fragment::instantiate(android::content::Context arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.app.Fragment",
			"instantiate",
			"(Landroid/content/Context;Ljava/lang/String;)Landroid/app/Fragment;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	android::app::Fragment Fragment::instantiate(android::content::Context arg0, JString arg1, android::os::Bundle arg2)
	{
		return callStaticObjectMethod(
			"android.app.Fragment",
			"instantiate",
			"(Landroid/content/Context;Ljava/lang/String;Landroid/os/Bundle;)Landroid/app/Fragment;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	void Fragment::dump(JString arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, JArray arg3) const
	{
		callMethod<void>(
			"dump",
			"(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object(),
			arg3.object<jarray>()
		);
	}
	jboolean Fragment::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::app::Activity Fragment::getActivity() const
	{
		return callObjectMethod(
			"getActivity",
			"()Landroid/app/Activity;"
		);
	}
	jboolean Fragment::getAllowEnterTransitionOverlap() const
	{
		return callMethod<jboolean>(
			"getAllowEnterTransitionOverlap",
			"()Z"
		);
	}
	jboolean Fragment::getAllowReturnTransitionOverlap() const
	{
		return callMethod<jboolean>(
			"getAllowReturnTransitionOverlap",
			"()Z"
		);
	}
	android::os::Bundle Fragment::getArguments() const
	{
		return callObjectMethod(
			"getArguments",
			"()Landroid/os/Bundle;"
		);
	}
	android::app::FragmentManager Fragment::getChildFragmentManager() const
	{
		return callObjectMethod(
			"getChildFragmentManager",
			"()Landroid/app/FragmentManager;"
		);
	}
	android::content::Context Fragment::getContext() const
	{
		return callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	android::transition::Transition Fragment::getEnterTransition() const
	{
		return callObjectMethod(
			"getEnterTransition",
			"()Landroid/transition/Transition;"
		);
	}
	android::transition::Transition Fragment::getExitTransition() const
	{
		return callObjectMethod(
			"getExitTransition",
			"()Landroid/transition/Transition;"
		);
	}
	android::app::FragmentManager Fragment::getFragmentManager() const
	{
		return callObjectMethod(
			"getFragmentManager",
			"()Landroid/app/FragmentManager;"
		);
	}
	JObject Fragment::getHost() const
	{
		return callObjectMethod(
			"getHost",
			"()Ljava/lang/Object;"
		);
	}
	jint Fragment::getId() const
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	android::view::LayoutInflater Fragment::getLayoutInflater() const
	{
		return callObjectMethod(
			"getLayoutInflater",
			"()Landroid/view/LayoutInflater;"
		);
	}
	android::app::LoaderManager Fragment::getLoaderManager() const
	{
		return callObjectMethod(
			"getLoaderManager",
			"()Landroid/app/LoaderManager;"
		);
	}
	android::app::Fragment Fragment::getParentFragment() const
	{
		return callObjectMethod(
			"getParentFragment",
			"()Landroid/app/Fragment;"
		);
	}
	android::transition::Transition Fragment::getReenterTransition() const
	{
		return callObjectMethod(
			"getReenterTransition",
			"()Landroid/transition/Transition;"
		);
	}
	android::content::res::Resources Fragment::getResources() const
	{
		return callObjectMethod(
			"getResources",
			"()Landroid/content/res/Resources;"
		);
	}
	jboolean Fragment::getRetainInstance() const
	{
		return callMethod<jboolean>(
			"getRetainInstance",
			"()Z"
		);
	}
	android::transition::Transition Fragment::getReturnTransition() const
	{
		return callObjectMethod(
			"getReturnTransition",
			"()Landroid/transition/Transition;"
		);
	}
	android::transition::Transition Fragment::getSharedElementEnterTransition() const
	{
		return callObjectMethod(
			"getSharedElementEnterTransition",
			"()Landroid/transition/Transition;"
		);
	}
	android::transition::Transition Fragment::getSharedElementReturnTransition() const
	{
		return callObjectMethod(
			"getSharedElementReturnTransition",
			"()Landroid/transition/Transition;"
		);
	}
	JString Fragment::getString(jint arg0) const
	{
		return callObjectMethod(
			"getString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JString Fragment::getString(jint arg0, JObjectArray arg1) const
	{
		return callObjectMethod(
			"getString",
			"(I[Ljava/lang/Object;)Ljava/lang/String;",
			arg0,
			arg1.object<jobjectArray>()
		);
	}
	JString Fragment::getTag() const
	{
		return callObjectMethod(
			"getTag",
			"()Ljava/lang/String;"
		);
	}
	android::app::Fragment Fragment::getTargetFragment() const
	{
		return callObjectMethod(
			"getTargetFragment",
			"()Landroid/app/Fragment;"
		);
	}
	jint Fragment::getTargetRequestCode() const
	{
		return callMethod<jint>(
			"getTargetRequestCode",
			"()I"
		);
	}
	JString Fragment::getText(jint arg0) const
	{
		return callObjectMethod(
			"getText",
			"(I)Ljava/lang/CharSequence;",
			arg0
		);
	}
	jboolean Fragment::getUserVisibleHint() const
	{
		return callMethod<jboolean>(
			"getUserVisibleHint",
			"()Z"
		);
	}
	android::view::View Fragment::getView() const
	{
		return callObjectMethod(
			"getView",
			"()Landroid/view/View;"
		);
	}
	jint Fragment::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Fragment::isAdded() const
	{
		return callMethod<jboolean>(
			"isAdded",
			"()Z"
		);
	}
	jboolean Fragment::isDetached() const
	{
		return callMethod<jboolean>(
			"isDetached",
			"()Z"
		);
	}
	jboolean Fragment::isHidden() const
	{
		return callMethod<jboolean>(
			"isHidden",
			"()Z"
		);
	}
	jboolean Fragment::isInLayout() const
	{
		return callMethod<jboolean>(
			"isInLayout",
			"()Z"
		);
	}
	jboolean Fragment::isRemoving() const
	{
		return callMethod<jboolean>(
			"isRemoving",
			"()Z"
		);
	}
	jboolean Fragment::isResumed() const
	{
		return callMethod<jboolean>(
			"isResumed",
			"()Z"
		);
	}
	jboolean Fragment::isStateSaved() const
	{
		return callMethod<jboolean>(
			"isStateSaved",
			"()Z"
		);
	}
	jboolean Fragment::isVisible() const
	{
		return callMethod<jboolean>(
			"isVisible",
			"()Z"
		);
	}
	void Fragment::onActivityCreated(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"onActivityCreated",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void Fragment::onActivityResult(jint arg0, jint arg1, android::content::Intent arg2) const
	{
		callMethod<void>(
			"onActivityResult",
			"(IILandroid/content/Intent;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void Fragment::onAttach(android::app::Activity arg0) const
	{
		callMethod<void>(
			"onAttach",
			"(Landroid/app/Activity;)V",
			arg0.object()
		);
	}
	void Fragment::onAttach(android::content::Context arg0) const
	{
		callMethod<void>(
			"onAttach",
			"(Landroid/content/Context;)V",
			arg0.object()
		);
	}
	void Fragment::onAttachFragment(android::app::Fragment arg0) const
	{
		callMethod<void>(
			"onAttachFragment",
			"(Landroid/app/Fragment;)V",
			arg0.object()
		);
	}
	void Fragment::onConfigurationChanged(android::content::res::Configuration arg0) const
	{
		callMethod<void>(
			"onConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.object()
		);
	}
	jboolean Fragment::onContextItemSelected(JObject arg0) const
	{
		return callMethod<jboolean>(
			"onContextItemSelected",
			"(Landroid/view/MenuItem;)Z",
			arg0.object()
		);
	}
	void Fragment::onCreate(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"onCreate",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	android::animation::Animator Fragment::onCreateAnimator(jint arg0, jboolean arg1, jint arg2) const
	{
		return callObjectMethod(
			"onCreateAnimator",
			"(IZI)Landroid/animation/Animator;",
			arg0,
			arg1,
			arg2
		);
	}
	void Fragment::onCreateContextMenu(JObject arg0, android::view::View arg1, JObject arg2) const
	{
		callMethod<void>(
			"onCreateContextMenu",
			"(Landroid/view/ContextMenu;Landroid/view/View;Landroid/view/ContextMenu$ContextMenuInfo;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void Fragment::onCreateOptionsMenu(JObject arg0, android::view::MenuInflater arg1) const
	{
		callMethod<void>(
			"onCreateOptionsMenu",
			"(Landroid/view/Menu;Landroid/view/MenuInflater;)V",
			arg0.object(),
			arg1.object()
		);
	}
	android::view::View Fragment::onCreateView(android::view::LayoutInflater arg0, android::view::ViewGroup arg1, android::os::Bundle arg2) const
	{
		return callObjectMethod(
			"onCreateView",
			"(Landroid/view/LayoutInflater;Landroid/view/ViewGroup;Landroid/os/Bundle;)Landroid/view/View;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void Fragment::onDestroy() const
	{
		callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	void Fragment::onDestroyOptionsMenu() const
	{
		callMethod<void>(
			"onDestroyOptionsMenu",
			"()V"
		);
	}
	void Fragment::onDestroyView() const
	{
		callMethod<void>(
			"onDestroyView",
			"()V"
		);
	}
	void Fragment::onDetach() const
	{
		callMethod<void>(
			"onDetach",
			"()V"
		);
	}
	android::view::LayoutInflater Fragment::onGetLayoutInflater(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"onGetLayoutInflater",
			"(Landroid/os/Bundle;)Landroid/view/LayoutInflater;",
			arg0.object()
		);
	}
	void Fragment::onHiddenChanged(jboolean arg0) const
	{
		callMethod<void>(
			"onHiddenChanged",
			"(Z)V",
			arg0
		);
	}
	void Fragment::onInflate(JObject arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"onInflate",
			"(Landroid/util/AttributeSet;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Fragment::onInflate(android::app::Activity arg0, JObject arg1, android::os::Bundle arg2) const
	{
		callMethod<void>(
			"onInflate",
			"(Landroid/app/Activity;Landroid/util/AttributeSet;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void Fragment::onInflate(android::content::Context arg0, JObject arg1, android::os::Bundle arg2) const
	{
		callMethod<void>(
			"onInflate",
			"(Landroid/content/Context;Landroid/util/AttributeSet;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void Fragment::onLowMemory() const
	{
		callMethod<void>(
			"onLowMemory",
			"()V"
		);
	}
	void Fragment::onMultiWindowModeChanged(jboolean arg0) const
	{
		callMethod<void>(
			"onMultiWindowModeChanged",
			"(Z)V",
			arg0
		);
	}
	void Fragment::onMultiWindowModeChanged(jboolean arg0, android::content::res::Configuration arg1) const
	{
		callMethod<void>(
			"onMultiWindowModeChanged",
			"(ZLandroid/content/res/Configuration;)V",
			arg0,
			arg1.object()
		);
	}
	jboolean Fragment::onOptionsItemSelected(JObject arg0) const
	{
		return callMethod<jboolean>(
			"onOptionsItemSelected",
			"(Landroid/view/MenuItem;)Z",
			arg0.object()
		);
	}
	void Fragment::onOptionsMenuClosed(JObject arg0) const
	{
		callMethod<void>(
			"onOptionsMenuClosed",
			"(Landroid/view/Menu;)V",
			arg0.object()
		);
	}
	void Fragment::onPause() const
	{
		callMethod<void>(
			"onPause",
			"()V"
		);
	}
	void Fragment::onPictureInPictureModeChanged(jboolean arg0) const
	{
		callMethod<void>(
			"onPictureInPictureModeChanged",
			"(Z)V",
			arg0
		);
	}
	void Fragment::onPictureInPictureModeChanged(jboolean arg0, android::content::res::Configuration arg1) const
	{
		callMethod<void>(
			"onPictureInPictureModeChanged",
			"(ZLandroid/content/res/Configuration;)V",
			arg0,
			arg1.object()
		);
	}
	void Fragment::onPrepareOptionsMenu(JObject arg0) const
	{
		callMethod<void>(
			"onPrepareOptionsMenu",
			"(Landroid/view/Menu;)V",
			arg0.object()
		);
	}
	void Fragment::onRequestPermissionsResult(jint arg0, JArray arg1, JIntArray arg2) const
	{
		callMethod<void>(
			"onRequestPermissionsResult",
			"(I[Ljava/lang/String;[I)V",
			arg0,
			arg1.object<jarray>(),
			arg2.object<jintArray>()
		);
	}
	void Fragment::onResume() const
	{
		callMethod<void>(
			"onResume",
			"()V"
		);
	}
	void Fragment::onSaveInstanceState(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"onSaveInstanceState",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void Fragment::onStart() const
	{
		callMethod<void>(
			"onStart",
			"()V"
		);
	}
	void Fragment::onStop() const
	{
		callMethod<void>(
			"onStop",
			"()V"
		);
	}
	void Fragment::onTrimMemory(jint arg0) const
	{
		callMethod<void>(
			"onTrimMemory",
			"(I)V",
			arg0
		);
	}
	void Fragment::onViewCreated(android::view::View arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"onViewCreated",
			"(Landroid/view/View;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Fragment::onViewStateRestored(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"onViewStateRestored",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void Fragment::postponeEnterTransition() const
	{
		callMethod<void>(
			"postponeEnterTransition",
			"()V"
		);
	}
	void Fragment::registerForContextMenu(android::view::View arg0) const
	{
		callMethod<void>(
			"registerForContextMenu",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void Fragment::requestPermissions(JArray arg0, jint arg1) const
	{
		callMethod<void>(
			"requestPermissions",
			"([Ljava/lang/String;I)V",
			arg0.object<jarray>(),
			arg1
		);
	}
	void Fragment::setAllowEnterTransitionOverlap(jboolean arg0) const
	{
		callMethod<void>(
			"setAllowEnterTransitionOverlap",
			"(Z)V",
			arg0
		);
	}
	void Fragment::setAllowReturnTransitionOverlap(jboolean arg0) const
	{
		callMethod<void>(
			"setAllowReturnTransitionOverlap",
			"(Z)V",
			arg0
		);
	}
	void Fragment::setArguments(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"setArguments",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void Fragment::setEnterSharedElementCallback(android::app::SharedElementCallback arg0) const
	{
		callMethod<void>(
			"setEnterSharedElementCallback",
			"(Landroid/app/SharedElementCallback;)V",
			arg0.object()
		);
	}
	void Fragment::setEnterTransition(android::transition::Transition arg0) const
	{
		callMethod<void>(
			"setEnterTransition",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
	void Fragment::setExitSharedElementCallback(android::app::SharedElementCallback arg0) const
	{
		callMethod<void>(
			"setExitSharedElementCallback",
			"(Landroid/app/SharedElementCallback;)V",
			arg0.object()
		);
	}
	void Fragment::setExitTransition(android::transition::Transition arg0) const
	{
		callMethod<void>(
			"setExitTransition",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
	void Fragment::setHasOptionsMenu(jboolean arg0) const
	{
		callMethod<void>(
			"setHasOptionsMenu",
			"(Z)V",
			arg0
		);
	}
	void Fragment::setInitialSavedState(android::app::Fragment_SavedState arg0) const
	{
		callMethod<void>(
			"setInitialSavedState",
			"(Landroid/app/Fragment$SavedState;)V",
			arg0.object()
		);
	}
	void Fragment::setMenuVisibility(jboolean arg0) const
	{
		callMethod<void>(
			"setMenuVisibility",
			"(Z)V",
			arg0
		);
	}
	void Fragment::setReenterTransition(android::transition::Transition arg0) const
	{
		callMethod<void>(
			"setReenterTransition",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
	void Fragment::setRetainInstance(jboolean arg0) const
	{
		callMethod<void>(
			"setRetainInstance",
			"(Z)V",
			arg0
		);
	}
	void Fragment::setReturnTransition(android::transition::Transition arg0) const
	{
		callMethod<void>(
			"setReturnTransition",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
	void Fragment::setSharedElementEnterTransition(android::transition::Transition arg0) const
	{
		callMethod<void>(
			"setSharedElementEnterTransition",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
	void Fragment::setSharedElementReturnTransition(android::transition::Transition arg0) const
	{
		callMethod<void>(
			"setSharedElementReturnTransition",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
	void Fragment::setTargetFragment(android::app::Fragment arg0, jint arg1) const
	{
		callMethod<void>(
			"setTargetFragment",
			"(Landroid/app/Fragment;I)V",
			arg0.object(),
			arg1
		);
	}
	void Fragment::setUserVisibleHint(jboolean arg0) const
	{
		callMethod<void>(
			"setUserVisibleHint",
			"(Z)V",
			arg0
		);
	}
	jboolean Fragment::shouldShowRequestPermissionRationale(JString arg0) const
	{
		return callMethod<jboolean>(
			"shouldShowRequestPermissionRationale",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	void Fragment::startActivity(android::content::Intent arg0) const
	{
		callMethod<void>(
			"startActivity",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	void Fragment::startActivity(android::content::Intent arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"startActivity",
			"(Landroid/content/Intent;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Fragment::startActivityForResult(android::content::Intent arg0, jint arg1) const
	{
		callMethod<void>(
			"startActivityForResult",
			"(Landroid/content/Intent;I)V",
			arg0.object(),
			arg1
		);
	}
	void Fragment::startActivityForResult(android::content::Intent arg0, jint arg1, android::os::Bundle arg2) const
	{
		callMethod<void>(
			"startActivityForResult",
			"(Landroid/content/Intent;ILandroid/os/Bundle;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	void Fragment::startIntentSenderForResult(android::content::IntentSender arg0, jint arg1, android::content::Intent arg2, jint arg3, jint arg4, jint arg5, android::os::Bundle arg6) const
	{
		callMethod<void>(
			"startIntentSenderForResult",
			"(Landroid/content/IntentSender;ILandroid/content/Intent;IIILandroid/os/Bundle;)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3,
			arg4,
			arg5,
			arg6.object()
		);
	}
	void Fragment::startPostponedEnterTransition() const
	{
		callMethod<void>(
			"startPostponedEnterTransition",
			"()V"
		);
	}
	JString Fragment::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void Fragment::unregisterForContextMenu(android::view::View arg0) const
	{
		callMethod<void>(
			"unregisterForContextMenu",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
} // namespace android::app

