//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SHLError : NSObject
{
}

+ (id)localizedRecoverySuggestionForSyncError:(long long)arg1;	// IMP=0x00400000000277ac
+ (id)localizedFailureReasonForSyncError:(long long)arg1;	// IMP=0x0010000000027788
+ (id)localizedDescriptionForSyncError:(long long)arg1;	// IMP=0x0010000000027764
+ (long long)errorCodeForError:(id)arg1;	// IMP=0x00100000000276b0
+ (id)userInfoForErrorCode:(long long)arg1 withUnderlyingError:(id)arg2;	// IMP=0x0010000000027560
+ (id)errorCode:(long long)arg1 underlyingError:(id)arg2;	// IMP=0x00100000000274f3
+ (_Bool)canRetryForPartialError:(id)arg1;	// IMP=0x00100000000273f9
+ (_Bool)canRetryForError:(id)arg1;	// IMP=0x00100000000272da
+ (double)retrySecondsForError:(id)arg1;	// IMP=0x0010000000027007
+ (id)errorWithUnderlyingError:(id)arg1;	// IMP=0x0010000000026f8c
+ (id)errorWithCode:(long long)arg1 underlyingError:(id)arg2;	// IMP=0x0010000000026f73
+ (id)errorWithCode:(long long)arg1;	// IMP=0x0010000000026f58

@end

