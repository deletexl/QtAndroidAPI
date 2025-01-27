#include "../graphics/Canvas.hpp"
#include "../graphics/Point.hpp"
#include "./View.hpp"
#include "./View_DragShadowBuilder.hpp"

namespace android::view
{
	// Fields
	
	// QJniObject forward
	View_DragShadowBuilder::View_DragShadowBuilder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	View_DragShadowBuilder::View_DragShadowBuilder()
		: JObject(
			"android.view.View$DragShadowBuilder",
			"()V"
		) {}
	View_DragShadowBuilder::View_DragShadowBuilder(android::view::View arg0)
		: JObject(
			"android.view.View$DragShadowBuilder",
			"(Landroid/view/View;)V",
			arg0.object()
		) {}
	
	// Methods
	android::view::View View_DragShadowBuilder::getView() const
	{
		return callObjectMethod(
			"getView",
			"()Landroid/view/View;"
		);
	}
	void View_DragShadowBuilder::onDrawShadow(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"onDrawShadow",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	void View_DragShadowBuilder::onProvideShadowMetrics(android::graphics::Point arg0, android::graphics::Point arg1) const
	{
		callMethod<void>(
			"onProvideShadowMetrics",
			"(Landroid/graphics/Point;Landroid/graphics/Point;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::view

