//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCNetworkAddress;

__attribute__((visibility("hidden")))
@interface VCTransportSessionSocket
{
    int _rtpVFD;	// 176 = 0xb0
    int _rtcpVFD;	// 180 = 0xb4
    _Bool _isRTPUsable;	// 184 = 0xb8
    _Bool _isRTCPUsable;	// 185 = 0xb9
    _Bool _isSharedSocket;	// 186 = 0xba
    struct sockaddr_storage _rtpIPPort;	// 192 = 0xc0
    unsigned int _rtpIPPortLength;	// 320 = 0x140
    struct sockaddr_storage _rtcpIPPort;	// 328 = 0x148
    unsigned int _rtcpIPPortLength;	// 456 = 0x1c8
    VCNetworkAddress *_remoteAddress;	// 464 = 0x1d0
    int _networkInterfaceType;	// 472 = 0x1d8
    char _networkInterfaceName[16];	// 476 = 0x1dc
    _Bool _isIPv6;	// 492 = 0x1ec
    unsigned int _networkMTU;	// 496 = 0x1f0
}

- (_Bool)isIPv6;	// IMP=0x0000000000297107
- (unsigned int)networkMTU;	// IMP=0x00000000002970f7
- (int)networkInterfaceType;	// IMP=0x00000000002970e7
- (struct tagVCNWConnectionMonitor *)createNWMonitor;	// IMP=0x000000000029702a
- (int)initializeNetworkInfoWithSocket:(int)arg1;	// IMP=0x0000000000296f14
- (void)initializeInterfaceTypeWithSocket:(int)arg1;	// IMP=0x0000000000296d8c
- (void)stop;	// IMP=0x0000000000296d2b
- (void)start;	// IMP=0x0000000000296c28
- (int)createVFD:(int *)arg1 forStreamType:(unsigned int)arg2;	// IMP=0x00000000002969fb
- (int)createAndConfigureVFDForSocket:(int)arg1 packetType:(int)arg2 remoteIP:(struct sockaddr_storage *)arg3 remoteIPLength:(unsigned int)arg4 vfd:(int *)arg5;	// IMP=0x0000000000296889
- (int)configureParamatersForStreamType:(unsigned int)arg1 socket:(int *)arg2 packetType:(int *)arg3 remoteIP:(struct sockaddr_storage *)arg4 remoteIPLength:(unsigned int *)arg5;	// IMP=0x0000000000296787
- (int)setBasebandNotificationStreamParamatersForSocket:(int *)arg1 packetType:(int *)arg2 remoteIP:(struct sockaddr_storage *)arg3 remoteIPLength:(unsigned int *)arg4;	// IMP=0x00000000002966f8
- (int)setVideoRTCPStreamParamatersForSocket:(int *)arg1 packetType:(int *)arg2 remoteIP:(struct sockaddr_storage *)arg3 remoteIPLength:(unsigned int *)arg4;	// IMP=0x0000000000296635
- (int)setVideoRTPStreamParamatersForSocket:(int *)arg1 packetType:(int *)arg2 remoteIP:(struct sockaddr_storage *)arg3 remoteIPLength:(unsigned int *)arg4;	// IMP=0x00000000002965a6
- (int)setAudioRTCPStreamParamatersForSocket:(int *)arg1 packetType:(int *)arg2 remoteIP:(struct sockaddr_storage *)arg3 remoteIPLength:(unsigned int *)arg4;	// IMP=0x00000000002964e3
- (int)setAudioRTPStreamParamatersForSocket:(int *)arg1 packetType:(int *)arg2 remoteIP:(struct sockaddr_storage *)arg3 remoteIPLength:(unsigned int *)arg4;	// IMP=0x0000000000296454
- (int)setRemoteAddress:(id)arg1 remoteRTCPPort:(int)arg2;	// IMP=0x0000000000295fad
- (int)connectSocket:(int)arg1 remoteAddress:(id)arg2 storage:(struct sockaddr_storage *)arg3;	// IMP=0x0000000000295e30
- (int)updateTransportStream:(struct OpaqueVCTransportStream *)arg1;	// IMP=0x0000000000295bbf
- (id)streams;	// IMP=0x0000000000295b6a
- (int)createVFD:(int *)arg1 realSocket:(int)arg2 sockAddr:(struct sockaddr_storage *)arg3 length:(unsigned int *)arg4 isUsable:(_Bool *)arg5;	// IMP=0x00000000002959c0
- (void)dealloc;	// IMP=0x000000000029593d
- (id)initWithRTPSocket:(int)arg1 RTCPSocket:(int)arg2 notificationHandler:(CDUnknownFunctionPointerType)arg3 eventHandler:(CDUnknownFunctionPointerType)arg4 handlerQueue:(id)arg5 context:(void *)arg6;	// IMP=0x000000000029564b
- (id)initWithSharedSocket:(int)arg1;	// IMP=0x0000000000295634
- (id)initWithRTPSocket:(int)arg1 RTCPSocket:(int)arg2;	// IMP=0x000000000029560c
- (id)initWithSocketDictionary:(id)arg1 notificationHandler:(CDUnknownFunctionPointerType)arg2 eventHandler:(CDUnknownFunctionPointerType)arg3 handlerQueue:(id)arg4 context:(void *)arg5;	// IMP=0x000000000029531c

@end

