#include "../content/Context.hpp"
#include "./View.hpp"
#include "./ViewGroup.hpp"
#include "../../JString.hpp"
#include "./LayoutInflater.hpp"

namespace android::view
{
	// Fields
	
	// QJniObject forward
	LayoutInflater::LayoutInflater(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::view::LayoutInflater LayoutInflater::from(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.view.LayoutInflater",
			"from",
			"(Landroid/content/Context;)Landroid/view/LayoutInflater;",
			arg0.object()
		);
	}
	android::view::LayoutInflater LayoutInflater::cloneInContext(android::content::Context arg0) const
	{
		return callObjectMethod(
			"cloneInContext",
			"(Landroid/content/Context;)Landroid/view/LayoutInflater;",
			arg0.object()
		);
	}
	android::view::View LayoutInflater::createView(JString arg0, JString arg1, JObject arg2) const
	{
		return callObjectMethod(
			"createView",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/util/AttributeSet;)Landroid/view/View;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	android::view::View LayoutInflater::createView(android::content::Context arg0, JString arg1, JString arg2, JObject arg3) const
	{
		return callObjectMethod(
			"createView",
			"(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Landroid/util/AttributeSet;)Landroid/view/View;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object()
		);
	}
	android::content::Context LayoutInflater::getContext() const
	{
		return callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	JObject LayoutInflater::getFactory() const
	{
		return callObjectMethod(
			"getFactory",
			"()Landroid/view/LayoutInflater$Factory;"
		);
	}
	JObject LayoutInflater::getFactory2() const
	{
		return callObjectMethod(
			"getFactory2",
			"()Landroid/view/LayoutInflater$Factory2;"
		);
	}
	JObject LayoutInflater::getFilter() const
	{
		return callObjectMethod(
			"getFilter",
			"()Landroid/view/LayoutInflater$Filter;"
		);
	}
	android::view::View LayoutInflater::inflate(jint arg0, android::view::ViewGroup arg1) const
	{
		return callObjectMethod(
			"inflate",
			"(ILandroid/view/ViewGroup;)Landroid/view/View;",
			arg0,
			arg1.object()
		);
	}
	android::view::View LayoutInflater::inflate(JObject arg0, android::view::ViewGroup arg1) const
	{
		return callObjectMethod(
			"inflate",
			"(Lorg/xmlpull/v1/XmlPullParser;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0.object(),
			arg1.object()
		);
	}
	android::view::View LayoutInflater::inflate(jint arg0, android::view::ViewGroup arg1, jboolean arg2) const
	{
		return callObjectMethod(
			"inflate",
			"(ILandroid/view/ViewGroup;Z)Landroid/view/View;",
			arg0,
			arg1.object(),
			arg2
		);
	}
	android::view::View LayoutInflater::inflate(JObject arg0, android::view::ViewGroup arg1, jboolean arg2) const
	{
		return callObjectMethod(
			"inflate",
			"(Lorg/xmlpull/v1/XmlPullParser;Landroid/view/ViewGroup;Z)Landroid/view/View;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	android::view::View LayoutInflater::onCreateView(android::content::Context arg0, android::view::View arg1, JString arg2, JObject arg3) const
	{
		return callObjectMethod(
			"onCreateView",
			"(Landroid/content/Context;Landroid/view/View;Ljava/lang/String;Landroid/util/AttributeSet;)Landroid/view/View;",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>(),
			arg3.object()
		);
	}
	void LayoutInflater::setFactory(JObject arg0) const
	{
		callMethod<void>(
			"setFactory",
			"(Landroid/view/LayoutInflater$Factory;)V",
			arg0.object()
		);
	}
	void LayoutInflater::setFactory2(JObject arg0) const
	{
		callMethod<void>(
			"setFactory2",
			"(Landroid/view/LayoutInflater$Factory2;)V",
			arg0.object()
		);
	}
	void LayoutInflater::setFilter(JObject arg0) const
	{
		callMethod<void>(
			"setFilter",
			"(Landroid/view/LayoutInflater$Filter;)V",
			arg0.object()
		);
	}
} // namespace android::view

