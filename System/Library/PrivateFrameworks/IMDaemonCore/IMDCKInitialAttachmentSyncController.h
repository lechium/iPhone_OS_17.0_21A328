//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "IMDCKAttachmentSyncController.h"

@class CKServerChangeToken;

@interface IMDCKInitialAttachmentSyncController : IMDCKAttachmentSyncController
{
    CKServerChangeToken *_syncToken;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000104eb8
@property(retain, nonatomic) CKServerChangeToken *syncToken; // @synthesize syncToken=_syncToken;
- (id)ckUtilities;	// IMP=0x0000000000104e7a
- (_Bool)_kickOffWriteIfNeededForSyncType:(long long)arg1 activity:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000104e1d
- (_Bool)_deviceConditionsAllowsMessageSyncIgnoreFeatureEnabled:(_Bool)arg1;	// IMP=0x0000000000104dee
- (_Bool)_deviceConditionsAllowsMessageSync;	// IMP=0x0000000000104d84
- (_Bool)_deviceConditionsAllowsMessageSyncForActivity:(id)arg1 deviceConditionsToCheck:(unsigned long long)arg2 currentBatchCount:(long long)arg3 maxBatchCount:(long long)arg4;	// IMP=0x0000000000104cb1
- (_Bool)_deviceConditionsAllowsMessageSyncForCurrentBatchCount:(long long)arg1 maxBatchCount:(long long)arg2;	// IMP=0x0000000000104bde
- (id)latestSyncToken;	// IMP=0x0000000000104bcc
- (void)setLatestSyncToken:(id)arg1 forSyncType:(id)arg2;	// IMP=0x0000000000104bba
- (void)setLatestSyncToken:(id)arg1;	// IMP=0x0000000000104ba8

@end
