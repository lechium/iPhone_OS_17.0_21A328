//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSXPCConnection, NSString;
@protocol CSAudioMeterProviding;

@interface CSAudioMeterProvidingProxy : NSObject
{
    id <CSAudioMeterProviding> _audioMeterProvider;	// 8 = 0x8
    CSXPCConnection *_xpcConnection;	// 16 = 0x10
    unsigned long long _streamClientType;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000014d669
@property(nonatomic) unsigned long long streamClientType; // @synthesize streamClientType=_streamClientType;
@property(nonatomic) __weak CSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(nonatomic) __weak id <CSAudioMeterProviding> audioMeterProvider; // @synthesize audioMeterProvider=_audioMeterProvider;
- (void)_sendReplyMessageWithResult:(_Bool)arg1 event:(id)arg2 client:(id)arg3;	// IMP=0x001000000014d5a4
- (void)_handleMeterProvidingRequestTypePowerMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3 powerType:(unsigned long long)arg4;	// IMP=0x001000000014d338
- (void)_handleMeterProvidingRequestTypeUpdateMetersMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x001000000014d224
- (void)_handleMeterProvidingRequestTypeSetMeteringEnabledMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x001000000014d0e0
- (void)handleXPCMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x001000000014cef5
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x001000000014ce8d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

