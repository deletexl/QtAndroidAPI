#include "../../../JArray.hpp"
#include "../../../JObject.hpp"
#include "../../net/SocketAddress.hpp"
#include "../ByteBuffer.hpp"
#include "./AsynchronousChannelGroup.hpp"
#include "./spi/AsynchronousChannelProvider.hpp"
#include "../../util/concurrent/TimeUnit.hpp"
#include "./AsynchronousSocketChannel.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QJniObject forward
	AsynchronousSocketChannel::AsynchronousSocketChannel(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::nio::channels::AsynchronousSocketChannel AsynchronousSocketChannel::open()
	{
		return callStaticObjectMethod(
			"java.nio.channels.AsynchronousSocketChannel",
			"open",
			"()Ljava/nio/channels/AsynchronousSocketChannel;"
		);
	}
	java::nio::channels::AsynchronousSocketChannel AsynchronousSocketChannel::open(java::nio::channels::AsynchronousChannelGroup arg0)
	{
		return callStaticObjectMethod(
			"java.nio.channels.AsynchronousSocketChannel",
			"open",
			"(Ljava/nio/channels/AsynchronousChannelGroup;)Ljava/nio/channels/AsynchronousSocketChannel;",
			arg0.object()
		);
	}
	java::nio::channels::AsynchronousSocketChannel AsynchronousSocketChannel::bind(java::net::SocketAddress arg0) const
	{
		return callObjectMethod(
			"bind",
			"(Ljava/net/SocketAddress;)Ljava/nio/channels/AsynchronousSocketChannel;",
			arg0.object()
		);
	}
	JObject AsynchronousSocketChannel::connect(java::net::SocketAddress arg0) const
	{
		return callObjectMethod(
			"connect",
			"(Ljava/net/SocketAddress;)Ljava/util/concurrent/Future;",
			arg0.object()
		);
	}
	void AsynchronousSocketChannel::connect(java::net::SocketAddress arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"connect",
			"(Ljava/net/SocketAddress;Ljava/lang/Object;Ljava/nio/channels/CompletionHandler;)V",
			arg0.object(),
			arg1.object<jobject>(),
			arg2.object()
		);
	}
	java::net::SocketAddress AsynchronousSocketChannel::getLocalAddress() const
	{
		return callObjectMethod(
			"getLocalAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	java::net::SocketAddress AsynchronousSocketChannel::getRemoteAddress() const
	{
		return callObjectMethod(
			"getRemoteAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	java::nio::channels::spi::AsynchronousChannelProvider AsynchronousSocketChannel::provider() const
	{
		return callObjectMethod(
			"provider",
			"()Ljava/nio/channels/spi/AsynchronousChannelProvider;"
		);
	}
	JObject AsynchronousSocketChannel::read(java::nio::ByteBuffer arg0) const
	{
		return callObjectMethod(
			"read",
			"(Ljava/nio/ByteBuffer;)Ljava/util/concurrent/Future;",
			arg0.object()
		);
	}
	void AsynchronousSocketChannel::read(java::nio::ByteBuffer arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"read",
			"(Ljava/nio/ByteBuffer;Ljava/lang/Object;Ljava/nio/channels/CompletionHandler;)V",
			arg0.object(),
			arg1.object<jobject>(),
			arg2.object()
		);
	}
	void AsynchronousSocketChannel::read(java::nio::ByteBuffer arg0, jlong arg1, java::util::concurrent::TimeUnit arg2, JObject arg3, JObject arg4) const
	{
		callMethod<void>(
			"read",
			"(Ljava/nio/ByteBuffer;JLjava/util/concurrent/TimeUnit;Ljava/lang/Object;Ljava/nio/channels/CompletionHandler;)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3.object<jobject>(),
			arg4.object()
		);
	}
	void AsynchronousSocketChannel::read(JArray arg0, jint arg1, jint arg2, jlong arg3, java::util::concurrent::TimeUnit arg4, JObject arg5, JObject arg6) const
	{
		callMethod<void>(
			"read",
			"([Ljava/nio/ByteBuffer;IIJLjava/util/concurrent/TimeUnit;Ljava/lang/Object;Ljava/nio/channels/CompletionHandler;)V",
			arg0.object<jarray>(),
			arg1,
			arg2,
			arg3,
			arg4.object(),
			arg5.object<jobject>(),
			arg6.object()
		);
	}
	java::nio::channels::AsynchronousSocketChannel AsynchronousSocketChannel::setOption(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"setOption",
			"(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/nio/channels/AsynchronousSocketChannel;",
			arg0.object(),
			arg1.object<jobject>()
		);
	}
	java::nio::channels::AsynchronousSocketChannel AsynchronousSocketChannel::shutdownInput() const
	{
		return callObjectMethod(
			"shutdownInput",
			"()Ljava/nio/channels/AsynchronousSocketChannel;"
		);
	}
	java::nio::channels::AsynchronousSocketChannel AsynchronousSocketChannel::shutdownOutput() const
	{
		return callObjectMethod(
			"shutdownOutput",
			"()Ljava/nio/channels/AsynchronousSocketChannel;"
		);
	}
	JObject AsynchronousSocketChannel::write(java::nio::ByteBuffer arg0) const
	{
		return callObjectMethod(
			"write",
			"(Ljava/nio/ByteBuffer;)Ljava/util/concurrent/Future;",
			arg0.object()
		);
	}
	void AsynchronousSocketChannel::write(java::nio::ByteBuffer arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"write",
			"(Ljava/nio/ByteBuffer;Ljava/lang/Object;Ljava/nio/channels/CompletionHandler;)V",
			arg0.object(),
			arg1.object<jobject>(),
			arg2.object()
		);
	}
	void AsynchronousSocketChannel::write(java::nio::ByteBuffer arg0, jlong arg1, java::util::concurrent::TimeUnit arg2, JObject arg3, JObject arg4) const
	{
		callMethod<void>(
			"write",
			"(Ljava/nio/ByteBuffer;JLjava/util/concurrent/TimeUnit;Ljava/lang/Object;Ljava/nio/channels/CompletionHandler;)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3.object<jobject>(),
			arg4.object()
		);
	}
	void AsynchronousSocketChannel::write(JArray arg0, jint arg1, jint arg2, jlong arg3, java::util::concurrent::TimeUnit arg4, JObject arg5, JObject arg6) const
	{
		callMethod<void>(
			"write",
			"([Ljava/nio/ByteBuffer;IIJLjava/util/concurrent/TimeUnit;Ljava/lang/Object;Ljava/nio/channels/CompletionHandler;)V",
			arg0.object<jarray>(),
			arg1,
			arg2,
			arg3,
			arg4.object(),
			arg5.object<jobject>(),
			arg6.object()
		);
	}
} // namespace java::nio::channels

