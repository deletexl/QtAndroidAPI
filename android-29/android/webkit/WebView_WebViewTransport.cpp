#include "./WebView.hpp"
#include "./WebView_WebViewTransport.hpp"

namespace android::webkit
{
	// Fields
	
	// QJniObject forward
	WebView_WebViewTransport::WebView_WebViewTransport(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	WebView_WebViewTransport::WebView_WebViewTransport(android::webkit::WebView arg0)
		: JObject(
			"android.webkit.WebView$WebViewTransport",
			"(Landroid/webkit/WebView;)V",
			arg0.object()
		) {}
	
	// Methods
	android::webkit::WebView WebView_WebViewTransport::getWebView() const
	{
		return callObjectMethod(
			"getWebView",
			"()Landroid/webkit/WebView;"
		);
	}
	void WebView_WebViewTransport::setWebView(android::webkit::WebView arg0) const
	{
		callMethod<void>(
			"setWebView",
			"(Landroid/webkit/WebView;)V",
			arg0.object()
		);
	}
} // namespace android::webkit

