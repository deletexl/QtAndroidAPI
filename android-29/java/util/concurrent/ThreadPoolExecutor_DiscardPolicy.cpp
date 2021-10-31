#include "./ThreadPoolExecutor.hpp"
#include "./ThreadPoolExecutor_DiscardPolicy.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QAndroidJniObject forward
	ThreadPoolExecutor_DiscardPolicy::ThreadPoolExecutor_DiscardPolicy(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ThreadPoolExecutor_DiscardPolicy::ThreadPoolExecutor_DiscardPolicy()
		: __JniBaseClass(
			"java.util.concurrent.ThreadPoolExecutor$DiscardPolicy",
			"()V"
		) {}
	
	// Methods
	void ThreadPoolExecutor_DiscardPolicy::rejectedExecution(__JniBaseClass arg0, java::util::concurrent::ThreadPoolExecutor arg1)
	{
		callMethod<void>(
			"rejectedExecution",
			"(Ljava/lang/Runnable;Ljava/util/concurrent/ThreadPoolExecutor;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace java::util::concurrent
