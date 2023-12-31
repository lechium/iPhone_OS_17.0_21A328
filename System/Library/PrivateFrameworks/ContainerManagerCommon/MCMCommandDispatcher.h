//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface MCMCommandDispatcher : NSObject
{
    NSMutableDictionary *_messageToCommandClassMap;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000755e4
@property(readonly, nonatomic) NSMutableDictionary *messageToCommandClassMap; // @synthesize messageToCommandClassMap=_messageToCommandClassMap;
- (id)_ifNeededRelayMessage:(id)arg1 context:(id)arg2;	// IMP=0x00000000000753e0
- (id)_commandFromCommandClass:(Class)arg1 message:(id)arg2 context:(id)arg3 reply:(id)arg4 error:(id *)arg5;	// IMP=0x00000000000752e5
- (id)_messageFromCommandClass:(Class)arg1 xpcMessage:(id)arg2 context:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000751be
- (Class)_commandClassFromXPCMessage:(id)arg1 context:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000750c0
- (void)dispatchMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;	// IMP=0x0000000000074d35
- (void)registerCommandClass:(Class)arg1;	// IMP=0x0000000000074c7f
- (id)init;	// IMP=0x0000000000074bf6

@end

