#include "../../util/SparseArray.hpp"
#include "./TranslationResponse.hpp"
#include "./TranslationResponseValue.hpp"
#include "./ViewTranslationResponse.hpp"
#include "./TranslationResponse_Builder.hpp"

namespace android::view::translation
{
	// Fields
	
	// QJniObject forward
	TranslationResponse_Builder::TranslationResponse_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	TranslationResponse_Builder::TranslationResponse_Builder(jint arg0)
		: JObject(
			"android.view.translation.TranslationResponse$Builder",
			"(I)V",
			arg0
		) {}
	
	// Methods
	android::view::translation::TranslationResponse TranslationResponse_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/translation/TranslationResponse;"
		);
	}
	android::view::translation::TranslationResponse_Builder TranslationResponse_Builder::setFinalResponse(jboolean arg0) const
	{
		return callObjectMethod(
			"setFinalResponse",
			"(Z)Landroid/view/translation/TranslationResponse$Builder;",
			arg0
		);
	}
	android::view::translation::TranslationResponse_Builder TranslationResponse_Builder::setTranslationResponseValue(jint arg0, android::view::translation::TranslationResponseValue arg1) const
	{
		return callObjectMethod(
			"setTranslationResponseValue",
			"(ILandroid/view/translation/TranslationResponseValue;)Landroid/view/translation/TranslationResponse$Builder;",
			arg0,
			arg1.object()
		);
	}
	android::view::translation::TranslationResponse_Builder TranslationResponse_Builder::setTranslationResponseValues(android::util::SparseArray arg0) const
	{
		return callObjectMethod(
			"setTranslationResponseValues",
			"(Landroid/util/SparseArray;)Landroid/view/translation/TranslationResponse$Builder;",
			arg0.object()
		);
	}
	android::view::translation::TranslationResponse_Builder TranslationResponse_Builder::setViewTranslationResponse(jint arg0, android::view::translation::ViewTranslationResponse arg1) const
	{
		return callObjectMethod(
			"setViewTranslationResponse",
			"(ILandroid/view/translation/ViewTranslationResponse;)Landroid/view/translation/TranslationResponse$Builder;",
			arg0,
			arg1.object()
		);
	}
	android::view::translation::TranslationResponse_Builder TranslationResponse_Builder::setViewTranslationResponses(android::util::SparseArray arg0) const
	{
		return callObjectMethod(
			"setViewTranslationResponses",
			"(Landroid/util/SparseArray;)Landroid/view/translation/TranslationResponse$Builder;",
			arg0.object()
		);
	}
} // namespace android::view::translation

