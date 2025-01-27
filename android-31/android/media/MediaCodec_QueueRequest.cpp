#include "../hardware/HardwareBuffer.hpp"
#include "./MediaCodec.hpp"
#include "./MediaCodec_CryptoInfo.hpp"
#include "./MediaCodec_LinearBlock.hpp"
#include "../../JString.hpp"
#include "../../java/nio/ByteBuffer.hpp"
#include "./MediaCodec_QueueRequest.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	MediaCodec_QueueRequest::MediaCodec_QueueRequest(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void MediaCodec_QueueRequest::queue() const
	{
		callMethod<void>(
			"queue",
			"()V"
		);
	}
	android::media::MediaCodec_QueueRequest MediaCodec_QueueRequest::setByteBufferParameter(JString arg0, java::nio::ByteBuffer arg1) const
	{
		return callObjectMethod(
			"setByteBufferParameter",
			"(Ljava/lang/String;Ljava/nio/ByteBuffer;)Landroid/media/MediaCodec$QueueRequest;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	android::media::MediaCodec_QueueRequest MediaCodec_QueueRequest::setEncryptedLinearBlock(android::media::MediaCodec_LinearBlock arg0, jint arg1, jint arg2, android::media::MediaCodec_CryptoInfo arg3) const
	{
		return callObjectMethod(
			"setEncryptedLinearBlock",
			"(Landroid/media/MediaCodec$LinearBlock;IILandroid/media/MediaCodec$CryptoInfo;)Landroid/media/MediaCodec$QueueRequest;",
			arg0.object(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	android::media::MediaCodec_QueueRequest MediaCodec_QueueRequest::setFlags(jint arg0) const
	{
		return callObjectMethod(
			"setFlags",
			"(I)Landroid/media/MediaCodec$QueueRequest;",
			arg0
		);
	}
	android::media::MediaCodec_QueueRequest MediaCodec_QueueRequest::setFloatParameter(JString arg0, jfloat arg1) const
	{
		return callObjectMethod(
			"setFloatParameter",
			"(Ljava/lang/String;F)Landroid/media/MediaCodec$QueueRequest;",
			arg0.object<jstring>(),
			arg1
		);
	}
	android::media::MediaCodec_QueueRequest MediaCodec_QueueRequest::setHardwareBuffer(android::hardware::HardwareBuffer arg0) const
	{
		return callObjectMethod(
			"setHardwareBuffer",
			"(Landroid/hardware/HardwareBuffer;)Landroid/media/MediaCodec$QueueRequest;",
			arg0.object()
		);
	}
	android::media::MediaCodec_QueueRequest MediaCodec_QueueRequest::setIntegerParameter(JString arg0, jint arg1) const
	{
		return callObjectMethod(
			"setIntegerParameter",
			"(Ljava/lang/String;I)Landroid/media/MediaCodec$QueueRequest;",
			arg0.object<jstring>(),
			arg1
		);
	}
	android::media::MediaCodec_QueueRequest MediaCodec_QueueRequest::setLinearBlock(android::media::MediaCodec_LinearBlock arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"setLinearBlock",
			"(Landroid/media/MediaCodec$LinearBlock;II)Landroid/media/MediaCodec$QueueRequest;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	android::media::MediaCodec_QueueRequest MediaCodec_QueueRequest::setLongParameter(JString arg0, jlong arg1) const
	{
		return callObjectMethod(
			"setLongParameter",
			"(Ljava/lang/String;J)Landroid/media/MediaCodec$QueueRequest;",
			arg0.object<jstring>(),
			arg1
		);
	}
	android::media::MediaCodec_QueueRequest MediaCodec_QueueRequest::setPresentationTimeUs(jlong arg0) const
	{
		return callObjectMethod(
			"setPresentationTimeUs",
			"(J)Landroid/media/MediaCodec$QueueRequest;",
			arg0
		);
	}
	android::media::MediaCodec_QueueRequest MediaCodec_QueueRequest::setStringParameter(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"setStringParameter",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/media/MediaCodec$QueueRequest;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
} // namespace android::media

