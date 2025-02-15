#include "../../JIntArray.hpp"
#include "../content/Context.hpp"
#include "../content/res/ColorStateList.hpp"
#include "../graphics/Bitmap.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/ColorFilter.hpp"
#include "../graphics/Matrix.hpp"
#include "../graphics/PorterDuff_Mode.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../graphics/drawable/Icon.hpp"
#include "../net/Uri.hpp"
#include "./ImageView_ScaleType.hpp"
#include "../../JString.hpp"
#include "./ImageView.hpp"

namespace android::widget
{
	// Fields
	
	// QJniObject forward
	ImageView::ImageView(QJniObject obj) : android::view::View(obj) {}
	
	// Constructors
	ImageView::ImageView(android::content::Context arg0)
		: android::view::View(
			"android.widget.ImageView",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	ImageView::ImageView(android::content::Context arg0, JObject arg1)
		: android::view::View(
			"android.widget.ImageView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	ImageView::ImageView(android::content::Context arg0, JObject arg1, jint arg2)
		: android::view::View(
			"android.widget.ImageView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	ImageView::ImageView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::view::View(
			"android.widget.ImageView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	void ImageView::clearColorFilter() const
	{
		callMethod<void>(
			"clearColorFilter",
			"()V"
		);
	}
	void ImageView::drawableHotspotChanged(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"drawableHotspotChanged",
			"(FF)V",
			arg0,
			arg1
		);
	}
	JString ImageView::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	jboolean ImageView::getAdjustViewBounds() const
	{
		return callMethod<jboolean>(
			"getAdjustViewBounds",
			"()Z"
		);
	}
	jint ImageView::getBaseline() const
	{
		return callMethod<jint>(
			"getBaseline",
			"()I"
		);
	}
	jboolean ImageView::getBaselineAlignBottom() const
	{
		return callMethod<jboolean>(
			"getBaselineAlignBottom",
			"()Z"
		);
	}
	android::graphics::ColorFilter ImageView::getColorFilter() const
	{
		return callObjectMethod(
			"getColorFilter",
			"()Landroid/graphics/ColorFilter;"
		);
	}
	jboolean ImageView::getCropToPadding() const
	{
		return callMethod<jboolean>(
			"getCropToPadding",
			"()Z"
		);
	}
	android::graphics::drawable::Drawable ImageView::getDrawable() const
	{
		return callObjectMethod(
			"getDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint ImageView::getImageAlpha() const
	{
		return callMethod<jint>(
			"getImageAlpha",
			"()I"
		);
	}
	android::graphics::Matrix ImageView::getImageMatrix() const
	{
		return callObjectMethod(
			"getImageMatrix",
			"()Landroid/graphics/Matrix;"
		);
	}
	android::content::res::ColorStateList ImageView::getImageTintList() const
	{
		return callObjectMethod(
			"getImageTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	android::graphics::PorterDuff_Mode ImageView::getImageTintMode() const
	{
		return callObjectMethod(
			"getImageTintMode",
			"()Landroid/graphics/PorterDuff$Mode;"
		);
	}
	jint ImageView::getMaxHeight() const
	{
		return callMethod<jint>(
			"getMaxHeight",
			"()I"
		);
	}
	jint ImageView::getMaxWidth() const
	{
		return callMethod<jint>(
			"getMaxWidth",
			"()I"
		);
	}
	android::widget::ImageView_ScaleType ImageView::getScaleType() const
	{
		return callObjectMethod(
			"getScaleType",
			"()Landroid/widget/ImageView$ScaleType;"
		);
	}
	jboolean ImageView::hasOverlappingRendering() const
	{
		return callMethod<jboolean>(
			"hasOverlappingRendering",
			"()Z"
		);
	}
	void ImageView::invalidateDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"invalidateDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	jboolean ImageView::isOpaque() const
	{
		return callMethod<jboolean>(
			"isOpaque",
			"()Z"
		);
	}
	void ImageView::jumpDrawablesToCurrentState() const
	{
		callMethod<void>(
			"jumpDrawablesToCurrentState",
			"()V"
		);
	}
	JIntArray ImageView::onCreateDrawableState(jint arg0) const
	{
		return callObjectMethod(
			"onCreateDrawableState",
			"(I)[I",
			arg0
		);
	}
	void ImageView::onRtlPropertiesChanged(jint arg0) const
	{
		callMethod<void>(
			"onRtlPropertiesChanged",
			"(I)V",
			arg0
		);
	}
	void ImageView::onVisibilityAggregated(jboolean arg0) const
	{
		callMethod<void>(
			"onVisibilityAggregated",
			"(Z)V",
			arg0
		);
	}
	void ImageView::setAdjustViewBounds(jboolean arg0) const
	{
		callMethod<void>(
			"setAdjustViewBounds",
			"(Z)V",
			arg0
		);
	}
	void ImageView::setAlpha(jint arg0) const
	{
		callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0
		);
	}
	void ImageView::setBaseline(jint arg0) const
	{
		callMethod<void>(
			"setBaseline",
			"(I)V",
			arg0
		);
	}
	void ImageView::setBaselineAlignBottom(jboolean arg0) const
	{
		callMethod<void>(
			"setBaselineAlignBottom",
			"(Z)V",
			arg0
		);
	}
	void ImageView::setColorFilter(android::graphics::ColorFilter arg0) const
	{
		callMethod<void>(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)V",
			arg0.object()
		);
	}
	void ImageView::setColorFilter(jint arg0) const
	{
		callMethod<void>(
			"setColorFilter",
			"(I)V",
			arg0
		);
	}
	void ImageView::setColorFilter(jint arg0, android::graphics::PorterDuff_Mode arg1) const
	{
		callMethod<void>(
			"setColorFilter",
			"(ILandroid/graphics/PorterDuff$Mode;)V",
			arg0,
			arg1.object()
		);
	}
	void ImageView::setCropToPadding(jboolean arg0) const
	{
		callMethod<void>(
			"setCropToPadding",
			"(Z)V",
			arg0
		);
	}
	void ImageView::setImageAlpha(jint arg0) const
	{
		callMethod<void>(
			"setImageAlpha",
			"(I)V",
			arg0
		);
	}
	void ImageView::setImageBitmap(android::graphics::Bitmap arg0) const
	{
		callMethod<void>(
			"setImageBitmap",
			"(Landroid/graphics/Bitmap;)V",
			arg0.object()
		);
	}
	void ImageView::setImageDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setImageDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void ImageView::setImageIcon(android::graphics::drawable::Icon arg0) const
	{
		callMethod<void>(
			"setImageIcon",
			"(Landroid/graphics/drawable/Icon;)V",
			arg0.object()
		);
	}
	void ImageView::setImageLevel(jint arg0) const
	{
		callMethod<void>(
			"setImageLevel",
			"(I)V",
			arg0
		);
	}
	void ImageView::setImageMatrix(android::graphics::Matrix arg0) const
	{
		callMethod<void>(
			"setImageMatrix",
			"(Landroid/graphics/Matrix;)V",
			arg0.object()
		);
	}
	void ImageView::setImageResource(jint arg0) const
	{
		callMethod<void>(
			"setImageResource",
			"(I)V",
			arg0
		);
	}
	void ImageView::setImageState(JIntArray arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setImageState",
			"([IZ)V",
			arg0.object<jintArray>(),
			arg1
		);
	}
	void ImageView::setImageTintList(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setImageTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	void ImageView::setImageTintMode(android::graphics::PorterDuff_Mode arg0) const
	{
		callMethod<void>(
			"setImageTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.object()
		);
	}
	void ImageView::setImageURI(android::net::Uri arg0) const
	{
		callMethod<void>(
			"setImageURI",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	void ImageView::setMaxHeight(jint arg0) const
	{
		callMethod<void>(
			"setMaxHeight",
			"(I)V",
			arg0
		);
	}
	void ImageView::setMaxWidth(jint arg0) const
	{
		callMethod<void>(
			"setMaxWidth",
			"(I)V",
			arg0
		);
	}
	void ImageView::setScaleType(android::widget::ImageView_ScaleType arg0) const
	{
		callMethod<void>(
			"setScaleType",
			"(Landroid/widget/ImageView$ScaleType;)V",
			arg0.object()
		);
	}
	void ImageView::setSelected(jboolean arg0) const
	{
		callMethod<void>(
			"setSelected",
			"(Z)V",
			arg0
		);
	}
	void ImageView::setVisibility(jint arg0) const
	{
		callMethod<void>(
			"setVisibility",
			"(I)V",
			arg0
		);
	}
} // namespace android::widget

