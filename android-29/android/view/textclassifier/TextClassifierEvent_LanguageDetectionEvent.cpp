#include "../../os/Parcel.hpp"
#include "./TextClassifierEvent_LanguageDetectionEvent.hpp"

namespace android::view::textclassifier
{
	// Fields
	JObject TextClassifierEvent_LanguageDetectionEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textclassifier.TextClassifierEvent$LanguageDetectionEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	TextClassifierEvent_LanguageDetectionEvent::TextClassifierEvent_LanguageDetectionEvent(QJniObject obj) : android::view::textclassifier::TextClassifierEvent(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::view::textclassifier

