//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface BRCXPCTokenClient
{
}

- (void)fetchGroupContainerPathForCurrentPersonaForFPFS:(_Bool)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000000026443c
- (void)fetchGroupContainerPathForCurrentPersonaWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000263ff2
- (void)fetchContainerPathForCurrentPersonaWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000263ba8
- (void)getPrimaryiCloudAccountStatus:(CDUnknownBlockType)arg1;	// IMP=0x00000000002631e8
- (void)currentAccountCopyTokenWithBundleID:(id)arg1 version:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000262804
- (void)prepareFileProvidersWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000262441
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

