#include "../../os/Parcel.hpp"
#include "./TextClassifierEvent_TextLinkifyEvent.hpp"

namespace android::view::textclassifier
{
	// Fields
	JObject TextClassifierEvent_TextLinkifyEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textclassifier.TextClassifierEvent$TextLinkifyEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	TextClassifierEvent_TextLinkifyEvent::TextClassifierEvent_TextLinkifyEvent(QJniObject obj) : android::view::textclassifier::TextClassifierEvent(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::view::textclassifier

