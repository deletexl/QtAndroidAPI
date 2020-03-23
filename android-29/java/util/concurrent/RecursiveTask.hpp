#pragma once

#ifndef JAVA_UTIL_CONCURRENT_RECURSIVETASK
#define JAVA_UTIL_CONCURRENT_RECURSIVETASK

#include "ForkJoinTask.hpp"


namespace __jni_impl::java::util::concurrent
{
	class RecursiveTask : public __jni_impl::java::util::concurrent::ForkJoinTask
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getRawResult();
	};
} // namespace __jni_impl::java::util::concurrent


namespace __jni_impl::java::util::concurrent
{
	// Fields
	
	// Constructors
	void RecursiveTask::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.RecursiveTask",
			"()V");
	}
	
	// Methods
	QAndroidJniObject RecursiveTask::getRawResult()
	{
		return __thiz.callObjectMethod(
			"getRawResult",
			"()Ljava/lang/Object;");
	}
} // namespace __jni_impl::java::util::concurrent

namespace java::util::concurrent
{
	class RecursiveTask : public __jni_impl::java::util::concurrent::RecursiveTask
	{
	public:
		RecursiveTask(QAndroidJniObject obj) { __thiz = obj; }
		RecursiveTask()
		{
			__constructor();
		}
	};
} // namespace java::util::concurrent

#endif // JAVA_UTIL_CONCURRENT_RECURSIVETASK

