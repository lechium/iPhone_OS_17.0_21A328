//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol TIKeyboardInputManager, _UIIVCResponseDelegateImpl;

__attribute__((visibility("hidden")))
@interface UIKeyboardInputManagerMux : NSObject
{
    NSMutableArray *_clients;	// 8 = 0x8
    id <_UIIVCResponseDelegateImpl> _responseDelegate;	// 16 = 0x10
    id <TIKeyboardInputManager> _systemInputManager;	// 24 = 0x18
}

+ (_Bool)instancesRespondToSelector:(SEL)arg1;	// IMP=0x0060000000d739ae
+ (id)sharedInstance;	// IMP=0x0060000000d7320f
- (void).cxx_destruct;	// IMP=0x0000000000d73dd9
@property(retain, nonatomic) id <TIKeyboardInputManager> systemInputManager; // @synthesize systemInputManager=_systemInputManager;
@property(retain, nonatomic) id <_UIIVCResponseDelegateImpl> responseDelegate; // @synthesize responseDelegate=_responseDelegate;
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000000d73bab
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x0000000000d73b26
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x0000000000d73ab2
- (_Bool)isKindOfClass:(Class)arg1;	// IMP=0x0000000000d73a57
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000000d73a04
- (void)updateClientResponseDelegatesWithDelegate:(id)arg1;	// IMP=0x0000000000d737e5
- (void)releaseConnectedClients;	// IMP=0x0000000000d737d1
- (void)removeAllClients;	// IMP=0x0000000000d73791
- (void)removeClient:(id)arg1;	// IMP=0x0000000000d73728
- (void)addClient:(id)arg1;	// IMP=0x0000000000d7363f
- (void)setSystemInputManagerFromTextInputTraits:(id)arg1 autofillMode:(long long)arg2;	// IMP=0x0000000000d73382
@property(readonly, nonatomic) _Bool hasSystemInputManager;
- (_Bool)_systemHasKbd;	// IMP=0x0000000000d7328e

@end
