#include <string>
#include <iostream>

using namespace std;

string reply_invite_with_200ok(string invite)
{
    string ok200 =
	"SIP/2.0 200 OK\r\n"
    "Allow: INVITE,BYE,REGISTER,ACK,OPTIONS,CANCEL,INFO,PRACK,SUBSCRIBE,NOTIFY,REFER,UPDATE\r\n"
    "Call-ID: 65c2a5864f6141eaadc705056b4205f\r\n"
    "Contact: <sip:71506@10.5.10.160:5060>\r\n"
    "Content-Type: application/sdp\r\n"
    "CSeq: 1 INVITE\r\n"
    "From: \"User1175\" <sip:1175@10.5.10.160>;tag=65c2a5724f6141eaadc605056b4205f\r\n"
    "Record-Route: \r\n"
    "Session-ID: fc17026de14837b9f0a03bda7b846ab3\r\n"
    "Supported: 100rel,timer,replaces,histinfo\r\n"
    "To: <sip:71506@10.5.10.160>;tag=6831-33C1\r\n"
    "Via: SIP/2.0/UDP 172.20.203.31;received=172.20.203.31;rport=5060;branch=z9hG4bK702879035187387-AP;ft=172.20.203.31~13c4,SIP/2.0/UDP 127.0.0.2:15060;rport=15060;branch=z9hG4bK702879035187387;ibmsid=local.1570757344337_54536265_63585492,SIP/2.0/UDP 127.0.0.2:15060;rport;branch=z9hG4bK988182587129676;ibmsid=local.1570757344337_54536264_63585491,SIP/2.0/TLS 172.20.203.31;received=172.20.203.31;rport=23032;branch=z9hG4bK410926310928696-AP-AP;ft=121,SIP/2.0/TLS 192.168.200.145;branch=z9hG4bK410926310928696-AP;ft=3,SIP/2.0/TLS 127.0.0.2:15061;rport=28135;branch=z9hG4bK410926310928696;ibmsid=local.1570757957813_293093706_299755291,SIP/2.0/TLS 127.0.0.2:15061;rport;branch=z9hG4bK931265348278972;ibmsid=local.1570757957813_293093705_299755290,SIP/2.0/TLS 192.168.200.145;received=192.168.200.145;rport=57699;branch=z9hG4bK65c2aab84f6141eaadc805056b4205f-AP;ft=100090,SIP/2.0/TLS 172.20.203.3;branch=z9hG4bK65c2aab84f6141eaadc805056b4205f,SIP/2.0/TLS 172.19.5.175:5061;branch=z9hG4bKca_2641265a-3d7c9420-7b780ce0_I1175\r\n"
    "Content-Length: 320\r\n"
    "\r\n"
    "v=0\r\n"
    "o=- 4 0 IN IP4 10.5.10.160\r\n"
    "s=-\r\n"
    "c=IN IP4 10.5.10.160\r\n"
    "t=0 0\r\n"
    "m=audio 10006 RTP/AVP 0 18 120\r\n"
    "c=IN IP4 10.5.10.160\r\n"
    "a=rtpmap:0 PCMU/8000\r\n"
    "a=rtpmap:18 G729/8000\r\n"
    "a=fmtp:18 annexb=no\r\n"
    "a=rtpmap:120 telephone-event/8000\r\n"
    "a=fmtp:120 0-15\r\n"
    "a=ptime:20\r\n"
    "a=maxptime:20\r\n"
    "a=sendrecv\r\n"
    "a=rtcp:10007 IN IP4 10.5.10.160\r\n"
    "a=mid:0\r\n";

    return ok200;
}

string reply_200ok_with_ack(string ok200)
{
    string ack =
    "ACK sip:99139@efgh.br:5060;transport=tcp;maddr=10.226.243.69;user=phone;gsid=3d26cb00-4d01-11ea-867c-005056b671e6 SIP/2.0\r\n"
    "Allow: INVITE,BYE,REGISTER,ACK,OPTIONS,CANCEL,INFO,SUBSCRIBE,NOTIFY,REFER,UPDATE\r\n"
    "Call-ID: -1dyrIpht0IiecZN@10.224.51.121\r\n"
    "Contact: <sip:11940247970@10.224.51.121:5060>\r\n"
    "CSeq: 22342 ACK\r\n"
    "From: <sip:11940247970@10.224.51.121:5060>;tag=95-B905E753\r\n"
    "Max-Forwards: 70\r\n"
    "Route: \r\n"
    "Session-ID: ae7113fd3d77635c7f383e47da39cc7f\r\n"
    "To: <sip:99139@10.224.51.62:5060>;tag=4fed9e8-45f3e20a-13c4-55013-1a01310-30109568-1a01310\r\n"
    "Via: SIP/2.0/UDP 10.224.51.121:5060;rport;branch=z9hG4bK994264E3\r\n"
    "Content-Length: 0\r\n";

    return ack;
}

