#pragma once

#include "./TextClassifierEvent_Builder.hpp"

namespace android::view::textclassifier
{
	class TextClassifierEvent_TextLinkifyEvent;
}

namespace android::view::textclassifier
{
	class TextClassifierEvent_TextLinkifyEvent_Builder : public android::view::textclassifier::TextClassifierEvent_Builder
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TextClassifierEvent_TextLinkifyEvent_Builder(const char *className, const char *sig, Ts...agv) : android::view::textclassifier::TextClassifierEvent_Builder(className, sig, std::forward<Ts>(agv)...) {}
		TextClassifierEvent_TextLinkifyEvent_Builder(QJniObject obj);
		
		// Constructors
		TextClassifierEvent_TextLinkifyEvent_Builder(jint arg0);
		
		// Methods
		android::view::textclassifier::TextClassifierEvent_TextLinkifyEvent build() const;
	};
} // namespace android::view::textclassifier

