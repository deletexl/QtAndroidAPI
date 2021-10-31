#include "./WebResourceResponse.hpp"
#include "./ServiceWorkerClient.hpp"

namespace android::webkit
{
	// Fields
	
	// QAndroidJniObject forward
	ServiceWorkerClient::ServiceWorkerClient(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ServiceWorkerClient::ServiceWorkerClient()
		: __JniBaseClass(
			"android.webkit.ServiceWorkerClient",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject ServiceWorkerClient::shouldInterceptRequest(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"shouldInterceptRequest",
			"(Landroid/webkit/WebResourceRequest;)Landroid/webkit/WebResourceResponse;",
			arg0.object()
		);
	}
} // namespace android::webkit

