#pragma once

#include "../../text/style/ClickableSpan.hpp"

namespace android::view
{
	class View;
}
namespace android::view::textclassifier
{
	class TextLinks_TextLink;
}

namespace android::view::textclassifier
{
	class TextLinks_TextLinkSpan : public android::text::style::ClickableSpan
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TextLinks_TextLinkSpan(const char *className, const char *sig, Ts...agv) : android::text::style::ClickableSpan(className, sig, std::forward<Ts>(agv)...) {}
		TextLinks_TextLinkSpan(QJniObject obj);
		
		// Constructors
		TextLinks_TextLinkSpan(android::view::textclassifier::TextLinks_TextLink arg0);
		
		// Methods
		android::view::textclassifier::TextLinks_TextLink getTextLink() const;
		void onClick(android::view::View arg0) const;
	};
} // namespace android::view::textclassifier

