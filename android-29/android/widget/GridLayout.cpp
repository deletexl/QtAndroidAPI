#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "./GridLayout_Alignment.hpp"
#include "./GridLayout_LayoutParams.hpp"
#include "./GridLayout_Spec.hpp"
#include "../../JString.hpp"
#include "./GridLayout.hpp"

namespace android::widget
{
	// Fields
	jint GridLayout::ALIGN_BOUNDS()
	{
		return getStaticField<jint>(
			"android.widget.GridLayout",
			"ALIGN_BOUNDS"
		);
	}
	jint GridLayout::ALIGN_MARGINS()
	{
		return getStaticField<jint>(
			"android.widget.GridLayout",
			"ALIGN_MARGINS"
		);
	}
	android::widget::GridLayout_Alignment GridLayout::BASELINE()
	{
		return getStaticObjectField(
			"android.widget.GridLayout",
			"BASELINE",
			"Landroid/widget/GridLayout$Alignment;"
		);
	}
	android::widget::GridLayout_Alignment GridLayout::BOTTOM()
	{
		return getStaticObjectField(
			"android.widget.GridLayout",
			"BOTTOM",
			"Landroid/widget/GridLayout$Alignment;"
		);
	}
	android::widget::GridLayout_Alignment GridLayout::CENTER()
	{
		return getStaticObjectField(
			"android.widget.GridLayout",
			"CENTER",
			"Landroid/widget/GridLayout$Alignment;"
		);
	}
	android::widget::GridLayout_Alignment GridLayout::END()
	{
		return getStaticObjectField(
			"android.widget.GridLayout",
			"END",
			"Landroid/widget/GridLayout$Alignment;"
		);
	}
	android::widget::GridLayout_Alignment GridLayout::FILL()
	{
		return getStaticObjectField(
			"android.widget.GridLayout",
			"FILL",
			"Landroid/widget/GridLayout$Alignment;"
		);
	}
	jint GridLayout::HORIZONTAL()
	{
		return getStaticField<jint>(
			"android.widget.GridLayout",
			"HORIZONTAL"
		);
	}
	android::widget::GridLayout_Alignment GridLayout::LEFT()
	{
		return getStaticObjectField(
			"android.widget.GridLayout",
			"LEFT",
			"Landroid/widget/GridLayout$Alignment;"
		);
	}
	android::widget::GridLayout_Alignment GridLayout::RIGHT()
	{
		return getStaticObjectField(
			"android.widget.GridLayout",
			"RIGHT",
			"Landroid/widget/GridLayout$Alignment;"
		);
	}
	android::widget::GridLayout_Alignment GridLayout::START()
	{
		return getStaticObjectField(
			"android.widget.GridLayout",
			"START",
			"Landroid/widget/GridLayout$Alignment;"
		);
	}
	android::widget::GridLayout_Alignment GridLayout::TOP()
	{
		return getStaticObjectField(
			"android.widget.GridLayout",
			"TOP",
			"Landroid/widget/GridLayout$Alignment;"
		);
	}
	jint GridLayout::UNDEFINED()
	{
		return getStaticField<jint>(
			"android.widget.GridLayout",
			"UNDEFINED"
		);
	}
	jint GridLayout::VERTICAL()
	{
		return getStaticField<jint>(
			"android.widget.GridLayout",
			"VERTICAL"
		);
	}
	
	// QJniObject forward
	GridLayout::GridLayout(QJniObject obj) : android::view::ViewGroup(obj) {}
	
