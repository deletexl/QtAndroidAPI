#include "./TextClassifierEvent_LanguageDetectionEvent.hpp"
#include "./TextClassifierEvent_LanguageDetectionEvent_Builder.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// QJniObject forward
	TextClassifierEvent_LanguageDetectionEvent_Builder::TextClassifierEvent_LanguageDetectionEvent_Builder(QJniObject obj) : android::view::textclassifier::TextClassifierEvent_Builder(obj) {}
	
	// Constructors
	TextClassifierEvent_LanguageDetectionEvent_Builder::TextClassifierEvent_LanguageDetectionEvent_Builder(jint arg0)
		: android::view::textclassifier::TextClassifierEvent_Builder(
			"android.view.textclassifier.TextClassifierEvent$LanguageDetectionEvent$Builder",
			"(I)V",
			arg0
		) {}
	
	// Methods
	android::view::textclassifier::TextClassifierEvent_LanguageDetectionEvent TextClassifierEvent_LanguageDetectionEvent_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextClassifierEvent$LanguageDetectionEvent;"
		);
	}
} // namespace android::view::textclassifier

