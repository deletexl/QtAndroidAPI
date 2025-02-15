#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "./ActionBar.hpp"
#include "./ActivityManager_TaskDescription.hpp"
#include "./Application.hpp"
#include "./Dialog.hpp"
#include "./Fragment.hpp"
#include "./FragmentManager.hpp"
#include "./LoaderManager.hpp"
#include "./PendingIntent.hpp"
#include "./PictureInPictureParams.hpp"
#include "./SharedElementCallback.hpp"
#include "./TaskStackBuilder.hpp"
#include "./VoiceInteractor.hpp"
#include "./assist/AssistContent.hpp"
#include "../content/ComponentName.hpp"
#include "../content/Context.hpp"
#include "../content/Intent.hpp"
#include "../content/IntentSender.hpp"
#include "../content/res/Configuration.hpp"
#include "../content/res/Resources_Theme.hpp"
#include "../graphics/Bitmap.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../media/session/MediaController.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "../os/CancellationSignal.hpp"
#include "../os/PersistableBundle.hpp"
#include "../transition/Scene.hpp"
#include "../transition/TransitionManager.hpp"
#include "../view/ActionMode.hpp"
#include "../view/DragAndDropPermissions.hpp"
#include "../view/DragEvent.hpp"
#include "../view/KeyEvent.hpp"
#include "../view/LayoutInflater.hpp"
#include "../view/MenuInflater.hpp"
#include "../view/MotionEvent.hpp"
#include "../view/SearchEvent.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/Window.hpp"
#include "../view/WindowManager_LayoutParams.hpp"
#include "../view/accessibility/AccessibilityEvent.hpp"
#include "../widget/Toolbar.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/PrintWriter.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Activity.hpp"

namespace android::app
{
	// Fields
	jint Activity::DEFAULT_KEYS_DIALER()
	{
		return getStaticField<jint>(
			"android.app.Activity",
			"DEFAULT_KEYS_DIALER"
		);
	}
	jint Activity::DEFAULT_KEYS_DISABLE()
	{
		return getStaticField<jint>(
			"android.app.Activity",
			"DEFAULT_KEYS_DISABLE"
		);
	}
	jint Activity::DEFAULT_KEYS_SEARCH_GLOBAL()
	{
		return getStaticField<jint>(
			"android.app.Activity",
			"DEFAULT_KEYS_SEARCH_GLOBAL"
		);
	}
	jint Activity::DEFAULT_KEYS_SEARCH_LOCAL()
	{
		return getStaticField<jint>(
			"android.app.Activity",
			"DEFAULT_KEYS_SEARCH_LOCAL"
		);
	}
	jint Activity::DEFAULT_KEYS_SHORTCUT()
	{
		return getStaticField<jint>(
			"android.app.Activity",
			"DEFAULT_KEYS_SHORTCUT"
		);
	}
	jint Activity::RESULT_CANCELED()
	{
		return getStaticField<jint>(
			"android.app.Activity",
			"RESULT_CANCELED"
		);
	}
	jint Activity::RESULT_FIRST_USER()
	{
		return getStaticField<jint>(
			"android.app.Activity",
			"RESULT_FIRST_USER"
		);
	}
	jint Activity::RESULT_OK()
	{
		return getStaticField<jint>(
			"android.app.Activity",
			"RESULT_OK"
		);
	}
	
	// QJniObject forward
	Activity::Activity(QJniObject obj) : android::view::ContextThemeWrapper(obj) {}
	
	// Constructors
	Activity::Activity()
		: android::view::ContextThemeWrapper(
			"android.app.Activity",
			"()V"
		) {}
	
