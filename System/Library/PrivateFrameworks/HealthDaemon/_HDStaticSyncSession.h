//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HDSyncSession.h"

__attribute__((visibility("hidden")))
@interface _HDStaticSyncSession : HDSyncSession
{
}

- (long long)maxEncodedBytesPerChangeSetForSyncEntityClass:(Class)arg1;	// IMP=0x00000000001cecc9
- (long long)maxEncodedBytesPerCodableChangeForSyncEntityClass:(Class)arg1;	// IMP=0x00000000001cec78
- (id)newChangeWithSyncEntityClass:(Class)arg1 version:(CDStruct_1ef3fb1f)arg2;	// IMP=0x00000000001cec56

@end
