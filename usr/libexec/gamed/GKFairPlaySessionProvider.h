//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/SwiftNativeNSObject.h>

@class GKReporter, GKStoreBag, MISSING_TYPE;

@interface GKFairPlaySessionProvider : SwiftNativeNSObject
{
    MISSING_TYPE *$defaultActor;	// 4277009103 = 0xfeedfacf
    MISSING_TYPE *task;	// 112 = 0x70
    MISSING_TYPE *session;	// 120 = 0x78
}

- (id)init;	// IMP=0x002000000020590f
- (void)fairPlaySessionWithStoreBag:(GKStoreBag *)arg1 reporter:(GKReporter *)arg2 completionHandler:(void (^)(GKFairPlaySAPSession *, NSError *))arg3;	// IMP=0x0010000000204ab0
- (id)initWithSession:(id)arg1;	// IMP=0x0010000000203031

@end

