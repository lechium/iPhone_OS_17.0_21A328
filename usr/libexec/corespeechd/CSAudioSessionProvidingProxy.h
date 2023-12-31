//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSManualDuckingHandler, CSXPCConnection, NSString;
@protocol CSAudioSessionProviding;

@interface CSAudioSessionProvidingProxy : NSObject
{
    id <CSAudioSessionProviding> _audioSessionProvider;	// 8 = 0x8
    CSXPCConnection *_xpcConnection;	// 16 = 0x10
    unsigned long long _streamClientType;	// 24 = 0x18
    CSManualDuckingHandler *_manualDuckingHandler;	// 32 = 0x20
}

- (void);	// IMP=0x0020000000135f5f
@property(retain, nonatomic) CSManualDuckingHandler *manualDuckingHandler; // @synthesize manualDuckingHandler=_manualDuckingHandler;
@property(nonatomic) unsigned long long streamClientType; // @synthesize streamClientType=_streamClientType;
@property(nonatomic) __weak CSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(retain, nonatomic) id <CSAudioSessionProviding> audioSessionProvider; // @synthesize audioSessionProvider=_audioSessionProvider;
- (void)_sendDelegateMessageToClient:(id)arg1;	// IMP=0x0010000000135df7
- (void)audioSessionProvider:(id)arg1 didChangeContext:(_Bool)arg2;	// IMP=0x0010000000135d49
- (void)audioSessionProvider:(id)arg1 providerInvalidated:(_Bool)arg2;	// IMP=0x0010000000135c4e
- (void)audioSessionProvider:(id)arg1 didReceiveAudioSessionMediaServicesWereResetNotificationWithUserInfo:(id)arg2;	// IMP=0x0010000000135b6a
- (void)audioSessionProvider:(id)arg1 didReceiveAudioSessionMediaServicesWereLostNotificationWithUserInfo:(id)arg2;	// IMP=0x0010000000135a86
- (void)audioSessionProvider:(id)arg1 didReceiveAudioSessionRouteChangeNotificationWithUserInfo:(id)arg2;	// IMP=0x00100000001359a2
- (void)audioSessionProvider:(id)arg1 didReceiveAudioSessionInterruptionNotificationWithUserInfo:(id)arg2;	// IMP=0x00100000001358be
- (void)audioSessionProvider:(id)arg1 didSetAudioSessionActive:(_Bool)arg2;	// IMP=0x0010000000135802
- (void)audioSessionProvider:(id)arg1 willSetAudioSessionActive:(_Bool)arg2;	// IMP=0x0010000000135746
- (void)audioSessionProviderEndInterruption:(id)arg1;	// IMP=0x00100000001356b2
- (void)audioSessionProviderBeginInterruption:(id)arg1 withContext:(id)arg2;	// IMP=0x00100000001355ce
- (void)audioSessionProviderBeginInterruption:(id)arg1;	// IMP=0x001000000013553a
- (void)_sendReplyMessageWithResult:(_Bool)arg1 error:(id)arg2 event:(id)arg3 client:(id)arg4;	// IMP=0x0010000000135446
- (void)_handleSessionProvidingRequestTypeEnableSmartRoutingConsideration:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x001000000013531b
- (void)_handleSessionProvidingRequestTypeEnableMiniDucking:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00100000001351f0
- (void)_handleSessionProvidingRequestTypeDuckDefaultOutputAudioDevice:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00100000001350c9
- (void)_handleSessionProvidingRequestTypeDuckAudioDevice:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x0010000000134f8d
- (void)_handleSessionProvidingRequestTypeSetDuckOthersOption:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x0010000000134e74
- (void)_handleSessionProvidingRequestTypeDeactivateMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x0010000000134bff
- (void)_handleSessionProvidingRequestTypeActivateMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00100000001348e6
- (void)_handleSessionProvidingRequestTypePrewarmMessage:(id)arg1 client:(id)arg2;	// IMP=0x0010000000134718
- (void)handleXPCMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00100000001344fd
- (void)dealloc;	// IMP=0x0010000000134459
- (void)CSXPCConnectionReceivedClientError:(id)arg1 clientError:(id)arg2 client:(id)arg3;	// IMP=0x00100000001342e4
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x001000000013427c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

