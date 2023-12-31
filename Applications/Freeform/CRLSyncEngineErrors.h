//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CRLSyncEngineErrors : NSObject
{
}

+ (id)earliestStartDateAfterError:(id)arg1;	// IMP=0x00200000003bf642
+ (long long)maxRetryAttemptsForError:(id)arg1;	// IMP=0x00100000003bf622
+ (_Bool)isNonZoneSpecificRetriableError:(id)arg1;	// IMP=0x00100000003bf5ca
+ (_Bool)isErrorPotentiallyRetriableAfterUserAction:(id)arg1;	// IMP=0x00100000003bf59a
+ (_Bool)canSyncOperationBeRetriedInResponseToError:(id)arg1;	// IMP=0x00100000003bf56a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

