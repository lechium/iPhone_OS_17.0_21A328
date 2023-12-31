//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface DRKeyboardArbiter : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    CDUnknownBlockType _errorHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000000926e
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
- (void)queue_endInputSessionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009243
- (void)queue_keyboardUIDidChange:(id)arg1 onComplete:(CDUnknownBlockType)arg2;	// IMP=0x0010000000009231
- (void)queue_activeProcessResignWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000921f
- (void)queue_setLastEventSource:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000920d
- (void)queue_setKeyboardDisabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000091fb
- (void)queue_getDebugInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000091e0
- (void)queue_sceneBecameFocused:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000091ce
- (void)queue_keyboardSuppressed:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000091bc
- (void)queue_keyboardTransition:(id)arg1 event:(unsigned long long)arg2 withInfo:(id)arg3 onComplete:(CDUnknownBlockType)arg4;	// IMP=0x00100000000091a9
- (void)queue_keyboardIAVChanged:(double)arg1 onComplete:(CDUnknownBlockType)arg2;	// IMP=0x0010000000009197
- (void)queue_keyboardChangedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009185
- (void)queue_keyboardChanged:(id)arg1 onComplete:(CDUnknownBlockType)arg2;	// IMP=0x0010000000009119
- (void)setKeyboardTotalDisable:(_Bool)arg1 withFence:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000908b
- (id)proxy;	// IMP=0x001000000000900f
- (void)disconnect;	// IMP=0x0010000000008fca
- (void)connect;	// IMP=0x0010000000008dda

@end

