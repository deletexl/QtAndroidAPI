#include "../../JByteArray.hpp"
#include "../../JLongArray.hpp"
#include "../../JArray.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../nio/ByteBuffer.hpp"
#include "../nio/LongBuffer.hpp"
#include "./BitSet.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	BitSet::BitSet(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	BitSet::BitSet()
		: JObject(
			"java.util.BitSet",
			"()V"
		) {}
	BitSet::BitSet(jint arg0)
		: JObject(
			"java.util.BitSet",
			"(I)V",
			arg0
		) {}
	
	// Methods
	java::util::BitSet BitSet::valueOf(JByteArray arg0)
	{
		return callStaticObjectMethod(
			"java.util.BitSet",
			"valueOf",
			"([B)Ljava/util/BitSet;",
			arg0.object<jbyteArray>()
		);
	}
	java::util::BitSet BitSet::valueOf(JLongArray arg0)
	{
		return callStaticObjectMethod(
			"java.util.BitSet",
			"valueOf",
			"([J)Ljava/util/BitSet;",
			arg0.object<jlongArray>()
		);
	}
	java::util::BitSet BitSet::valueOf(java::nio::ByteBuffer arg0)
	{
		return callStaticObjectMethod(
			"java.util.BitSet",
			"valueOf",
			"(Ljava/nio/ByteBuffer;)Ljava/util/BitSet;",
			arg0.object()
		);
	}
	java::util::BitSet BitSet::valueOf(java::nio::LongBuffer arg0)
	{
		return callStaticObjectMethod(
			"java.util.BitSet",
			"valueOf",
			"(Ljava/nio/LongBuffer;)Ljava/util/BitSet;",
			arg0.object()
		);
	}
	void BitSet::_and(java::util::BitSet arg0)
	{
		callMethod<void>(
			"and",
			"(Ljava/util/BitSet;)V",
			arg0.object()
		);
	}
	void BitSet::andNot(java::util::BitSet arg0)
	{
		callMethod<void>(
			"andNot",
			"(Ljava/util/BitSet;)V",
			arg0.object()
		);
	}
	jint BitSet::cardinality()
	{
		return callMethod<jint>(
			"cardinality",
			"()I"
		);
	}
	void BitSet::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	void BitSet::clear(jint arg0)
	{
		callMethod<void>(
			"clear",
			"(I)V",
			arg0
		);
	}
	void BitSet::clear(jint arg0, jint arg1)
	{
		callMethod<void>(
			"clear",
			"(II)V",
			arg0,
			arg1
		);
	}
	JObject BitSet::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	jboolean BitSet::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	void BitSet::flip(jint arg0)
	{
		callMethod<void>(
			"flip",
			"(I)V",
			arg0
		);
	}
	void BitSet::flip(jint arg0, jint arg1)
	{
		callMethod<void>(
			"flip",
			"(II)V",
			arg0,
			arg1
		);
	}
	jboolean BitSet::get(jint arg0)
	{
		return callMethod<jboolean>(
			"get",
			"(I)Z",
			arg0
		);
	}
	java::util::BitSet BitSet::get(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"get",
			"(II)Ljava/util/BitSet;",
			arg0,
			arg1
		);
	}
	jint BitSet::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean BitSet::intersects(java::util::BitSet arg0)
	{
		return callMethod<jboolean>(
			"intersects",
			"(Ljava/util/BitSet;)Z",
			arg0.object()
		);
	}
	jboolean BitSet::isEmpty()
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	jint BitSet::length()
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	jint BitSet::nextClearBit(jint arg0)
	{
		return callMethod<jint>(
			"nextClearBit",
			"(I)I",
			arg0
		);
	}
	jint BitSet::nextSetBit(jint arg0)
	{
		return callMethod<jint>(
			"nextSetBit",
			"(I)I",
			arg0
		);
	}
	void BitSet::_or(java::util::BitSet arg0)
	{
		callMethod<void>(
			"or",
			"(Ljava/util/BitSet;)V",
			arg0.object()
		);
	}
	jint BitSet::previousClearBit(jint arg0)
	{
		return callMethod<jint>(
			"previousClearBit",
			"(I)I",
			arg0
		);
	}
	jint BitSet::previousSetBit(jint arg0)
	{
		return callMethod<jint>(
			"previousSetBit",
			"(I)I",
			arg0
		);
	}
	void BitSet::set(jint arg0)
	{
		callMethod<void>(
			"set",
			"(I)V",
			arg0
		);
	}
	void BitSet::set(jint arg0, jboolean arg1)
	{
		callMethod<void>(
			"set",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void BitSet::set(jint arg0, jint arg1)
	{
		callMethod<void>(
			"set",
			"(II)V",
			arg0,
			arg1
		);
	}
	void BitSet::set(jint arg0, jint arg1, jboolean arg2)
	{
		callMethod<void>(
			"set",
			"(IIZ)V",
			arg0,
			arg1,
			arg2
		);
	}
	jint BitSet::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	JObject BitSet::stream()
	{
		return callObjectMethod(
			"stream",
			"()Ljava/util/stream/IntStream;"
		);
	}
	JByteArray BitSet::toByteArray()
	{
		return callObjectMethod(
			"toByteArray",
			"()[B"
		);
	}
	JLongArray BitSet::toLongArray()
	{
		return callObjectMethod(
			"toLongArray",
			"()[J"
		);
	}
	JString BitSet::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void BitSet::_xor(java::util::BitSet arg0)
	{
		callMethod<void>(
			"xor",
			"(Ljava/util/BitSet;)V",
			arg0.object()
		);
	}
} // namespace java::util