	// Methods
	void Activity::addContentView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1) const
	{
		callMethod<void>(
			"addContentView",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Activity::closeContextMenu() const
	{
		callMethod<void>(
			"closeContextMenu",
			"()V"
		);
	}
	void Activity::closeOptionsMenu() const
	{
		callMethod<void>(
			"closeOptionsMenu",
			"()V"
		);
	}
	android::app::PendingIntent Activity::createPendingResult(jint arg0, android::content::Intent arg1, jint arg2) const
	{
		return callObjectMethod(
			"createPendingResult",
			"(ILandroid/content/Intent;I)Landroid/app/PendingIntent;",
			arg0,
			arg1.object(),
			arg2
		);
	}
	void Activity::dismissDialog(jint arg0) const
	{
		callMethod<void>(
			"dismissDialog",
			"(I)V",
			arg0
		);
	}
	void Activity::dismissKeyboardShortcutsHelper() const
	{
		callMethod<void>(
			"dismissKeyboardShortcutsHelper",
			"()V"
		);
	}
	jboolean Activity::dispatchGenericMotionEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean Activity::dispatchKeyEvent(android::view::KeyEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	jboolean Activity::dispatchKeyShortcutEvent(android::view::KeyEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchKeyShortcutEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	jboolean Activity::dispatchPopulateAccessibilityEvent(android::view::accessibility::AccessibilityEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchPopulateAccessibilityEvent",
			"(Landroid/view/accessibility/AccessibilityEvent;)Z",
			arg0.object()
		);
	}
	jboolean Activity::dispatchTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean Activity::dispatchTrackballEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	void Activity::dump(JString arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, JArray arg3) const
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
	jboolean Activity::enterPictureInPictureMode(android::app::PictureInPictureParams arg0) const
	{
		return callMethod<jboolean>(
			"enterPictureInPictureMode",
			"(Landroid/app/PictureInPictureParams;)Z",
			arg0.object()
		);
	}
	void Activity::enterPictureInPictureMode() const
	{
		callMethod<void>(
			"enterPictureInPictureMode",
			"()V"
		);
	}
	android::view::View Activity::findViewById(jint arg0) const
	{
		return callObjectMethod(
			"findViewById",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	void Activity::finish() const
	{
		callMethod<void>(
			"finish",
			"()V"
		);
	}
	void Activity::finishActivity(jint arg0) const
	{
		callMethod<void>(
			"finishActivity",
			"(I)V",
			arg0
		);
	}
	void Activity::finishActivityFromChild(android::app::Activity arg0, jint arg1) const
	{
		callMethod<void>(
			"finishActivityFromChild",
			"(Landroid/app/Activity;I)V",
			arg0.object(),
			arg1
		);
	}
	void Activity::finishAffinity() const
	{
		callMethod<void>(
			"finishAffinity",
			"()V"
		);
	}
	void Activity::finishAfterTransition() const
	{
		callMethod<void>(
			"finishAfterTransition",
			"()V"
		);
	}
	void Activity::finishAndRemoveTask() const
	{
		callMethod<void>(
			"finishAndRemoveTask",
			"()V"
		);
	}
	void Activity::finishFromChild(android::app::Activity arg0) const
	{
		callMethod<void>(
			"finishFromChild",
			"(Landroid/app/Activity;)V",
			arg0.object()
		);
	}
	android::app::ActionBar Activity::getActionBar() const
	{
		return callObjectMethod(
			"getActionBar",
			"()Landroid/app/ActionBar;"
		);
	}
	android::app::Application Activity::getApplication() const
	{
		return callObjectMethod(
			"getApplication",
			"()Landroid/app/Application;"
		);
	}
	android::content::ComponentName Activity::getCallingActivity() const
	{
		return callObjectMethod(
			"getCallingActivity",
			"()Landroid/content/ComponentName;"
		);
	}
	JString Activity::getCallingPackage() const
	{
		return callObjectMethod(
			"getCallingPackage",
			"()Ljava/lang/String;"
		);
	}
	jint Activity::getChangingConfigurations() const
	{
		return callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	android::content::ComponentName Activity::getComponentName() const
	{
		return callObjectMethod(
			"getComponentName",
			"()Landroid/content/ComponentName;"
		);
	}
	android::transition::Scene Activity::getContentScene() const
	{
		return callObjectMethod(
			"getContentScene",
			"()Landroid/transition/Scene;"
		);
	}
	android::transition::TransitionManager Activity::getContentTransitionManager() const
	{
		return callObjectMethod(
			"getContentTransitionManager",
			"()Landroid/transition/TransitionManager;"
		);
	}
	android::view::View Activity::getCurrentFocus() const
	{
		return callObjectMethod(
			"getCurrentFocus",
			"()Landroid/view/View;"
		);
	}
	android::app::FragmentManager Activity::getFragmentManager() const
	{
		return callObjectMethod(
			"getFragmentManager",
			"()Landroid/app/FragmentManager;"
		);
	}
	android::content::Intent Activity::getIntent() const
	{
		return callObjectMethod(
			"getIntent",
			"()Landroid/content/Intent;"
		);
	}
	JObject Activity::getLastNonConfigurationInstance() const
	{
		return callObjectMethod(
			"getLastNonConfigurationInstance",
			"()Ljava/lang/Object;"
		);
	}
	android::view::LayoutInflater Activity::getLayoutInflater() const
	{
		return callObjectMethod(
			"getLayoutInflater",
			"()Landroid/view/LayoutInflater;"
		);
	}
	android::app::LoaderManager Activity::getLoaderManager() const
	{
		return callObjectMethod(
			"getLoaderManager",
			"()Landroid/app/LoaderManager;"
		);
	}
	JString Activity::getLocalClassName() const
	{
		return callObjectMethod(
			"getLocalClassName",
			"()Ljava/lang/String;"
		);
	}
	jint Activity::getMaxNumPictureInPictureActions() const
	{
		return callMethod<jint>(
			"getMaxNumPictureInPictureActions",
			"()I"
		);
	}
	android::media::session::MediaController Activity::getMediaController() const
	{
		return callObjectMethod(
			"getMediaController",
			"()Landroid/media/session/MediaController;"
		);
	}
	android::view::MenuInflater Activity::getMenuInflater() const
	{
		return callObjectMethod(
			"getMenuInflater",
			"()Landroid/view/MenuInflater;"
		);
	}
	android::app::Activity Activity::getParent() const
	{
		return callObjectMethod(
			"getParent",
			"()Landroid/app/Activity;"
		);
	}
	android::content::Intent Activity::getParentActivityIntent() const
	{
		return callObjectMethod(
			"getParentActivityIntent",
			"()Landroid/content/Intent;"
		);
	}
	JObject Activity::getPreferences(jint arg0) const
	{
		return callObjectMethod(
			"getPreferences",
			"(I)Landroid/content/SharedPreferences;",
			arg0
		);
	}
	android::net::Uri Activity::getReferrer() const
	{
		return callObjectMethod(
			"getReferrer",
			"()Landroid/net/Uri;"
		);
	}
	jint Activity::getRequestedOrientation() const
	{
		return callMethod<jint>(
			"getRequestedOrientation",
			"()I"
		);
	}
	android::view::SearchEvent Activity::getSearchEvent() const
	{
		return callObjectMethod(
			"getSearchEvent",
			"()Landroid/view/SearchEvent;"
		);
	}
	JObject Activity::getSystemService(JString arg0) const
	{
		return callObjectMethod(
			"getSystemService",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	jint Activity::getTaskId() const
	{
		return callMethod<jint>(
			"getTaskId",
			"()I"
		);
	}
	JString Activity::getTitle() const
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint Activity::getTitleColor() const
	{
		return callMethod<jint>(
			"getTitleColor",
			"()I"
		);
	}
	android::app::VoiceInteractor Activity::getVoiceInteractor() const
	{
		return callObjectMethod(
			"getVoiceInteractor",
			"()Landroid/app/VoiceInteractor;"
		);
	}
	jint Activity::getVolumeControlStream() const
	{
		return callMethod<jint>(
			"getVolumeControlStream",
			"()I"
		);
	}
	android::view::Window Activity::getWindow() const
	{
		return callObjectMethod(
			"getWindow",
			"()Landroid/view/Window;"
		);
	}
	JObject Activity::getWindowManager() const
	{
		return callObjectMethod(
			"getWindowManager",
			"()Landroid/view/WindowManager;"
		);
	}
	jboolean Activity::hasWindowFocus() const
	{
		return callMethod<jboolean>(
			"hasWindowFocus",
			"()Z"
		);
	}
	void Activity::invalidateOptionsMenu() const
	{
		callMethod<void>(
			"invalidateOptionsMenu",
			"()V"
		);
	}
	jboolean Activity::isActivityTransitionRunning() const
	{
		return callMethod<jboolean>(
			"isActivityTransitionRunning",
			"()Z"
		);
	}
	jboolean Activity::isChangingConfigurations() const
	{
		return callMethod<jboolean>(
			"isChangingConfigurations",
			"()Z"
		);
	}
	jboolean Activity::isChild() const
	{
		return callMethod<jboolean>(
			"isChild",
			"()Z"
		);
	}
	jboolean Activity::isDestroyed() const
	{
		return callMethod<jboolean>(
			"isDestroyed",
			"()Z"
		);
	}
	jboolean Activity::isFinishing() const
	{
		return callMethod<jboolean>(
			"isFinishing",
			"()Z"
		);
	}
	jboolean Activity::isImmersive() const
	{
		return callMethod<jboolean>(
			"isImmersive",
			"()Z"
		);
	}
	jboolean Activity::isInMultiWindowMode() const
	{
		return callMethod<jboolean>(
			"isInMultiWindowMode",
			"()Z"
		);
	}
	jboolean Activity::isInPictureInPictureMode() const
	{
		return callMethod<jboolean>(
			"isInPictureInPictureMode",
			"()Z"
		);
	}
	jboolean Activity::isLocalVoiceInteractionSupported() const
	{
		return callMethod<jboolean>(
			"isLocalVoiceInteractionSupported",
			"()Z"
		);
	}
	jboolean Activity::isTaskRoot() const
	{
		return callMethod<jboolean>(
			"isTaskRoot",
			"()Z"
		);
	}
	jboolean Activity::isVoiceInteraction() const
	{
		return callMethod<jboolean>(
			"isVoiceInteraction",
			"()Z"
		);
	}
	jboolean Activity::isVoiceInteractionRoot() const
	{
		return callMethod<jboolean>(
			"isVoiceInteractionRoot",
			"()Z"
		);
	}
	JObject Activity::managedQuery(android::net::Uri arg0, JArray arg1, JString arg2, JArray arg3, JString arg4) const
	{
		return callObjectMethod(
			"managedQuery",
			"(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.object(),
			arg1.object<jarray>(),
			arg2.object<jstring>(),
			arg3.object<jarray>(),
			arg4.object<jstring>()
		);
	}
	jboolean Activity::moveTaskToBack(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"moveTaskToBack",
			"(Z)Z",
			arg0
		);
	}
	jboolean Activity::navigateUpTo(android::content::Intent arg0) const
	{
		return callMethod<jboolean>(
			"navigateUpTo",
			"(Landroid/content/Intent;)Z",
			arg0.object()
		);
	}
	jboolean Activity::navigateUpToFromChild(android::app::Activity arg0, android::content::Intent arg1) const
	{
		return callMethod<jboolean>(
			"navigateUpToFromChild",
			"(Landroid/app/Activity;Landroid/content/Intent;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	void Activity::onActionModeFinished(android::view::ActionMode arg0) const
	{
		callMethod<void>(
			"onActionModeFinished",
			"(Landroid/view/ActionMode;)V",
			arg0.object()
		);
	}
	void Activity::onActionModeStarted(android::view::ActionMode arg0) const
	{
		callMethod<void>(
			"onActionModeStarted",
			"(Landroid/view/ActionMode;)V",
			arg0.object()
		);
	}
	void Activity::onActivityReenter(jint arg0, android::content::Intent arg1) const
	{
		callMethod<void>(
			"onActivityReenter",
			"(ILandroid/content/Intent;)V",
			arg0,
			arg1.object()
		);
	}
	void Activity::onAttachFragment(android::app::Fragment arg0) const
	{
		callMethod<void>(
			"onAttachFragment",
			"(Landroid/app/Fragment;)V",
			arg0.object()
		);
	}
	void Activity::onAttachedToWindow() const
	{
		callMethod<void>(
			"onAttachedToWindow",
			"()V"
		);
	}
	void Activity::onBackPressed() const
	{
		callMethod<void>(
			"onBackPressed",
			"()V"
		);
	}
	void Activity::onConfigurationChanged(android::content::res::Configuration arg0) const
	{
		callMethod<void>(
			"onConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.object()
		);
	}
	void Activity::onContentChanged() const
	{
		callMethod<void>(
			"onContentChanged",
			"()V"
		);
	}
	jboolean Activity::onContextItemSelected(JObject arg0) const
	{
		return callMethod<jboolean>(
			"onContextItemSelected",
			"(Landroid/view/MenuItem;)Z",
			arg0.object()
		);
	}
	void Activity::onContextMenuClosed(JObject arg0) const
	{
		callMethod<void>(
			"onContextMenuClosed",
			"(Landroid/view/Menu;)V",
			arg0.object()
		);
	}
	void Activity::onCreate(android::os::Bundle arg0, android::os::PersistableBundle arg1) const
	{
		callMethod<void>(
			"onCreate",
			"(Landroid/os/Bundle;Landroid/os/PersistableBundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Activity::onCreateContextMenu(JObject arg0, android::view::View arg1, JObject arg2) const
	{
		callMethod<void>(
			"onCreateContextMenu",
			"(Landroid/view/ContextMenu;Landroid/view/View;Landroid/view/ContextMenu$ContextMenuInfo;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	JString Activity::onCreateDescription() const
	{
		return callObjectMethod(
			"onCreateDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	void Activity::onCreateNavigateUpTaskStack(android::app::TaskStackBuilder arg0) const
	{
		callMethod<void>(
			"onCreateNavigateUpTaskStack",
			"(Landroid/app/TaskStackBuilder;)V",
			arg0.object()
		);
	}
	jboolean Activity::onCreateOptionsMenu(JObject arg0) const
	{
		return callMethod<jboolean>(
			"onCreateOptionsMenu",
			"(Landroid/view/Menu;)Z",
			arg0.object()
		);
	}
	jboolean Activity::onCreatePanelMenu(jint arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"onCreatePanelMenu",
			"(ILandroid/view/Menu;)Z",
			arg0,
			arg1.object()
		);
	}
	android::view::View Activity::onCreatePanelView(jint arg0) const
	{
		return callObjectMethod(
			"onCreatePanelView",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	jboolean Activity::onCreateThumbnail(android::graphics::Bitmap arg0, android::graphics::Canvas arg1) const
	{
		return callMethod<jboolean>(
			"onCreateThumbnail",
			"(Landroid/graphics/Bitmap;Landroid/graphics/Canvas;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	android::view::View Activity::onCreateView(JString arg0, android::content::Context arg1, JObject arg2) const
	{
		return callObjectMethod(
			"onCreateView",
			"(Ljava/lang/String;Landroid/content/Context;Landroid/util/AttributeSet;)Landroid/view/View;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	android::view::View Activity::onCreateView(android::view::View arg0, JString arg1, android::content::Context arg2, JObject arg3) const
	{
		return callObjectMethod(
			"onCreateView",
			"(Landroid/view/View;Ljava/lang/String;Landroid/content/Context;Landroid/util/AttributeSet;)Landroid/view/View;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object()
		);
	}
	void Activity::onDetachedFromWindow() const
	{
		callMethod<void>(
			"onDetachedFromWindow",
			"()V"
		);
	}
	void Activity::onEnterAnimationComplete() const
	{
		callMethod<void>(
			"onEnterAnimationComplete",
			"()V"
		);
	}
	jboolean Activity::onGenericMotionEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	void Activity::onGetDirectActions(android::os::CancellationSignal arg0, JObject arg1) const
	{
		callMethod<void>(
			"onGetDirectActions",
			"(Landroid/os/CancellationSignal;Ljava/util/function/Consumer;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean Activity::onKeyDown(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean Activity::onKeyLongPress(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyLongPress",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean Activity::onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2) const
	{
		return callMethod<jboolean>(
			"onKeyMultiple",
			"(IILandroid/view/KeyEvent;)Z",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jboolean Activity::onKeyShortcut(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyShortcut",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean Activity::onKeyUp(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	void Activity::onLocalVoiceInteractionStarted() const
	{
		callMethod<void>(
			"onLocalVoiceInteractionStarted",
			"()V"
		);
	}
	void Activity::onLocalVoiceInteractionStopped() const
	{
		callMethod<void>(
			"onLocalVoiceInteractionStopped",
			"()V"
		);
	}
	void Activity::onLowMemory() const
	{
		callMethod<void>(
			"onLowMemory",
			"()V"
		);
	}
	jboolean Activity::onMenuItemSelected(jint arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"onMenuItemSelected",
			"(ILandroid/view/MenuItem;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean Activity::onMenuOpened(jint arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"onMenuOpened",
			"(ILandroid/view/Menu;)Z",
			arg0,
			arg1.object()
		);
	}
	void Activity::onMultiWindowModeChanged(jboolean arg0) const
	{
		callMethod<void>(
			"onMultiWindowModeChanged",
			"(Z)V",
			arg0
		);
	}
	void Activity::onMultiWindowModeChanged(jboolean arg0, android::content::res::Configuration arg1) const
	{
		callMethod<void>(
			"onMultiWindowModeChanged",
			"(ZLandroid/content/res/Configuration;)V",
			arg0,
			arg1.object()
		);
	}
	jboolean Activity::onNavigateUp() const
	{
		return callMethod<jboolean>(
			"onNavigateUp",
			"()Z"
		);
	}
	jboolean Activity::onNavigateUpFromChild(android::app::Activity arg0) const
	{
		return callMethod<jboolean>(
			"onNavigateUpFromChild",
			"(Landroid/app/Activity;)Z",
			arg0.object()
		);
	}
	jboolean Activity::onOptionsItemSelected(JObject arg0) const
	{
		return callMethod<jboolean>(
			"onOptionsItemSelected",
			"(Landroid/view/MenuItem;)Z",
			arg0.object()
		);
	}
	void Activity::onOptionsMenuClosed(JObject arg0) const
	{
		callMethod<void>(
			"onOptionsMenuClosed",
			"(Landroid/view/Menu;)V",
			arg0.object()
		);
	}
	void Activity::onPanelClosed(jint arg0, JObject arg1) const
	{
		callMethod<void>(
			"onPanelClosed",
			"(ILandroid/view/Menu;)V",
			arg0,
			arg1.object()
		);
	}
	void Activity::onPerformDirectAction(JString arg0, android::os::Bundle arg1, android::os::CancellationSignal arg2, JObject arg3) const
	{
		callMethod<void>(
			"onPerformDirectAction",
			"(Ljava/lang/String;Landroid/os/Bundle;Landroid/os/CancellationSignal;Ljava/util/function/Consumer;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	void Activity::onPictureInPictureModeChanged(jboolean arg0) const
	{
		callMethod<void>(
			"onPictureInPictureModeChanged",
			"(Z)V",
			arg0
		);
	}
	void Activity::onPictureInPictureModeChanged(jboolean arg0, android::content::res::Configuration arg1) const
	{
		callMethod<void>(
			"onPictureInPictureModeChanged",
			"(ZLandroid/content/res/Configuration;)V",
			arg0,
			arg1.object()
		);
	}
	void Activity::onPostCreate(android::os::Bundle arg0, android::os::PersistableBundle arg1) const
	{
		callMethod<void>(
			"onPostCreate",
			"(Landroid/os/Bundle;Landroid/os/PersistableBundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Activity::onPrepareNavigateUpTaskStack(android::app::TaskStackBuilder arg0) const
	{
		callMethod<void>(
			"onPrepareNavigateUpTaskStack",
			"(Landroid/app/TaskStackBuilder;)V",
			arg0.object()
		);
	}
	jboolean Activity::onPrepareOptionsMenu(JObject arg0) const
	{
		return callMethod<jboolean>(
			"onPrepareOptionsMenu",
			"(Landroid/view/Menu;)Z",
			arg0.object()
		);
	}
	jboolean Activity::onPreparePanel(jint arg0, android::view::View arg1, JObject arg2) const
	{
		return callMethod<jboolean>(
			"onPreparePanel",
			"(ILandroid/view/View;Landroid/view/Menu;)Z",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	void Activity::onProvideAssistContent(android::app::assist::AssistContent arg0) const
	{
		callMethod<void>(
			"onProvideAssistContent",
			"(Landroid/app/assist/AssistContent;)V",
			arg0.object()
		);
	}
	void Activity::onProvideAssistData(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"onProvideAssistData",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void Activity::onProvideKeyboardShortcuts(JObject arg0, JObject arg1, jint arg2) const
	{
		callMethod<void>(
			"onProvideKeyboardShortcuts",
			"(Ljava/util/List;Landroid/view/Menu;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	android::net::Uri Activity::onProvideReferrer() const
	{
		return callObjectMethod(
			"onProvideReferrer",
			"()Landroid/net/Uri;"
		);
	}
	void Activity::onRequestPermissionsResult(jint arg0, JArray arg1, JIntArray arg2) const
	{
		callMethod<void>(
			"onRequestPermissionsResult",
			"(I[Ljava/lang/String;[I)V",
			arg0,
			arg1.object<jarray>(),
			arg2.object<jintArray>()
		);
	}
	void Activity::onRestoreInstanceState(android::os::Bundle arg0, android::os::PersistableBundle arg1) const
	{
		callMethod<void>(
			"onRestoreInstanceState",
			"(Landroid/os/Bundle;Landroid/os/PersistableBundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	JObject Activity::onRetainNonConfigurationInstance() const
	{
		return callObjectMethod(
			"onRetainNonConfigurationInstance",
			"()Ljava/lang/Object;"
		);
	}
	void Activity::onSaveInstanceState(android::os::Bundle arg0, android::os::PersistableBundle arg1) const
	{
		callMethod<void>(
			"onSaveInstanceState",
			"(Landroid/os/Bundle;Landroid/os/PersistableBundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean Activity::onSearchRequested() const
	{
		return callMethod<jboolean>(
			"onSearchRequested",
			"()Z"
		);
	}
	jboolean Activity::onSearchRequested(android::view::SearchEvent arg0) const
	{
		return callMethod<jboolean>(
			"onSearchRequested",
			"(Landroid/view/SearchEvent;)Z",
			arg0.object()
		);
	}
	void Activity::onStateNotSaved() const
	{
		callMethod<void>(
			"onStateNotSaved",
			"()V"
		);
	}
	void Activity::onTopResumedActivityChanged(jboolean arg0) const
	{
		callMethod<void>(
			"onTopResumedActivityChanged",
			"(Z)V",
			arg0
		);
	}
	jboolean Activity::onTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean Activity::onTrackballEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	void Activity::onTrimMemory(jint arg0) const
	{
		callMethod<void>(
			"onTrimMemory",
			"(I)V",
			arg0
		);
	}
	void Activity::onUserInteraction() const
	{
		callMethod<void>(
			"onUserInteraction",
			"()V"
		);
	}
	void Activity::onVisibleBehindCanceled() const
	{
		callMethod<void>(
			"onVisibleBehindCanceled",
			"()V"
		);
	}
	void Activity::onWindowAttributesChanged(android::view::WindowManager_LayoutParams arg0) const
	{
		callMethod<void>(
			"onWindowAttributesChanged",
			"(Landroid/view/WindowManager$LayoutParams;)V",
			arg0.object()
		);
	}
	void Activity::onWindowFocusChanged(jboolean arg0) const
	{
		callMethod<void>(
			"onWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	android::view::ActionMode Activity::onWindowStartingActionMode(JObject arg0) const
	{
		return callObjectMethod(
			"onWindowStartingActionMode",
			"(Landroid/view/ActionMode$Callback;)Landroid/view/ActionMode;",
			arg0.object()
		);
	}
	android::view::ActionMode Activity::onWindowStartingActionMode(JObject arg0, jint arg1) const
	{
		return callObjectMethod(
			"onWindowStartingActionMode",
			"(Landroid/view/ActionMode$Callback;I)Landroid/view/ActionMode;",
			arg0.object(),
			arg1
		);
	}
	void Activity::openContextMenu(android::view::View arg0) const
	{
		callMethod<void>(
			"openContextMenu",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void Activity::openOptionsMenu() const
	{
		callMethod<void>(
			"openOptionsMenu",
			"()V"
		);
	}
	void Activity::overridePendingTransition(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"overridePendingTransition",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Activity::postponeEnterTransition() const
	{
		callMethod<void>(
			"postponeEnterTransition",
			"()V"
		);
	}
	void Activity::recreate() const
	{
		callMethod<void>(
			"recreate",
			"()V"
		);
	}
	void Activity::registerActivityLifecycleCallbacks(JObject arg0) const
	{
		callMethod<void>(
			"registerActivityLifecycleCallbacks",
			"(Landroid/app/Application$ActivityLifecycleCallbacks;)V",
			arg0.object()
		);
	}
	void Activity::registerForContextMenu(android::view::View arg0) const
	{
		callMethod<void>(
			"registerForContextMenu",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	jboolean Activity::releaseInstance() const
	{
		return callMethod<jboolean>(
			"releaseInstance",
			"()Z"
		);
	}
	void Activity::removeDialog(jint arg0) const
	{
		callMethod<void>(
			"removeDialog",
			"(I)V",
			arg0
		);
	}
	void Activity::reportFullyDrawn() const
	{
		callMethod<void>(
			"reportFullyDrawn",
			"()V"
		);
	}
	android::view::DragAndDropPermissions Activity::requestDragAndDropPermissions(android::view::DragEvent arg0) const
	{
		return callObjectMethod(
			"requestDragAndDropPermissions",
			"(Landroid/view/DragEvent;)Landroid/view/DragAndDropPermissions;",
			arg0.object()
		);
	}
	void Activity::requestPermissions(JArray arg0, jint arg1) const
	{
		callMethod<void>(
			"requestPermissions",
			"([Ljava/lang/String;I)V",
			arg0.object<jarray>(),
			arg1
		);
	}
	void Activity::requestShowKeyboardShortcuts() const
	{
		callMethod<void>(
			"requestShowKeyboardShortcuts",
			"()V"
		);
	}
	jboolean Activity::requestVisibleBehind(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"requestVisibleBehind",
			"(Z)Z",
			arg0
		);
	}
	jboolean Activity::requestWindowFeature(jint arg0) const
	{
		return callMethod<jboolean>(
			"requestWindowFeature",
			"(I)Z",
			arg0
		);
	}
	android::view::View Activity::requireViewById(jint arg0) const
	{
		return callObjectMethod(
			"requireViewById",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	void Activity::runOnUiThread(JObject arg0) const
	{
		callMethod<void>(
			"runOnUiThread",
			"(Ljava/lang/Runnable;)V",
			arg0.object()
		);
	}
	void Activity::setActionBar(android::widget::Toolbar arg0) const
	{
		callMethod<void>(
			"setActionBar",
			"(Landroid/widget/Toolbar;)V",
			arg0.object()
		);
	}
	void Activity::setContentTransitionManager(android::transition::TransitionManager arg0) const
	{
		callMethod<void>(
			"setContentTransitionManager",
			"(Landroid/transition/TransitionManager;)V",
			arg0.object()
		);
	}
	void Activity::setContentView(android::view::View arg0) const
	{
		callMethod<void>(
			"setContentView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void Activity::setContentView(jint arg0) const
	{
		callMethod<void>(
			"setContentView",
			"(I)V",
			arg0
		);
	}
	void Activity::setContentView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1) const
	{
		callMethod<void>(
			"setContentView",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Activity::setDefaultKeyMode(jint arg0) const
	{
		callMethod<void>(
			"setDefaultKeyMode",
			"(I)V",
			arg0
		);
	}
	void Activity::setEnterSharedElementCallback(android::app::SharedElementCallback arg0) const
	{
		callMethod<void>(
			"setEnterSharedElementCallback",
			"(Landroid/app/SharedElementCallback;)V",
			arg0.object()
		);
	}
	void Activity::setExitSharedElementCallback(android::app::SharedElementCallback arg0) const
	{
		callMethod<void>(
			"setExitSharedElementCallback",
			"(Landroid/app/SharedElementCallback;)V",
			arg0.object()
		);
	}
	void Activity::setFeatureDrawable(jint arg0, android::graphics::drawable::Drawable arg1) const
	{
		callMethod<void>(
			"setFeatureDrawable",
			"(ILandroid/graphics/drawable/Drawable;)V",
			arg0,
			arg1.object()
		);
	}
	void Activity::setFeatureDrawableAlpha(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setFeatureDrawableAlpha",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Activity::setFeatureDrawableResource(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setFeatureDrawableResource",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Activity::setFeatureDrawableUri(jint arg0, android::net::Uri arg1) const
	{
		callMethod<void>(
			"setFeatureDrawableUri",
			"(ILandroid/net/Uri;)V",
			arg0,
			arg1.object()
		);
	}
	void Activity::setFinishOnTouchOutside(jboolean arg0) const
	{
		callMethod<void>(
			"setFinishOnTouchOutside",
			"(Z)V",
			arg0
		);
	}
	void Activity::setImmersive(jboolean arg0) const
	{
		callMethod<void>(
			"setImmersive",
			"(Z)V",
			arg0
		);
	}
	void Activity::setInheritShowWhenLocked(jboolean arg0) const
	{
		callMethod<void>(
			"setInheritShowWhenLocked",
			"(Z)V",
			arg0
		);
	}
	void Activity::setIntent(android::content::Intent arg0) const
	{
		callMethod<void>(
			"setIntent",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	void Activity::setMediaController(android::media::session::MediaController arg0) const
	{
		callMethod<void>(
			"setMediaController",
			"(Landroid/media/session/MediaController;)V",
			arg0.object()
		);
	}
	void Activity::setPictureInPictureParams(android::app::PictureInPictureParams arg0) const
	{
		callMethod<void>(
			"setPictureInPictureParams",
			"(Landroid/app/PictureInPictureParams;)V",
			arg0.object()
		);
	}
	void Activity::setProgress(jint arg0) const
	{
		callMethod<void>(
			"setProgress",
			"(I)V",
			arg0
		);
	}
	void Activity::setProgressBarIndeterminate(jboolean arg0) const
	{
		callMethod<void>(
			"setProgressBarIndeterminate",
			"(Z)V",
			arg0
		);
	}
	void Activity::setProgressBarIndeterminateVisibility(jboolean arg0) const
	{
		callMethod<void>(
			"setProgressBarIndeterminateVisibility",
			"(Z)V",
			arg0
		);
	}
	void Activity::setProgressBarVisibility(jboolean arg0) const
	{
		callMethod<void>(
			"setProgressBarVisibility",
			"(Z)V",
			arg0
		);
	}
	void Activity::setRequestedOrientation(jint arg0) const
	{
		callMethod<void>(
			"setRequestedOrientation",
			"(I)V",
			arg0
		);
	}
	void Activity::setResult(jint arg0) const
	{
		callMethod<void>(
			"setResult",
			"(I)V",
			arg0
		);
	}
	void Activity::setResult(jint arg0, android::content::Intent arg1) const
	{
		callMethod<void>(
			"setResult",
			"(ILandroid/content/Intent;)V",
			arg0,
			arg1.object()
		);
	}
	void Activity::setSecondaryProgress(jint arg0) const
	{
		callMethod<void>(
			"setSecondaryProgress",
			"(I)V",
			arg0
		);
	}
	void Activity::setShowWhenLocked(jboolean arg0) const
	{
		callMethod<void>(
			"setShowWhenLocked",
			"(Z)V",
			arg0
		);
	}
	void Activity::setTaskDescription(android::app::ActivityManager_TaskDescription arg0) const
	{
		callMethod<void>(
			"setTaskDescription",
			"(Landroid/app/ActivityManager$TaskDescription;)V",
			arg0.object()
		);
	}
	void Activity::setTheme(jint arg0) const
	{
		callMethod<void>(
			"setTheme",
			"(I)V",
			arg0
		);
	}
	void Activity::setTitle(jint arg0) const
	{
		callMethod<void>(
			"setTitle",
			"(I)V",
			arg0
		);
	}
	void Activity::setTitle(JString arg0) const
	{
		callMethod<void>(
			"setTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void Activity::setTitleColor(jint arg0) const
	{
		callMethod<void>(
			"setTitleColor",
			"(I)V",
			arg0
		);
	}
	void Activity::setTurnScreenOn(jboolean arg0) const
	{
		callMethod<void>(
			"setTurnScreenOn",
			"(Z)V",
			arg0
		);
	}
	void Activity::setVisible(jboolean arg0) const
	{
		callMethod<void>(
			"setVisible",
			"(Z)V",
			arg0
		);
	}
	void Activity::setVolumeControlStream(jint arg0) const
	{
		callMethod<void>(
			"setVolumeControlStream",
			"(I)V",
			arg0
		);
	}
	void Activity::setVrModeEnabled(jboolean arg0, android::content::ComponentName arg1) const
	{
		callMethod<void>(
			"setVrModeEnabled",
			"(ZLandroid/content/ComponentName;)V",
			arg0,
			arg1.object()
		);
	}
	jboolean Activity::shouldShowRequestPermissionRationale(JString arg0) const
	{
		return callMethod<jboolean>(
			"shouldShowRequestPermissionRationale",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	jboolean Activity::shouldUpRecreateTask(android::content::Intent arg0) const
	{
		return callMethod<jboolean>(
			"shouldUpRecreateTask",
			"(Landroid/content/Intent;)Z",
			arg0.object()
		);
	}
	jboolean Activity::showAssist(android::os::Bundle arg0) const
	{
		return callMethod<jboolean>(
			"showAssist",
			"(Landroid/os/Bundle;)Z",
			arg0.object()
		);
	}
	jboolean Activity::showDialog(jint arg0, android::os::Bundle arg1) const
	{
		return callMethod<jboolean>(
			"showDialog",
			"(ILandroid/os/Bundle;)Z",
			arg0,
			arg1.object()
		);
	}
	void Activity::showDialog(jint arg0) const
	{
		callMethod<void>(
			"showDialog",
			"(I)V",
			arg0
		);
	}
	void Activity::showLockTaskEscapeMessage() const
	{
		callMethod<void>(
			"showLockTaskEscapeMessage",
			"()V"
		);
	}
	android::view::ActionMode Activity::startActionMode(JObject arg0) const
	{
		return callObjectMethod(
			"startActionMode",
			"(Landroid/view/ActionMode$Callback;)Landroid/view/ActionMode;",
			arg0.object()
		);
	}
	android::view::ActionMode Activity::startActionMode(JObject arg0, jint arg1) const
	{
		return callObjectMethod(
			"startActionMode",
			"(Landroid/view/ActionMode$Callback;I)Landroid/view/ActionMode;",
			arg0.object(),
			arg1
		);
	}
	void Activity::startActivities(JArray arg0) const
	{
		callMethod<void>(
			"startActivities",
			"([Landroid/content/Intent;)V",
			arg0.object<jarray>()
		);
	}
	void Activity::startActivities(JArray arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"startActivities",
			"([Landroid/content/Intent;Landroid/os/Bundle;)V",
			arg0.object<jarray>(),
			arg1.object()
		);
	}
	void Activity::startActivity(android::content::Intent arg0) const
	{
		callMethod<void>(
			"startActivity",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	void Activity::startActivity(android::content::Intent arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"startActivity",
			"(Landroid/content/Intent;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Activity::startActivityForResult(android::content::Intent arg0, jint arg1) const
	{
		callMethod<void>(
			"startActivityForResult",
			"(Landroid/content/Intent;I)V",
			arg0.object(),
			arg1
		);
	}
	void Activity::startActivityForResult(android::content::Intent arg0, jint arg1, android::os::Bundle arg2) const
	{
		callMethod<void>(
			"startActivityForResult",
			"(Landroid/content/Intent;ILandroid/os/Bundle;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	void Activity::startActivityFromChild(android::app::Activity arg0, android::content::Intent arg1, jint arg2) const
	{
		callMethod<void>(
			"startActivityFromChild",
			"(Landroid/app/Activity;Landroid/content/Intent;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void Activity::startActivityFromChild(android::app::Activity arg0, android::content::Intent arg1, jint arg2, android::os::Bundle arg3) const
	{
		callMethod<void>(
			"startActivityFromChild",
			"(Landroid/app/Activity;Landroid/content/Intent;ILandroid/os/Bundle;)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	void Activity::startActivityFromFragment(android::app::Fragment arg0, android::content::Intent arg1, jint arg2) const
	{
		callMethod<void>(
			"startActivityFromFragment",
			"(Landroid/app/Fragment;Landroid/content/Intent;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void Activity::startActivityFromFragment(android::app::Fragment arg0, android::content::Intent arg1, jint arg2, android::os::Bundle arg3) const
	{
		callMethod<void>(
			"startActivityFromFragment",
			"(Landroid/app/Fragment;Landroid/content/Intent;ILandroid/os/Bundle;)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	jboolean Activity::startActivityIfNeeded(android::content::Intent arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"startActivityIfNeeded",
			"(Landroid/content/Intent;I)Z",
			arg0.object(),
			arg1
		);
	}
	jboolean Activity::startActivityIfNeeded(android::content::Intent arg0, jint arg1, android::os::Bundle arg2) const
	{
		return callMethod<jboolean>(
			"startActivityIfNeeded",
			"(Landroid/content/Intent;ILandroid/os/Bundle;)Z",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	void Activity::startIntentSender(android::content::IntentSender arg0, android::content::Intent arg1, jint arg2, jint arg3, jint arg4) const
	{
		callMethod<void>(
			"startIntentSender",
			"(Landroid/content/IntentSender;Landroid/content/Intent;III)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4
		);
	}
	void Activity::startIntentSender(android::content::IntentSender arg0, android::content::Intent arg1, jint arg2, jint arg3, jint arg4, android::os::Bundle arg5) const
	{
		callMethod<void>(
			"startIntentSender",
			"(Landroid/content/IntentSender;Landroid/content/Intent;IIILandroid/os/Bundle;)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4,
			arg5.object()
		);
	}
	void Activity::startIntentSenderForResult(android::content::IntentSender arg0, jint arg1, android::content::Intent arg2, jint arg3, jint arg4, jint arg5) const
	{
		callMethod<void>(
			"startIntentSenderForResult",
			"(Landroid/content/IntentSender;ILandroid/content/Intent;III)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3,
			arg4,
			arg5
		);
	}
	void Activity::startIntentSenderForResult(android::content::IntentSender arg0, jint arg1, android::content::Intent arg2, jint arg3, jint arg4, jint arg5, android::os::Bundle arg6) const
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
	void Activity::startIntentSenderFromChild(android::app::Activity arg0, android::content::IntentSender arg1, jint arg2, android::content::Intent arg3, jint arg4, jint arg5, jint arg6) const
	{
		callMethod<void>(
			"startIntentSenderFromChild",
			"(Landroid/app/Activity;Landroid/content/IntentSender;ILandroid/content/Intent;III)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object(),
			arg4,
			arg5,
			arg6
		);
	}
	void Activity::startIntentSenderFromChild(android::app::Activity arg0, android::content::IntentSender arg1, jint arg2, android::content::Intent arg3, jint arg4, jint arg5, jint arg6, android::os::Bundle arg7) const
	{
		callMethod<void>(
			"startIntentSenderFromChild",
			"(Landroid/app/Activity;Landroid/content/IntentSender;ILandroid/content/Intent;IIILandroid/os/Bundle;)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object(),
			arg4,
			arg5,
			arg6,
			arg7.object()
		);
	}
	void Activity::startLocalVoiceInteraction(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"startLocalVoiceInteraction",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void Activity::startLockTask() const
	{
		callMethod<void>(
			"startLockTask",
			"()V"
		);
	}
	void Activity::startManagingCursor(JObject arg0) const
	{
		callMethod<void>(
			"startManagingCursor",
			"(Landroid/database/Cursor;)V",
			arg0.object()
		);
	}
	jboolean Activity::startNextMatchingActivity(android::content::Intent arg0) const
	{
		return callMethod<jboolean>(
			"startNextMatchingActivity",
			"(Landroid/content/Intent;)Z",
			arg0.object()
		);
	}
	jboolean Activity::startNextMatchingActivity(android::content::Intent arg0, android::os::Bundle arg1) const
	{
		return callMethod<jboolean>(
			"startNextMatchingActivity",
			"(Landroid/content/Intent;Landroid/os/Bundle;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	void Activity::startPostponedEnterTransition() const
	{
		callMethod<void>(
			"startPostponedEnterTransition",
			"()V"
		);
	}
	void Activity::startSearch(JString arg0, jboolean arg1, android::os::Bundle arg2, jboolean arg3) const
	{
		callMethod<void>(
			"startSearch",
			"(Ljava/lang/String;ZLandroid/os/Bundle;Z)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object(),
			arg3
		);
	}
	void Activity::stopLocalVoiceInteraction() const
	{
		callMethod<void>(
			"stopLocalVoiceInteraction",
			"()V"
		);
	}
	void Activity::stopLockTask() const
	{
		callMethod<void>(
			"stopLockTask",
			"()V"
		);
	}
	void Activity::stopManagingCursor(JObject arg0) const
	{
		callMethod<void>(
			"stopManagingCursor",
			"(Landroid/database/Cursor;)V",
			arg0.object()
		);
	}
	void Activity::takeKeyEvents(jboolean arg0) const
	{
		callMethod<void>(
			"takeKeyEvents",
			"(Z)V",
			arg0
		);
	}
	void Activity::triggerSearch(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"triggerSearch",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void Activity::unregisterActivityLifecycleCallbacks(JObject arg0) const
	{
		callMethod<void>(
			"unregisterActivityLifecycleCallbacks",
			"(Landroid/app/Application$ActivityLifecycleCallbacks;)V",
			arg0.object()
		);
	}
	void Activity::unregisterForContextMenu(android::view::View arg0) const
	{
		callMethod<void>(
			"unregisterForContextMenu",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
} // namespace android::app

