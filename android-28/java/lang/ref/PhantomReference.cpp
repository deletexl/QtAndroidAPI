#include "../../../JObject.hpp"
#include "./ReferenceQueue.hpp"
#include "./PhantomReference.hpp"

namespace java::lang::ref
{
	// Fields
	
	// QJniObject forward
	PhantomReference::PhantomReference(QJniObject obj) : java::lang::ref::Reference(obj) {}
	
	// Constructors
	PhantomReference::PhantomReference(JObject arg0, java::lang::ref::ReferenceQueue arg1)
		: java::lang::ref::Reference(
			"java.lang.ref.PhantomReference",
			"(Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V",
			arg0.object<jobject>(),
			arg1.object()
		) {}
	
	// Methods
	JObject PhantomReference::get() const
	{
		return callObjectMethod(
			"get",
			"()Ljava/lang/Object;"
		);
	}
} // namespace java::lang::ref

