#include "../graphics/drawable/Drawable.hpp"
#include "../view/View.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "./ActionBar_Tab.hpp"

namespace android::app
{
	// Fields
	jint ActionBar_Tab::INVALID_POSITION()
	{
		return getStaticField<jint>(
			"android.app.ActionBar$Tab",
			"INVALID_POSITION"
		);
	}
	
	// QJniObject forward
	ActionBar_Tab::ActionBar_Tab(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ActionBar_Tab::ActionBar_Tab()
		: JObject(
			"android.app.ActionBar$Tab",
			"()V"
		) {}
	
	// Methods
	JString ActionBar_Tab::getContentDescription() const
	{
		return callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	android::view::View ActionBar_Tab::getCustomView() const
	{
		return callObjectMethod(
			"getCustomView",
			"()Landroid/view/View;"
		);
	}
	android::graphics::drawable::Drawable ActionBar_Tab::getIcon() const
	{
		return callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint ActionBar_Tab::getPosition() const
	{
		return callMethod<jint>(
			"getPosition",
			"()I"
		);
	}
	JObject ActionBar_Tab::getTag() const
	{
		return callObjectMethod(
			"getTag",
			"()Ljava/lang/Object;"
		);
	}
	JString ActionBar_Tab::getText() const
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		);
	}
	void ActionBar_Tab::select() const
	{
		callMethod<void>(
			"select",
			"()V"
		);
	}
	android::app::ActionBar_Tab ActionBar_Tab::setContentDescription(jint arg0) const
	{
		return callObjectMethod(
			"setContentDescription",
			"(I)Landroid/app/ActionBar$Tab;",
			arg0
		);
	}
	android::app::ActionBar_Tab ActionBar_Tab::setContentDescription(JString arg0) const
	{
		return callObjectMethod(
			"setContentDescription",
			"(Ljava/lang/CharSequence;)Landroid/app/ActionBar$Tab;",
			arg0.object<jstring>()
		);
	}
	android::app::ActionBar_Tab ActionBar_Tab::setCustomView(android::view::View arg0) const
	{
		return callObjectMethod(
			"setCustomView",
			"(Landroid/view/View;)Landroid/app/ActionBar$Tab;",
			arg0.object()
		);
	}
	android::app::ActionBar_Tab ActionBar_Tab::setCustomView(jint arg0) const
	{
		return callObjectMethod(
			"setCustomView",
			"(I)Landroid/app/ActionBar$Tab;",
			arg0
		);
	}
	android::app::ActionBar_Tab ActionBar_Tab::setIcon(android::graphics::drawable::Drawable arg0) const
	{
		return callObjectMethod(
			"setIcon",
			"(Landroid/graphics/drawable/Drawable;)Landroid/app/ActionBar$Tab;",
			arg0.object()
		);
	}
	android::app::ActionBar_Tab ActionBar_Tab::setIcon(jint arg0) const
	{
		return callObjectMethod(
			"setIcon",
			"(I)Landroid/app/ActionBar$Tab;",
			arg0
		);
	}
	android::app::ActionBar_Tab ActionBar_Tab::setTabListener(JObject arg0) const
	{
		return callObjectMethod(
			"setTabListener",
			"(Landroid/app/ActionBar$TabListener;)Landroid/app/ActionBar$Tab;",
			arg0.object()
		);
	}
	android::app::ActionBar_Tab ActionBar_Tab::setTag(JObject arg0) const
	{
		return callObjectMethod(
			"setTag",
			"(Ljava/lang/Object;)Landroid/app/ActionBar$Tab;",
			arg0.object<jobject>()
		);
	}
	android::app::ActionBar_Tab ActionBar_Tab::setText(jint arg0) const
	{
		return callObjectMethod(
			"setText",
			"(I)Landroid/app/ActionBar$Tab;",
			arg0
		);
	}
	android::app::ActionBar_Tab ActionBar_Tab::setText(JString arg0) const
	{
		return callObjectMethod(
			"setText",
			"(Ljava/lang/CharSequence;)Landroid/app/ActionBar$Tab;",
			arg0.object<jstring>()
		);
	}
} // namespace android::app

