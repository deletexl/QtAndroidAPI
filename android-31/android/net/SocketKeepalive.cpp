#include "./SocketKeepalive.hpp"

namespace android::net
{
	// Fields
	jint SocketKeepalive::ERROR_HARDWARE_ERROR()
	{
		return getStaticField<jint>(
			"android.net.SocketKeepalive",
			"ERROR_HARDWARE_ERROR"
		);
	}
	jint SocketKeepalive::ERROR_INSUFFICIENT_RESOURCES()
	{
		return getStaticField<jint>(
			"android.net.SocketKeepalive",
			"ERROR_INSUFFICIENT_RESOURCES"
		);
	}
	jint SocketKeepalive::ERROR_INVALID_INTERVAL()
	{
		return getStaticField<jint>(
			"android.net.SocketKeepalive",
			"ERROR_INVALID_INTERVAL"
		);
	}
	jint SocketKeepalive::ERROR_INVALID_IP_ADDRESS()
	{
		return getStaticField<jint>(
			"android.net.SocketKeepalive",
			"ERROR_INVALID_IP_ADDRESS"
		);
	}
	jint SocketKeepalive::ERROR_INVALID_LENGTH()
	{
		return getStaticField<jint>(
			"android.net.SocketKeepalive",
			"ERROR_INVALID_LENGTH"
		);
	}
	jint SocketKeepalive::ERROR_INVALID_NETWORK()
	{
		return getStaticField<jint>(
			"android.net.SocketKeepalive",
			"ERROR_INVALID_NETWORK"
		);
	}
	jint SocketKeepalive::ERROR_INVALID_PORT()
	{
		return getStaticField<jint>(
			"android.net.SocketKeepalive",
			"ERROR_INVALID_PORT"
		);
	}
	jint SocketKeepalive::ERROR_INVALID_SOCKET()
	{
		return getStaticField<jint>(
			"android.net.SocketKeepalive",
			"ERROR_INVALID_SOCKET"
		);
	}
	jint SocketKeepalive::ERROR_SOCKET_NOT_IDLE()
	{
		return getStaticField<jint>(
			"android.net.SocketKeepalive",
			"ERROR_SOCKET_NOT_IDLE"
		);
	}
	jint SocketKeepalive::ERROR_UNSUPPORTED()
	{
		return getStaticField<jint>(
			"android.net.SocketKeepalive",
			"ERROR_UNSUPPORTED"
		);
	}
	
	// QJniObject forward
	SocketKeepalive::SocketKeepalive(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void SocketKeepalive::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void SocketKeepalive::start(jint arg0) const
	{
		callMethod<void>(
			"start",
			"(I)V",
			arg0
		);
	}
	void SocketKeepalive::stop() const
	{
		callMethod<void>(
			"stop",
			"()V"
		);
	}
} // namespace android::net

