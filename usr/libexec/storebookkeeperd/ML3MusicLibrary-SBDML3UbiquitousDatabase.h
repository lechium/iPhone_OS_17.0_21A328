//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MusicLibrary/ML3MusicLibrary.h>

@interface ML3MusicLibrary (SBDML3UbiquitousDatabase)
- (_Bool)supportsUPP;	// IMP=0x001000000000b775
- (id)uppDatabase;	// IMP=0x001000000000b70a
- (void)SBKCommitUniversalPlaybackPositionTransaction:(id)arg1 domainVersion:(id)arg2 metadataEnumerationBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000000c9a1
- (void)SBKCancelUniversalPlaybackPositionTransaction:(id)arg1;	// IMP=0x001000000000c99b
- (id)SBKBeginTransactionWithItemsToSyncEnumerationBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000000c88b
- (id)SBKSQLQueryStringForItemsNeedingPush;	// IMP=0x001000000000c869
- (id)SBKQueryForTracksNeedingPushWithEntityRevisionAnchor:(unsigned long long)arg1 orderingTerms:(id)arg2;	// IMP=0x001000000000c67c
@end

