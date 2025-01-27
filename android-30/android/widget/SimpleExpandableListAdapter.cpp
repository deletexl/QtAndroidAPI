#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "../../JObject.hpp"
#include "./SimpleExpandableListAdapter.hpp"

namespace android::widget
{
	// Fields
	
	// QJniObject forward
	SimpleExpandableListAdapter::SimpleExpandableListAdapter(QJniObject obj) : android::widget::BaseExpandableListAdapter(obj) {}
	
	// Constructors
	SimpleExpandableListAdapter::SimpleExpandableListAdapter(android::content::Context arg0, JObject arg1, jint arg2, JArray arg3, JIntArray arg4, JObject arg5, jint arg6, JArray arg7, JIntArray arg8)
		: android::widget::BaseExpandableListAdapter(
			"android.widget.SimpleExpandableListAdapter",
			"(Landroid/content/Context;Ljava/util/List;I[Ljava/lang/String;[ILjava/util/List;I[Ljava/lang/String;[I)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object<jarray>(),
			arg4.object<jintArray>(),
			arg5.object(),
			arg6,
			arg7.object<jarray>(),
			arg8.object<jintArray>()
		) {}
	SimpleExpandableListAdapter::SimpleExpandableListAdapter(android::content::Context arg0, JObject arg1, jint arg2, jint arg3, JArray arg4, JIntArray arg5, JObject arg6, jint arg7, JArray arg8, JIntArray arg9)
		: android::widget::BaseExpandableListAdapter(
			"android.widget.SimpleExpandableListAdapter",
			"(Landroid/content/Context;Ljava/util/List;II[Ljava/lang/String;[ILjava/util/List;I[Ljava/lang/String;[I)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4.object<jarray>(),
			arg5.object<jintArray>(),
			arg6.object(),
			arg7,
			arg8.object<jarray>(),
			arg9.object<jintArray>()
		) {}
	SimpleExpandableListAdapter::SimpleExpandableListAdapter(android::content::Context arg0, JObject arg1, jint arg2, jint arg3, JArray arg4, JIntArray arg5, JObject arg6, jint arg7, jint arg8, JArray arg9, JIntArray arg10)
		: android::widget::BaseExpandableListAdapter(
			"android.widget.SimpleExpandableListAdapter",
			"(Landroid/content/Context;Ljava/util/List;II[Ljava/lang/String;[ILjava/util/List;II[Ljava/lang/String;[I)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4.object<jarray>(),
			arg5.object<jintArray>(),
			arg6.object(),
			arg7,
			arg8,
			arg9.object<jarray>(),
			arg10.object<jintArray>()
		) {}
	
	// Methods
	JObject SimpleExpandableListAdapter::getChild(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getChild",
			"(II)Ljava/lang/Object;",
			arg0,
			arg1
		);
	}
	jlong SimpleExpandableListAdapter::getChildId(jint arg0, jint arg1) const
	{
		return callMethod<jlong>(
			"getChildId",
			"(II)J",
			arg0,
			arg1
		);
	}
	android::view::View SimpleExpandableListAdapter::getChildView(jint arg0, jint arg1, jboolean arg2, android::view::View arg3, android::view::ViewGroup arg4) const
	{
		return callObjectMethod(
			"getChildView",
			"(IIZLandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0,
			arg1,
			arg2,
			arg3.object(),
			arg4.object()
		);
	}
	jint SimpleExpandableListAdapter::getChildrenCount(jint arg0) const
	{
		return callMethod<jint>(
			"getChildrenCount",
			"(I)I",
			arg0
		);
	}
	JObject SimpleExpandableListAdapter::getGroup(jint arg0) const
	{
		return callObjectMethod(
			"getGroup",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	jint SimpleExpandableListAdapter::getGroupCount() const
	{
		return callMethod<jint>(
			"getGroupCount",
			"()I"
		);
	}
	jlong SimpleExpandableListAdapter::getGroupId(jint arg0) const
	{
		return callMethod<jlong>(
			"getGroupId",
			"(I)J",
			arg0
		);
	}
	android::view::View SimpleExpandableListAdapter::getGroupView(jint arg0, jboolean arg1, android::view::View arg2, android::view::ViewGroup arg3) const
	{
		return callObjectMethod(
			"getGroupView",
			"(IZLandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0,
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
	jboolean SimpleExpandableListAdapter::hasStableIds() const
	{
		return callMethod<jboolean>(
			"hasStableIds",
			"()Z"
		);
	}
	jboolean SimpleExpandableListAdapter::isChildSelectable(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"isChildSelectable",
			"(II)Z",
			arg0,
			arg1
		);
	}
	android::view::View SimpleExpandableListAdapter::newChildView(jboolean arg0, android::view::ViewGroup arg1) const
	{
		return callObjectMethod(
			"newChildView",
			"(ZLandroid/view/ViewGroup;)Landroid/view/View;",
			arg0,
			arg1.object()
		);
	}
	android::view::View SimpleExpandableListAdapter::newGroupView(jboolean arg0, android::view::ViewGroup arg1) const
	{
		return callObjectMethod(
			"newGroupView",
			"(ZLandroid/view/ViewGroup;)Landroid/view/View;",
			arg0,
			arg1.object()
		);
	}
} // namespace android::widget