int main(int argc, char* argv[])
{
    string invite_1 =
    "INVITE sip:71506@10.5.10.160 SIP/2.0\r\n"
    "P-Location: SM;origlocname=\"CM_Mariante\";origsiglocname=\"Mariante\";origmedialocname=\"CM_Mariante\";orighomelocname=\"Porto Alegre\";termlocname=\"XYZ\";termsiglocname=\"XYZ\";smaccounting=\"false\"\r\n"
    "User-Agent: UA01\r\n"
    "Via: SIP/2.0/UDP 172.20.203.31;rport;branch=z9hG4bK702879035187387-AP;ft=172.20.203.31~13c4\r\n"
    "Via: SIP/2.0/UDP 127.0.0.2:15060;rport=15060;ibmsid=local.1570757344337_54536265_63585492;branch=z9hG4bK702879035187387\r\n"
    "Via: SIP/2.0/UDP 127.0.0.2:15060;rport;ibmsid=local.1570757344337_54536264_63585491;branch=z9hG4bK988182587129676\r\n"
    "Via: SIP/2.0/TLS 172.20.203.31;branch=z9hG4bK410926310928696-AP-AP;ft=121;received=172.20.203.31;rport=23032\r\n"
    "Via: SIP/2.0/TLS 192.168.200.145;branch=z9hG4bK410926310928696-AP;ft=3\r\n"
    "Via: SIP/2.0/TLS 127.0.0.2:15061;rport=28135;ibmsid=local.1570757957813_293093706_299755291;branch=z9hG4bK410926310928696\r\n"
    "Via: SIP/2.0/TLS 127.0.0.2:15061;rport;ibmsid=local.1570757957813_293093705_299755290;branch=z9hG4bK931265348278972\r\n"
    "Via: SIP/2.0/TLS 192.168.200.145;branch=z9hG4bK65c2aab84f6141eaadc805056b4205f-AP;ft=100090;received=192.168.200.145;rport=57699\r\n"
    "Via: SIP/2.0/TLS 172.20.203.3;branch=z9hG4bK65c2aab84f6141eaadc805056b4205f\r\n"
    "Via: SIP/2.0/TLS 172.19.5.175:5061;branch=z9hG4bKca_2641265a-3d7c9420-7b780ce0_I1175\r\n"
    "Supported: 100rel, histinfo, join, replaces, sdp-anat, timer\r\n"
    "Allow: INVITE, ACK, OPTIONS, BYE, CANCEL, SUBSCRIBE, NOTIFY, REFER, INFO, PRACK, PUBLISH, UPDATE\r\n"
    "Contact: \"User1175\" <sip:1175@172.20.203.3;transport=tls;gsid=64bf44a0-4f61-11ea-bea2-005056b42b9e;epv=%3csip:1175%40abcd.com.br%3Bgr%3Deeda8a9622c36e7ddac32b3f54890492%3E>\r\n"
    "Accept-Language: pt-BR\r\n"
    "Alert-Info: <cid:internal@abcd.com.br>;cm-alert-type=internal\r\n"
    "Min-SE: 1200\r\n"
    "Record-Route: <sip:SM01@172.20.203.31;transport=udp;lr;av-asset-uid=4e865326>\r\n"
    "Record-Route: <sip:127.0.0.2:15060;transport=udp;ibmsid=local.1570757344337_54536264_63585491;lr;ibmdrr>\r\n"
    "Record-Route: <sips:127.0.0.2:15061;ibmsid=local.1570757344337_54536264_63585491;lr;ibmdrr>\r\n"
    "Record-Route: <sip:SM01@172.20.203.31;transport=tls;lr;av-asset-uid=4e865326>\r\n"
    "Record-Route: <sip:SM03@192.168.200.145;transport=tls;lr;av-asset-uid=3db5f0c3>\r\n"
    "Record-Route: <sip:127.0.0.2:15061;transport=tls;ibmsid=local.1570757957813_293093705_299755290;lr>\r\n"
    "Record-Route: <sip:SM03@192.168.200.145;transport=tls;lr;av-asset-uid=3db5f0c3>\r\n"
    "Record-Route: <sip:172.20.203.3;transport=tls;lr>\r\n"
    "Session-Expires: 1200;refresher=uac\r\n"
    "User-to-User: 00FA080001247C5E46F6E6;encoding=hex\r\n"
    "P-Charging-Vector: icid-value=\"64bf44a0-4f61-11ea-bea2-005056b42b9e\"\r\n"
    "Endpoint-View: <sip:1175@abcd.com.br;gr=eeda8a9622c36e7ddac32b3f54890492>;local-tag=-307f770b5e46ccb5-7b780c02_F1175172.19.5.175;call-id=c8_264125a46a92c9ec-7b780da0_I@172.19.5.175\r\n"
    "Max-Breadth: 60\r\n"
    "P-Asserted-Identity: \"User1175\" <sip:1175@10.5.10.160>\r\n"
    "History-Info: <sip:71506@abcd.com.br>;index=1, \"71506\" <sip:71506@10.5.10.160>;index=1.1\r\n"
    "Route: <sip:10.5.10.160;lr;phase=terminating;m-type=audio>\r\n"
    "P-AV-Message-Id: 3_2, 1_1\r\n"
    "From: \"User1175\" <sip:1175@10.5.10.160>;tag=65c2a5724f6141eaadc605056b4205f\r\n"
    "To: <sip:71506@10.5.10.160>\r\n"
    "Call-ID: 65c2a5864f6141eaadc705056b4205f\r\n"
    "Max-Forwards: 57\r\n"
    "CSeq: 1 INVITE\r\n"
    "Content-Type: application/sdp\r\n"
    "Content-Length: 239\r\n"
    "Av-Global-Session-ID: 64bf44a0-4f61-11ea-bea2-005056b42b9e\r\n"
    "\r\n"
    "v=0\r\n"
    "o=- 1581709032 1 IN IP4 172.20.203.3\r\n"
    "s=-\r\n"
    "c=IN IP4 192.168.202.5\r\n"
    "b=TIAS:64000\r\n"
    "t=0 0\r\n"
    "a=avf:avc=n prio=n\r\n"
    "a=csup:avf-v0\r\n"
    "m=audio 2426 RTP/AVP 0 18 120\r\n"
    "a=sendrecv\r\n"
    "a=fmtp:18 annexb=no\r\n"
    "a=rtpmap:120 telephone-event/8000\r\n"
    "a=ptime:60\r\n";

    string ok200_2 =
    "SIP/2.0 200 OK\r\n"
    "P-Location: SM;origlocname=\"CT-IBM-CS1K\";origsiglocname=\"CT-IBM-CS1K\";origmedialocname=\"CT-IBM-CS1K\";termlocname=\"CT-IBM-CS1K\";termsiglocname=\"CT-IBM-CS1K\";termmedialocname=\"CT-IBM-CS1K\";smaccounting=\"true\"\r\n"
    "Av-Global-Session-ID: 3d26cb00-4d01-11ea-867c-005056b671e6\r\n"
    "Allow: INVITE, ACK, BYE, REGISTER, REFER, NOTIFY, CANCEL, PRACK, OPTIONS, INFO, SUBSCRIBE, UPDATE\r\n"
    "Contact: <sip:99139@efgh.br:5060;maddr=10.226.243.69;transport=tcp;user=phone;gsid=3d26cb00-4d01-11ea-867c-005056b671e6>\r\n"
    "Record-Route: <sip:Session%20Manager%20A@10.224.51.62;av-asset-uid=rw-6bd108a5;lr;transport=TCP>\r\n"
    "Record-Route: <sip:127.0.0.2:15060;transport=tcp;lr;ibmsid=local.1546262915144_84842348_87668428;ibmdrr>\r\n"
    "Record-Route: <sip:127.0.0.2:15060;transport=udp;lr;ibmsid=local.1546262915144_84842348_87668428;ibmdrr>\r\n"
    "Record-Route: <sip:Session%20Manager%20A@10.224.51.62;av-asset-uid=rw-6bd108a5;lr>\r\n"
    "Privacy: none\r\n"
    "P-Asserted-Identity: \"Fila\" <sip:9538@efgh.br;user=phone>\r\n"
    "User-Agent: SIP GW\r\n"
    "Supported: 100rel, replaces\r\n"
    "To: <sip:99139@10.224.51.62:5060>;tag=4fed9e8-45f3e20a-13c4-55013-1a01310-30109568-1a01310\r\n"
    "From: <sip:11940247970@10.224.51.121:5060>;tag=95-B905E753\r\n"
    "Server: SM-7.1.3.0.713014\r\n"
    "P-AV-Message-Id: 5_2\r\n"
    "Call-ID: -1dyrIpht0IiecZN@10.224.51.121\r\n"
    "CSeq: 22342 INVITE\r\n"
    "Via: SIP/2.0/UDP 10.224.51.121:5060;rport=5060;branch=z9hG4bKF649D68A\r\n"
    "Content-Length: 0\r\n";

    return 0;
}
