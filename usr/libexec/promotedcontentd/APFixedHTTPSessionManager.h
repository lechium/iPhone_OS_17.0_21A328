//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APUnfairLock, NSMutableDictionary;

@interface APFixedHTTPSessionManager : NSObject
{
    CDUnknownBlockType createSessionBlock;	// 8 = 0x8
    APUnfairLock *_lock;	// 16 = 0x10
    NSMutableDictionary *_sessions;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000ee3bd
@property(readonly, nonatomic) NSMutableDictionary *sessions; // @synthesize sessions=_sessions;
@property(readonly, nonatomic) APUnfairLock *lock; // @synthesize lock=_lock;
@property(copy, nonatomic) CDUnknownBlockType createSessionBlock; // @synthesize createSessionBlock;
- (_Bool)invalidateService:(id)arg1 andCancelTasks:(_Bool)arg2;	// IMP=0x00100000000ee1ac
- (_Bool)cancelTasksForService:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000edfc3
- (void)invalidateAllServicesAndCancelTasks:(_Bool)arg1;	// IMP=0x00100000000eddbf
- (id)temporarySessionForService:(id)arg1;	// IMP=0x00100000000eddad
- (id)sessionForService:(id)arg1;	// IMP=0x00100000000edc34
- (id)init;	// IMP=0x00100000000edb95

@end

