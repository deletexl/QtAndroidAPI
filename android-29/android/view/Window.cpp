#include "../content/Context.hpp"
#include "../content/res/Configuration.hpp"
#include "../content/res/TypedArray.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../media/session/MediaController.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "../os/Handler.hpp"
#include "../transition/Scene.hpp"
#include "../transition/Transition.hpp"
#include "../transition/TransitionManager.hpp"
#include "./InputEvent.hpp"
#include "./KeyEvent.hpp"
#include "./LayoutInflater.hpp"
#include "./MotionEvent.hpp"
#include "./View.hpp"
#include "./ViewGroup_LayoutParams.hpp"
#include "./WindowManager_LayoutParams.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./Window.hpp"

namespace android::view
{
	// Fields
	jint Window::DECOR_CAPTION_SHADE_AUTO()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"DECOR_CAPTION_SHADE_AUTO"
		);
	}
	jint Window::DECOR_CAPTION_SHADE_DARK()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"DECOR_CAPTION_SHADE_DARK"
		);
	}
	jint Window::DECOR_CAPTION_SHADE_LIGHT()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"DECOR_CAPTION_SHADE_LIGHT"
		);
	}
	jint Window::FEATURE_ACTION_BAR()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"FEATURE_ACTION_BAR"
		);
	}
	jint Window::FEATURE_ACTION_BAR_OVERLAY()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"FEATURE_ACTION_BAR_OVERLAY"
		);
	}
	jint Window::FEATURE_ACTION_MODE_OVERLAY()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"FEATURE_ACTION_MODE_OVERLAY"
		);
	}
	jint Window::FEATURE_ACTIVITY_TRANSITIONS()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"FEATURE_ACTIVITY_TRANSITIONS"
		);
	}
	jint Window::FEATURE_CONTENT_TRANSITIONS()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"FEATURE_CONTENT_TRANSITIONS"
		);
	}
	jint Window::FEATURE_CONTEXT_MENU()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"FEATURE_CONTEXT_MENU"
		);
	}
	jint Window::FEATURE_CUSTOM_TITLE()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"FEATURE_CUSTOM_TITLE"
		);
	}
	jint Window::FEATURE_INDETERMINATE_PROGRESS()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"FEATURE_INDETERMINATE_PROGRESS"
		);
	}
	jint Window::FEATURE_LEFT_ICON()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"FEATURE_LEFT_ICON"
		);
	}
	jint Window::FEATURE_NO_TITLE()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"FEATURE_NO_TITLE"
		);
	}
	jint Window::FEATURE_OPTIONS_PANEL()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"FEATURE_OPTIONS_PANEL"
		);
	}
	jint Window::FEATURE_PROGRESS()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"FEATURE_PROGRESS"
		);
	}
	jint Window::FEATURE_RIGHT_ICON()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"FEATURE_RIGHT_ICON"
		);
	}
	jint Window::FEATURE_SWIPE_TO_DISMISS()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"FEATURE_SWIPE_TO_DISMISS"
		);
	}
	jint Window::ID_ANDROID_CONTENT()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"ID_ANDROID_CONTENT"
		);
	}
	JString Window::NAVIGATION_BAR_BACKGROUND_TRANSITION_NAME()
	{
		return getStaticObjectField(
			"android.view.Window",
			"NAVIGATION_BAR_BACKGROUND_TRANSITION_NAME",
			"Ljava/lang/String;"
		);
	}
	jint Window::PROGRESS_END()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"PROGRESS_END"
		);
	}
	jint Window::PROGRESS_INDETERMINATE_OFF()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"PROGRESS_INDETERMINATE_OFF"
		);
	}
	jint Window::PROGRESS_INDETERMINATE_ON()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"PROGRESS_INDETERMINATE_ON"
		);
	}
	jint Window::PROGRESS_SECONDARY_END()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"PROGRESS_SECONDARY_END"
		);
	}
	jint Window::PROGRESS_SECONDARY_START()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"PROGRESS_SECONDARY_START"
		);
	}
	jint Window::PROGRESS_START()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"PROGRESS_START"
		);
	}
	jint Window::PROGRESS_VISIBILITY_OFF()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"PROGRESS_VISIBILITY_OFF"
		);
	}
	jint Window::PROGRESS_VISIBILITY_ON()
	{
		return getStaticField<jint>(
			"android.view.Window",
			"PROGRESS_VISIBILITY_ON"
		);
	}
	JString Window::STATUS_BAR_BACKGROUND_TRANSITION_NAME()
	{
		return getStaticObjectField(
			"android.view.Window",
			"STATUS_BAR_BACKGROUND_TRANSITION_NAME",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	Window::Window(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Window::Window(android::content::Context arg0)
		: JObject(
			"android.view.Window",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	jint Window::getDefaultFeatures(android::content::Context arg0)
	{
		return callStaticMethod<jint>(
			"android.view.Window",
			"getDefaultFeatures",
			"(Landroid/content/Context;)I",
			arg0.object()
		);
	}
	void Window::addContentView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1) const
	{
		callMethod<void>(
			"addContentView",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Window::addFlags(jint arg0) const
	{
		callMethod<void>(
			"addFlags",
			"(I)V",
			arg0
		);
	}
	void Window::addOnFrameMetricsAvailableListener(JObject arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"addOnFrameMetricsAvailableListener",
			"(Landroid/view/Window$OnFrameMetricsAvailableListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Window::clearFlags(jint arg0) const
	{
		callMethod<void>(
			"clearFlags",
			"(I)V",
			arg0
		);
	}
	void Window::closeAllPanels() const
	{
		callMethod<void>(
			"closeAllPanels",
			"()V"
		);
	}
	void Window::closePanel(jint arg0) const
	{
		callMethod<void>(
			"closePanel",
			"(I)V",
			arg0
		);
	}
	android::view::View Window::findViewById(jint arg0) const
	{
		return callObjectMethod(
			"findViewById",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	jboolean Window::getAllowEnterTransitionOverlap() const
	{
		return callMethod<jboolean>(
			"getAllowEnterTransitionOverlap",
			"()Z"
		);
	}
	jboolean Window::getAllowReturnTransitionOverlap() const
	{
		return callMethod<jboolean>(
			"getAllowReturnTransitionOverlap",
			"()Z"
		);
	}
	android::view::WindowManager_LayoutParams Window::getAttributes() const
	{
		return callObjectMethod(
			"getAttributes",
			"()Landroid/view/WindowManager$LayoutParams;"
		);
	}
	JObject Window::getCallback() const
	{
		return callObjectMethod(
			"getCallback",
			"()Landroid/view/Window$Callback;"
		);
	}
	jint Window::getColorMode() const
	{
		return callMethod<jint>(
			"getColorMode",
			"()I"
		);
	}
	android::view::Window Window::getContainer() const
	{
		return callObjectMethod(
			"getContainer",
			"()Landroid/view/Window;"
		);
	}
	android::transition::Scene Window::getContentScene() const
	{
		return callObjectMethod(
			"getContentScene",
			"()Landroid/transition/Scene;"
		);
	}
	android::content::Context Window::getContext() const
	{
		return callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	android::view::View Window::getCurrentFocus() const
	{
		return callObjectMethod(
			"getCurrentFocus",
			"()Landroid/view/View;"
		);
	}
	android::view::View Window::getDecorView() const
	{
		return callObjectMethod(
			"getDecorView",
			"()Landroid/view/View;"
		);
	}
	android::transition::Transition Window::getEnterTransition() const
	{
		return callObjectMethod(
			"getEnterTransition",
			"()Landroid/transition/Transition;"
		);
	}
	android::transition::Transition Window::getExitTransition() const
	{
		return callObjectMethod(
			"getExitTransition",
			"()Landroid/transition/Transition;"
		);
	}
	android::view::LayoutInflater Window::getLayoutInflater() const
	{
		return callObjectMethod(
			"getLayoutInflater",
			"()Landroid/view/LayoutInflater;"
		);
	}
	android::media::session::MediaController Window::getMediaController() const
	{
		return callObjectMethod(
			"getMediaController",
			"()Landroid/media/session/MediaController;"
		);
	}
	jint Window::getNavigationBarColor() const
	{
		return callMethod<jint>(
			"getNavigationBarColor",
			"()I"
		);
	}
	jint Window::getNavigationBarDividerColor() const
	{
		return callMethod<jint>(
			"getNavigationBarDividerColor",
			"()I"
		);
	}
	android::transition::Transition Window::getReenterTransition() const
	{
		return callObjectMethod(
			"getReenterTransition",
			"()Landroid/transition/Transition;"
		);
	}
	android::transition::Transition Window::getReturnTransition() const
	{
		return callObjectMethod(
			"getReturnTransition",
			"()Landroid/transition/Transition;"
		);
	}
	android::transition::Transition Window::getSharedElementEnterTransition() const
	{
		return callObjectMethod(
			"getSharedElementEnterTransition",
			"()Landroid/transition/Transition;"
		);
	}
	android::transition::Transition Window::getSharedElementExitTransition() const
	{
		return callObjectMethod(
			"getSharedElementExitTransition",
			"()Landroid/transition/Transition;"
		);
	}
	android::transition::Transition Window::getSharedElementReenterTransition() const
	{
		return callObjectMethod(
			"getSharedElementReenterTransition",
			"()Landroid/transition/Transition;"
		);
	}
	android::transition::Transition Window::getSharedElementReturnTransition() const
	{
		return callObjectMethod(
			"getSharedElementReturnTransition",
			"()Landroid/transition/Transition;"
		);
	}
	jboolean Window::getSharedElementsUseOverlay() const
	{
		return callMethod<jboolean>(
			"getSharedElementsUseOverlay",
			"()Z"
		);
	}
	jint Window::getStatusBarColor() const
	{
		return callMethod<jint>(
			"getStatusBarColor",
			"()I"
		);
	}
	JObject Window::getSystemGestureExclusionRects() const
	{
		return callObjectMethod(
			"getSystemGestureExclusionRects",
			"()Ljava/util/List;"
		);
	}
	jlong Window::getTransitionBackgroundFadeDuration() const
	{
		return callMethod<jlong>(
			"getTransitionBackgroundFadeDuration",
			"()J"
		);
	}
	android::transition::TransitionManager Window::getTransitionManager() const
	{
		return callObjectMethod(
			"getTransitionManager",
			"()Landroid/transition/TransitionManager;"
		);
	}
	jint Window::getVolumeControlStream() const
	{
		return callMethod<jint>(
			"getVolumeControlStream",
			"()I"
		);
	}
	JObject Window::getWindowManager() const
	{
		return callObjectMethod(
			"getWindowManager",
			"()Landroid/view/WindowManager;"
		);
	}
	android::content::res::TypedArray Window::getWindowStyle() const
	{
		return callObjectMethod(
			"getWindowStyle",
			"()Landroid/content/res/TypedArray;"
		);
	}
	jboolean Window::hasChildren() const
	{
		return callMethod<jboolean>(
			"hasChildren",
			"()Z"
		);
	}
	jboolean Window::hasFeature(jint arg0) const
	{
		return callMethod<jboolean>(
			"hasFeature",
			"(I)Z",
			arg0
		);
	}
	void Window::injectInputEvent(android::view::InputEvent arg0) const
	{
		callMethod<void>(
			"injectInputEvent",
			"(Landroid/view/InputEvent;)V",
			arg0.object()
		);
	}
	void Window::invalidatePanelMenu(jint arg0) const
	{
		callMethod<void>(
			"invalidatePanelMenu",
			"(I)V",
			arg0
		);
	}
	jboolean Window::isActive() const
	{
		return callMethod<jboolean>(
			"isActive",
			"()Z"
		);
	}
	jboolean Window::isFloating() const
	{
		return callMethod<jboolean>(
			"isFloating",
			"()Z"
		);
	}
	jboolean Window::isNavigationBarContrastEnforced() const
	{
		return callMethod<jboolean>(
			"isNavigationBarContrastEnforced",
			"()Z"
		);
	}
	jboolean Window::isShortcutKey(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"isShortcutKey",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean Window::isStatusBarContrastEnforced() const
	{
		return callMethod<jboolean>(
			"isStatusBarContrastEnforced",
			"()Z"
		);
	}
	jboolean Window::isWideColorGamut() const
	{
		return callMethod<jboolean>(
			"isWideColorGamut",
			"()Z"
		);
	}
	void Window::makeActive() const
	{
		callMethod<void>(
			"makeActive",
			"()V"
		);
	}
	void Window::onConfigurationChanged(android::content::res::Configuration arg0) const
	{
		callMethod<void>(
			"onConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.object()
		);
	}
	void Window::openPanel(jint arg0, android::view::KeyEvent arg1) const
	{
		callMethod<void>(
			"openPanel",
			"(ILandroid/view/KeyEvent;)V",
			arg0,
			arg1.object()
		);
	}
	android::view::View Window::peekDecorView() const
	{
		return callObjectMethod(
			"peekDecorView",
			"()Landroid/view/View;"
		);
	}
	jboolean Window::performContextMenuIdentifierAction(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"performContextMenuIdentifierAction",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean Window::performPanelIdentifierAction(jint arg0, jint arg1, jint arg2) const
	{
		return callMethod<jboolean>(
			"performPanelIdentifierAction",
			"(III)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean Window::performPanelShortcut(jint arg0, jint arg1, android::view::KeyEvent arg2, jint arg3) const
	{
		return callMethod<jboolean>(
			"performPanelShortcut",
			"(IILandroid/view/KeyEvent;I)Z",
			arg0,
			arg1,
			arg2.object(),
			arg3
		);
	}
	void Window::removeOnFrameMetricsAvailableListener(JObject arg0) const
	{
		callMethod<void>(
			"removeOnFrameMetricsAvailableListener",
			"(Landroid/view/Window$OnFrameMetricsAvailableListener;)V",
			arg0.object()
		);
	}
	jboolean Window::requestFeature(jint arg0) const
	{
		return callMethod<jboolean>(
			"requestFeature",
			"(I)Z",
			arg0
		);
	}
	android::view::View Window::requireViewById(jint arg0) const
	{
		return callObjectMethod(
			"requireViewById",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	void Window::restoreHierarchyState(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"restoreHierarchyState",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	android::os::Bundle Window::saveHierarchyState() const
	{
		return callObjectMethod(
			"saveHierarchyState",
			"()Landroid/os/Bundle;"
		);
	}
	void Window::setAllowEnterTransitionOverlap(jboolean arg0) const
	{
		callMethod<void>(
			"setAllowEnterTransitionOverlap",
			"(Z)V",
			arg0
		);
	}
	void Window::setAllowReturnTransitionOverlap(jboolean arg0) const
	{
		callMethod<void>(
			"setAllowReturnTransitionOverlap",
			"(Z)V",
			arg0
		);
	}
	void Window::setAttributes(android::view::WindowManager_LayoutParams arg0) const
	{
		callMethod<void>(
			"setAttributes",
			"(Landroid/view/WindowManager$LayoutParams;)V",
			arg0.object()
		);
	}
	void Window::setBackgroundDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setBackgroundDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void Window::setBackgroundDrawableResource(jint arg0) const
	{
		callMethod<void>(
			"setBackgroundDrawableResource",
			"(I)V",
			arg0
		);
	}
	void Window::setCallback(JObject arg0) const
	{
		callMethod<void>(
			"setCallback",
			"(Landroid/view/Window$Callback;)V",
			arg0.object()
		);
	}
	void Window::setChildDrawable(jint arg0, android::graphics::drawable::Drawable arg1) const
	{
		callMethod<void>(
			"setChildDrawable",
			"(ILandroid/graphics/drawable/Drawable;)V",
			arg0,
			arg1.object()
		);
	}
	void Window::setChildInt(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setChildInt",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Window::setClipToOutline(jboolean arg0) const
	{
		callMethod<void>(
			"setClipToOutline",
			"(Z)V",
			arg0
		);
	}
	void Window::setColorMode(jint arg0) const
	{
		callMethod<void>(
			"setColorMode",
			"(I)V",
			arg0
		);
	}
	void Window::setContainer(android::view::Window arg0) const
	{
		callMethod<void>(
			"setContainer",
			"(Landroid/view/Window;)V",
			arg0.object()
		);
	}
	void Window::setContentView(android::view::View arg0) const
	{
		callMethod<void>(
			"setContentView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void Window::setContentView(jint arg0) const
	{
		callMethod<void>(
			"setContentView",
			"(I)V",
			arg0
		);
	}
	void Window::setContentView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1) const
	{
		callMethod<void>(
			"setContentView",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Window::setDecorCaptionShade(jint arg0) const
	{
		callMethod<void>(
			"setDecorCaptionShade",
			"(I)V",
			arg0
		);
	}
	void Window::setDimAmount(jfloat arg0) const
	{
		callMethod<void>(
			"setDimAmount",
			"(F)V",
			arg0
		);
	}
	void Window::setElevation(jfloat arg0) const
	{
		callMethod<void>(
			"setElevation",
			"(F)V",
			arg0
		);
	}
	void Window::setEnterTransition(android::transition::Transition arg0) const
	{
		callMethod<void>(
			"setEnterTransition",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
	void Window::setExitTransition(android::transition::Transition arg0) const
	{
		callMethod<void>(
			"setExitTransition",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
	void Window::setFeatureDrawable(jint arg0, android::graphics::drawable::Drawable arg1) const
	{
		callMethod<void>(
			"setFeatureDrawable",
			"(ILandroid/graphics/drawable/Drawable;)V",
			arg0,
			arg1.object()
		);
	}
	void Window::setFeatureDrawableAlpha(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setFeatureDrawableAlpha",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Window::setFeatureDrawableResource(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setFeatureDrawableResource",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Window::setFeatureDrawableUri(jint arg0, android::net::Uri arg1) const
	{
		callMethod<void>(
			"setFeatureDrawableUri",
			"(ILandroid/net/Uri;)V",
			arg0,
			arg1.object()
		);
	}
	void Window::setFeatureInt(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setFeatureInt",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Window::setFlags(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setFlags",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Window::setFormat(jint arg0) const
	{
		callMethod<void>(
			"setFormat",
			"(I)V",
			arg0
		);
	}
	void Window::setGravity(jint arg0) const
	{
		callMethod<void>(
			"setGravity",
			"(I)V",
			arg0
		);
	}
	void Window::setIcon(jint arg0) const
	{
		callMethod<void>(
			"setIcon",
			"(I)V",
			arg0
		);
	}
	void Window::setLayout(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setLayout",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Window::setLocalFocus(jboolean arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setLocalFocus",
			"(ZZ)V",
			arg0,
			arg1
		);
	}
	void Window::setLogo(jint arg0) const
	{
		callMethod<void>(
			"setLogo",
			"(I)V",
			arg0
		);
	}
	void Window::setMediaController(android::media::session::MediaController arg0) const
	{
		callMethod<void>(
			"setMediaController",
			"(Landroid/media/session/MediaController;)V",
			arg0.object()
		);
	}
	void Window::setNavigationBarColor(jint arg0) const
	{
		callMethod<void>(
			"setNavigationBarColor",
			"(I)V",
			arg0
		);
	}
	void Window::setNavigationBarContrastEnforced(jboolean arg0) const
	{
		callMethod<void>(
			"setNavigationBarContrastEnforced",
			"(Z)V",
			arg0
		);
	}
	void Window::setNavigationBarDividerColor(jint arg0) const
	{
		callMethod<void>(
			"setNavigationBarDividerColor",
			"(I)V",
			arg0
		);
	}
	void Window::setReenterTransition(android::transition::Transition arg0) const
	{
		callMethod<void>(
			"setReenterTransition",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
	void Window::setResizingCaptionDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setResizingCaptionDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void Window::setRestrictedCaptionAreaListener(JObject arg0) const
	{
		callMethod<void>(
			"setRestrictedCaptionAreaListener",
			"(Landroid/view/Window$OnRestrictedCaptionAreaChangedListener;)V",
			arg0.object()
		);
	}
	void Window::setReturnTransition(android::transition::Transition arg0) const
	{
		callMethod<void>(
			"setReturnTransition",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
	void Window::setSharedElementEnterTransition(android::transition::Transition arg0) const
	{
		callMethod<void>(
			"setSharedElementEnterTransition",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
	void Window::setSharedElementExitTransition(android::transition::Transition arg0) const
	{
		callMethod<void>(
			"setSharedElementExitTransition",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
	void Window::setSharedElementReenterTransition(android::transition::Transition arg0) const
	{
		callMethod<void>(
			"setSharedElementReenterTransition",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
	void Window::setSharedElementReturnTransition(android::transition::Transition arg0) const
	{
		callMethod<void>(
			"setSharedElementReturnTransition",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
	void Window::setSharedElementsUseOverlay(jboolean arg0) const
	{
		callMethod<void>(
			"setSharedElementsUseOverlay",
			"(Z)V",
			arg0
		);
	}
	void Window::setSoftInputMode(jint arg0) const
	{
		callMethod<void>(
			"setSoftInputMode",
			"(I)V",
			arg0
		);
	}
	void Window::setStatusBarColor(jint arg0) const
	{
		callMethod<void>(
			"setStatusBarColor",
			"(I)V",
			arg0
		);
	}
	void Window::setStatusBarContrastEnforced(jboolean arg0) const
	{
		callMethod<void>(
			"setStatusBarContrastEnforced",
			"(Z)V",
			arg0
		);
	}
	void Window::setSustainedPerformanceMode(jboolean arg0) const
	{
		callMethod<void>(
			"setSustainedPerformanceMode",
			"(Z)V",
			arg0
		);
	}
	void Window::setSystemGestureExclusionRects(JObject arg0) const
	{
		callMethod<void>(
			"setSystemGestureExclusionRects",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void Window::setTitle(JString arg0) const
	{
		callMethod<void>(
			"setTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void Window::setTitleColor(jint arg0) const
	{
		callMethod<void>(
			"setTitleColor",
			"(I)V",
			arg0
		);
	}
	void Window::setTransitionBackgroundFadeDuration(jlong arg0) const
	{
		callMethod<void>(
			"setTransitionBackgroundFadeDuration",
			"(J)V",
			arg0
		);
	}
	void Window::setTransitionManager(android::transition::TransitionManager arg0) const
	{
		callMethod<void>(
			"setTransitionManager",
			"(Landroid/transition/TransitionManager;)V",
			arg0.object()
		);
	}
	void Window::setType(jint arg0) const
	{
		callMethod<void>(
			"setType",
			"(I)V",
			arg0
		);
	}
	void Window::setUiOptions(jint arg0) const
	{
		callMethod<void>(
			"setUiOptions",
			"(I)V",
			arg0
		);
	}
	void Window::setUiOptions(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setUiOptions",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Window::setVolumeControlStream(jint arg0) const
	{
		callMethod<void>(
			"setVolumeControlStream",
			"(I)V",
			arg0
		);
	}
	void Window::setWindowAnimations(jint arg0) const
	{
		callMethod<void>(
			"setWindowAnimations",
			"(I)V",
			arg0
		);
	}
	void Window::setWindowManager(JObject arg0, JObject arg1, JString arg2) const
	{
		callMethod<void>(
			"setWindowManager",
			"(Landroid/view/WindowManager;Landroid/os/IBinder;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>()
		);
	}
	void Window::setWindowManager(JObject arg0, JObject arg1, JString arg2, jboolean arg3) const
	{
		callMethod<void>(
			"setWindowManager",
			"(Landroid/view/WindowManager;Landroid/os/IBinder;Ljava/lang/String;Z)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>(),
			arg3
		);
	}
	jboolean Window::superDispatchGenericMotionEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"superDispatchGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean Window::superDispatchKeyEvent(android::view::KeyEvent arg0) const
	{
		return callMethod<jboolean>(
			"superDispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	jboolean Window::superDispatchKeyShortcutEvent(android::view::KeyEvent arg0) const
	{
		return callMethod<jboolean>(
			"superDispatchKeyShortcutEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	jboolean Window::superDispatchTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"superDispatchTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean Window::superDispatchTrackballEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"superDispatchTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	void Window::takeInputQueue(JObject arg0) const
	{
		callMethod<void>(
			"takeInputQueue",
			"(Landroid/view/InputQueue$Callback;)V",
			arg0.object()
		);
	}
	void Window::takeKeyEvents(jboolean arg0) const
	{
		callMethod<void>(
			"takeKeyEvents",
			"(Z)V",
			arg0
		);
	}
	void Window::takeSurface(JObject arg0) const
	{
		callMethod<void>(
			"takeSurface",
			"(Landroid/view/SurfaceHolder$Callback2;)V",
			arg0.object()
		);
	}
	void Window::togglePanel(jint arg0, android::view::KeyEvent arg1) const
	{
		callMethod<void>(
			"togglePanel",
			"(ILandroid/view/KeyEvent;)V",
			arg0,
			arg1.object()
		);
	}
} // namespace android::view