	// Constructors
	GridLayout::GridLayout(android::content::Context arg0)
		: android::view::ViewGroup(
			"android.widget.GridLayout",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	GridLayout::GridLayout(android::content::Context arg0, JObject arg1)
		: android::view::ViewGroup(
			"android.widget.GridLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	GridLayout::GridLayout(android::content::Context arg0, JObject arg1, jint arg2)
		: android::view::ViewGroup(
			"android.widget.GridLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	GridLayout::GridLayout(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::view::ViewGroup(
			"android.widget.GridLayout",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	android::widget::GridLayout_Spec GridLayout::spec(jint arg0)
	{
		return callStaticObjectMethod(
			"android.widget.GridLayout",
			"spec",
			"(I)Landroid/widget/GridLayout$Spec;",
			arg0
		);
	}
	android::widget::GridLayout_Spec GridLayout::spec(jint arg0, android::widget::GridLayout_Alignment arg1)
	{
		return callStaticObjectMethod(
			"android.widget.GridLayout",
			"spec",
			"(ILandroid/widget/GridLayout$Alignment;)Landroid/widget/GridLayout$Spec;",
			arg0,
			arg1.object()
		);
	}
	android::widget::GridLayout_Spec GridLayout::spec(jint arg0, jfloat arg1)
	{
		return callStaticObjectMethod(
			"android.widget.GridLayout",
			"spec",
			"(IF)Landroid/widget/GridLayout$Spec;",
			arg0,
			arg1
		);
	}
	android::widget::GridLayout_Spec GridLayout::spec(jint arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.widget.GridLayout",
			"spec",
			"(II)Landroid/widget/GridLayout$Spec;",
			arg0,
			arg1
		);
	}
	android::widget::GridLayout_Spec GridLayout::spec(jint arg0, android::widget::GridLayout_Alignment arg1, jfloat arg2)
	{
		return callStaticObjectMethod(
			"android.widget.GridLayout",
			"spec",
			"(ILandroid/widget/GridLayout$Alignment;F)Landroid/widget/GridLayout$Spec;",
			arg0,
			arg1.object(),
			arg2
		);
	}
	android::widget::GridLayout_Spec GridLayout::spec(jint arg0, jint arg1, android::widget::GridLayout_Alignment arg2)
	{
		return callStaticObjectMethod(
			"android.widget.GridLayout",
			"spec",
			"(IILandroid/widget/GridLayout$Alignment;)Landroid/widget/GridLayout$Spec;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	android::widget::GridLayout_Spec GridLayout::spec(jint arg0, jint arg1, jfloat arg2)
	{
		return callStaticObjectMethod(
			"android.widget.GridLayout",
			"spec",
			"(IIF)Landroid/widget/GridLayout$Spec;",
			arg0,
			arg1,
			arg2
		);
	}
	android::widget::GridLayout_Spec GridLayout::spec(jint arg0, jint arg1, android::widget::GridLayout_Alignment arg2, jfloat arg3)
	{
		return callStaticObjectMethod(
			"android.widget.GridLayout",
			"spec",
			"(IILandroid/widget/GridLayout$Alignment;F)Landroid/widget/GridLayout$Spec;",
			arg0,
			arg1,
			arg2.object(),
			arg3
		);
	}
	android::widget::GridLayout_LayoutParams GridLayout::generateLayoutParams(JObject arg0) const
	{
		return callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/widget/GridLayout$LayoutParams;",
			arg0.object()
		);
	}
	JString GridLayout::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint GridLayout::getAlignmentMode() const
	{
		return callMethod<jint>(
			"getAlignmentMode",
			"()I"
		);
	}
	jint GridLayout::getColumnCount() const
	{
		return callMethod<jint>(
			"getColumnCount",
			"()I"
		);
	}
	jint GridLayout::getOrientation() const
	{
		return callMethod<jint>(
			"getOrientation",
			"()I"
		);
	}
	jint GridLayout::getRowCount() const
	{
		return callMethod<jint>(
			"getRowCount",
			"()I"
		);
	}
	jboolean GridLayout::getUseDefaultMargins() const
	{
		return callMethod<jboolean>(
			"getUseDefaultMargins",
			"()Z"
		);
	}
	jboolean GridLayout::isColumnOrderPreserved() const
	{
		return callMethod<jboolean>(
			"isColumnOrderPreserved",
			"()Z"
		);
	}
	jboolean GridLayout::isRowOrderPreserved() const
	{
		return callMethod<jboolean>(
			"isRowOrderPreserved",
			"()Z"
		);
	}
	void GridLayout::onViewAdded(android::view::View arg0) const
	{
		callMethod<void>(
			"onViewAdded",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void GridLayout::onViewRemoved(android::view::View arg0) const
	{
		callMethod<void>(
			"onViewRemoved",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void GridLayout::requestLayout() const
	{
		callMethod<void>(
			"requestLayout",
			"()V"
		);
	}
	void GridLayout::setAlignmentMode(jint arg0) const
	{
		callMethod<void>(
			"setAlignmentMode",
			"(I)V",
			arg0
		);
	}
	void GridLayout::setColumnCount(jint arg0) const
	{
		callMethod<void>(
			"setColumnCount",
			"(I)V",
			arg0
		);
	}
	void GridLayout::setColumnOrderPreserved(jboolean arg0) const
	{
		callMethod<void>(
			"setColumnOrderPreserved",
			"(Z)V",
			arg0
		);
	}
	void GridLayout::setOrientation(jint arg0) const
	{
		callMethod<void>(
			"setOrientation",
			"(I)V",
			arg0
		);
	}
	void GridLayout::setRowCount(jint arg0) const
	{
		callMethod<void>(
			"setRowCount",
			"(I)V",
			arg0
		);
	}
	void GridLayout::setRowOrderPreserved(jboolean arg0) const
	{
		callMethod<void>(
			"setRowOrderPreserved",
			"(Z)V",
			arg0
		);
	}
	void GridLayout::setUseDefaultMargins(jboolean arg0) const
	{
		callMethod<void>(
			"setUseDefaultMargins",
			"(Z)V",
			arg0
		);
	}
} // namespace android::widget

