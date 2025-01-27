#include "../content/Intent.hpp"
#include "./Conference.hpp"
#include "./Connection.hpp"
#include "./ConnectionRequest.hpp"
#include "./PhoneAccountHandle.hpp"
#include "./RemoteConference.hpp"
#include "./RemoteConnection.hpp"
#include "../../JString.hpp"
#include "./ConnectionService.hpp"

namespace android::telecom
{
	// Fields
	JString ConnectionService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.telecom.ConnectionService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	ConnectionService::ConnectionService(QJniObject obj) : android::app::Service(obj) {}
	
	// Constructors
	ConnectionService::ConnectionService()
		: android::app::Service(
			"android.telecom.ConnectionService",
			"()V"
		) {}
	
	// Methods
	void ConnectionService::addConference(android::telecom::Conference arg0) const
	{
		callMethod<void>(
			"addConference",
			"(Landroid/telecom/Conference;)V",
			arg0.object()
		);
	}
	void ConnectionService::addExistingConnection(android::telecom::PhoneAccountHandle arg0, android::telecom::Connection arg1) const
	{
		callMethod<void>(
			"addExistingConnection",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/telecom/Connection;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ConnectionService::conferenceRemoteConnections(android::telecom::RemoteConnection arg0, android::telecom::RemoteConnection arg1) const
	{
		callMethod<void>(
			"conferenceRemoteConnections",
			"(Landroid/telecom/RemoteConnection;Landroid/telecom/RemoteConnection;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ConnectionService::connectionServiceFocusReleased() const
	{
		callMethod<void>(
			"connectionServiceFocusReleased",
			"()V"
		);
	}
	android::telecom::RemoteConference ConnectionService::createRemoteIncomingConference(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1) const
	{
		return callObjectMethod(
			"createRemoteIncomingConference",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/telecom/ConnectionRequest;)Landroid/telecom/RemoteConference;",
			arg0.object(),
			arg1.object()
		);
	}
	android::telecom::RemoteConnection ConnectionService::createRemoteIncomingConnection(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1) const
	{
		return callObjectMethod(
			"createRemoteIncomingConnection",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/telecom/ConnectionRequest;)Landroid/telecom/RemoteConnection;",
			arg0.object(),
			arg1.object()
		);
	}
	android::telecom::RemoteConference ConnectionService::createRemoteOutgoingConference(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1) const
	{
		return callObjectMethod(
			"createRemoteOutgoingConference",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/telecom/ConnectionRequest;)Landroid/telecom/RemoteConference;",
			arg0.object(),
			arg1.object()
		);
	}
	android::telecom::RemoteConnection ConnectionService::createRemoteOutgoingConnection(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1) const
	{
		return callObjectMethod(
			"createRemoteOutgoingConnection",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/telecom/ConnectionRequest;)Landroid/telecom/RemoteConnection;",
			arg0.object(),
			arg1.object()
		);
	}
	JObject ConnectionService::getAllConferences() const
	{
		return callObjectMethod(
			"getAllConferences",
			"()Ljava/util/Collection;"
		);
	}
	JObject ConnectionService::getAllConnections() const
	{
		return callObjectMethod(
			"getAllConnections",
			"()Ljava/util/Collection;"
		);
	}
	JObject ConnectionService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	void ConnectionService::onConference(android::telecom::Connection arg0, android::telecom::Connection arg1) const
	{
		callMethod<void>(
			"onConference",
			"(Landroid/telecom/Connection;Landroid/telecom/Connection;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ConnectionService::onConnectionServiceFocusGained() const
	{
		callMethod<void>(
			"onConnectionServiceFocusGained",
			"()V"
		);
	}
	void ConnectionService::onConnectionServiceFocusLost() const
	{
		callMethod<void>(
			"onConnectionServiceFocusLost",
			"()V"
		);
	}
	android::telecom::Conference ConnectionService::onCreateIncomingConference(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1) const
	{
		return callObjectMethod(
			"onCreateIncomingConference",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/telecom/ConnectionRequest;)Landroid/telecom/Conference;",
			arg0.object(),
			arg1.object()
		);
	}
	void ConnectionService::onCreateIncomingConferenceFailed(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1) const
	{
		callMethod<void>(
			"onCreateIncomingConferenceFailed",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/telecom/ConnectionRequest;)V",
			arg0.object(),
			arg1.object()
		);
	}
	android::telecom::Connection ConnectionService::onCreateIncomingConnection(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1) const
	{
		return callObjectMethod(
			"onCreateIncomingConnection",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/telecom/ConnectionRequest;)Landroid/telecom/Connection;",
			arg0.object(),
			arg1.object()
		);
	}
	void ConnectionService::onCreateIncomingConnectionFailed(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1) const
	{
		callMethod<void>(
			"onCreateIncomingConnectionFailed",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/telecom/ConnectionRequest;)V",
			arg0.object(),
			arg1.object()
		);
	}
	android::telecom::Connection ConnectionService::onCreateIncomingHandoverConnection(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1) const
	{
		return callObjectMethod(
			"onCreateIncomingHandoverConnection",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/telecom/ConnectionRequest;)Landroid/telecom/Connection;",
			arg0.object(),
			arg1.object()
		);
	}
	android::telecom::Conference ConnectionService::onCreateOutgoingConference(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1) const
	{
		return callObjectMethod(
			"onCreateOutgoingConference",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/telecom/ConnectionRequest;)Landroid/telecom/Conference;",
			arg0.object(),
			arg1.object()
		);
	}
	void ConnectionService::onCreateOutgoingConferenceFailed(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1) const
	{
		callMethod<void>(
			"onCreateOutgoingConferenceFailed",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/telecom/ConnectionRequest;)V",
			arg0.object(),
			arg1.object()
		);
	}
	android::telecom::Connection ConnectionService::onCreateOutgoingConnection(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1) const
	{
		return callObjectMethod(
			"onCreateOutgoingConnection",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/telecom/ConnectionRequest;)Landroid/telecom/Connection;",
			arg0.object(),
			arg1.object()
		);
	}
	void ConnectionService::onCreateOutgoingConnectionFailed(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1) const
	{
		callMethod<void>(
			"onCreateOutgoingConnectionFailed",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/telecom/ConnectionRequest;)V",
			arg0.object(),
			arg1.object()
		);
	}
	android::telecom::Connection ConnectionService::onCreateOutgoingHandoverConnection(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1) const
	{
		return callObjectMethod(
			"onCreateOutgoingHandoverConnection",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/telecom/ConnectionRequest;)Landroid/telecom/Connection;",
			arg0.object(),
			arg1.object()
		);
	}
	void ConnectionService::onHandoverFailed(android::telecom::ConnectionRequest arg0, jint arg1) const
	{
		callMethod<void>(
			"onHandoverFailed",
			"(Landroid/telecom/ConnectionRequest;I)V",
			arg0.object(),
			arg1
		);
	}
	void ConnectionService::onRemoteConferenceAdded(android::telecom::RemoteConference arg0) const
	{
		callMethod<void>(
			"onRemoteConferenceAdded",
			"(Landroid/telecom/RemoteConference;)V",
			arg0.object()
		);
	}
	void ConnectionService::onRemoteExistingConnectionAdded(android::telecom::RemoteConnection arg0) const
	{
		callMethod<void>(
			"onRemoteExistingConnectionAdded",
			"(Landroid/telecom/RemoteConnection;)V",
			arg0.object()
		);
	}
	jboolean ConnectionService::onUnbind(android::content::Intent arg0) const
	{
		return callMethod<jboolean>(
			"onUnbind",
			"(Landroid/content/Intent;)Z",
			arg0.object()
		);
	}
} // namespace android::telecom

