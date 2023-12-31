//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL, StoreKitMessageInfo, StoreKitMessagesManager, _TtC9storekitd6Client;
@protocol SKClientProtocol;

@interface AskToShowMessageTask
{
    _TtC9storekitd6Client *_client;	// 8 = 0x8
    NSString *_logKey;	// 16 = 0x10
    StoreKitMessagesManager *_manager;	// 24 = 0x18
    id <SKClientProtocol> _remoteObject;	// 32 = 0x20
    StoreKitMessageInfo *_message;	// 40 = 0x28
    NSURL *_pendingURL;	// 48 = 0x30
    NSURL *_urlToDisplay;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000098439
@property(readonly, nonatomic) NSURL *urlToDisplay; // @synthesize urlToDisplay=_urlToDisplay;
@property(retain, nonatomic) NSURL *pendingURL; // @synthesize pendingURL=_pendingURL;
- (void)_finishPromiseWithURLOrError:(id)arg1 error:(id)arg2 promise:(id)arg3;	// IMP=0x001000000009833d
- (id)_hasMessageListenerWithRemoteObject:(id)arg1;	// IMP=0x0010000000098244
- (_Bool)_hasSK2MessageListenerWithRemoteObject:(id)arg1;	// IMP=0x00100000000981cc
- (id)_askToShowMessagePromiseWithRemoteObject:(id)arg1;	// IMP=0x00100000000980b6
- (void)_sendMessageToSK2ListenerWithType:(long long)arg1 remoteObject:(id)arg2;	// IMP=0x0010000000097ecd
- (id)_dialogsDisabledError;	// IMP=0x0010000000097ead
- (id)_askToShowMessage;	// IMP=0x001000000009760f
- (id)_askToShowMessageOctane;	// IMP=0x001000000009713b
- (void)main;	// IMP=0x0010000000096d6e
- (id)initWithClient:(id)arg1 messageInfo:(id)arg2 remoteObject:(id)arg3 logKey:(id)arg4;	// IMP=0x0010000000096c06

@end

