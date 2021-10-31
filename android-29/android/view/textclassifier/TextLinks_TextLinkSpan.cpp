#include "../View.hpp"
#include "./TextLinks_TextLink.hpp"
#include "./TextLinks_TextLinkSpan.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// QAndroidJniObject forward
	TextLinks_TextLinkSpan::TextLinks_TextLinkSpan(QAndroidJniObject obj) : android::text::style::ClickableSpan(obj) {}
	
	// Constructors
	TextLinks_TextLinkSpan::TextLinks_TextLinkSpan(android::view::textclassifier::TextLinks_TextLink arg0)
		: android::text::style::ClickableSpan(
			"android.view.textclassifier.TextLinks$TextLinkSpan",
			"(Landroid/view/textclassifier/TextLinks$TextLink;)V",
			arg0.object()
		) {}
	
	// Methods
	QAndroidJniObject TextLinks_TextLinkSpan::getTextLink()
	{
		return callObjectMethod(
			"getTextLink",
			"()Landroid/view/textclassifier/TextLinks$TextLink;"
		);
	}
	void TextLinks_TextLinkSpan::onClick(android::view::View arg0)
	{
		callMethod<void>(
			"onClick",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
} // namespace android::view::textclassifier

