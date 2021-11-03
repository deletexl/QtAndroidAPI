#pragma once

#include "../../JObject.hpp"
#include "../view/View.hpp"

namespace android::content
{
	class Context;
}
namespace android::content::res
{
	class ColorStateList;
}
namespace android::graphics
{
	class Canvas;
}
namespace android::graphics
{
	class PorterDuff_Mode;
}
namespace android::graphics::drawable
{
	class Drawable;
}

namespace android::widget
{
	class ProgressBar : public android::view::View
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ProgressBar(const char *className, const char *sig, Ts...agv) : android::view::View(className, sig, std::forward<Ts>(agv)...) {}
		ProgressBar(QAndroidJniObject obj);
		
		// Constructors
		ProgressBar(android::content::Context arg0);
		ProgressBar(android::content::Context arg0, JObject arg1);
		ProgressBar(android::content::Context arg0, JObject arg1, jint arg2);
		ProgressBar(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void drawableHotspotChanged(jfloat arg0, jfloat arg1);
		jstring getAccessibilityClassName();
		android::graphics::drawable::Drawable getIndeterminateDrawable();
		android::content::res::ColorStateList getIndeterminateTintList();
		android::graphics::PorterDuff_Mode getIndeterminateTintMode();
		JObject getInterpolator();
		jint getMax();
		jint getMin();
		jint getProgress();
		android::content::res::ColorStateList getProgressBackgroundTintList();
		android::graphics::PorterDuff_Mode getProgressBackgroundTintMode();
		android::graphics::drawable::Drawable getProgressDrawable();
		android::content::res::ColorStateList getProgressTintList();
		android::graphics::PorterDuff_Mode getProgressTintMode();
		jint getSecondaryProgress();
		android::content::res::ColorStateList getSecondaryProgressTintList();
		android::graphics::PorterDuff_Mode getSecondaryProgressTintMode();
		void incrementProgressBy(jint arg0);
		void incrementSecondaryProgressBy(jint arg0);
		void invalidateDrawable(android::graphics::drawable::Drawable arg0);
		jboolean isAnimating();
		jboolean isIndeterminate();
		void jumpDrawablesToCurrentState();
		void onRestoreInstanceState(JObject arg0);
		JObject onSaveInstanceState();
		void onVisibilityAggregated(jboolean arg0);
		void postInvalidate();
		void setIndeterminate(jboolean arg0);
		void setIndeterminateDrawable(android::graphics::drawable::Drawable arg0);
		void setIndeterminateDrawableTiled(android::graphics::drawable::Drawable arg0);
		void setIndeterminateTintList(android::content::res::ColorStateList arg0);
		void setIndeterminateTintMode(android::graphics::PorterDuff_Mode arg0);
		void setInterpolator(JObject arg0);
		void setInterpolator(android::content::Context arg0, jint arg1);
		void setMax(jint arg0);
		void setMin(jint arg0);
		void setProgress(jint arg0);
		void setProgress(jint arg0, jboolean arg1);
		void setProgressBackgroundTintList(android::content::res::ColorStateList arg0);
		void setProgressBackgroundTintMode(android::graphics::PorterDuff_Mode arg0);
		void setProgressDrawable(android::graphics::drawable::Drawable arg0);
		void setProgressDrawableTiled(android::graphics::drawable::Drawable arg0);
		void setProgressTintList(android::content::res::ColorStateList arg0);
		void setProgressTintMode(android::graphics::PorterDuff_Mode arg0);
		void setSecondaryProgress(jint arg0);
		void setSecondaryProgressTintList(android::content::res::ColorStateList arg0);
		void setSecondaryProgressTintMode(android::graphics::PorterDuff_Mode arg0);
	};
} // namespace android::widget

