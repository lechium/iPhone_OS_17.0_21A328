//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ADRadarManager : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x004000000027bc51
- (void)createCrashDraft:(id)arg1 withDisplayReason:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x004000000027b7ad
- (void)createDraft:(id)arg1 withDisplayReason:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000027b782
- (void)_sharedCreateDraft:(id)arg1 withDisplayReason:(id)arg2 reproducibility:(long long)arg3 classification:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000027b333
- (id)_init;	// IMP=0x001000000027b304

@end
