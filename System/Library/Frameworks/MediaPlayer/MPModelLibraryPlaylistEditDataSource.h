//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;
@protocol MPMutableIdentifierListSection, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPModelLibraryPlaylistEditDataSource : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSDictionary *_playlistEntriesByIdentifier;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    id <MPMutableIdentifierListSection> _dataSourceSection;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001e5c5c
@property(readonly, nonatomic) __weak id <MPMutableIdentifierListSection> dataSourceSection; // @synthesize dataSourceSection=_dataSourceSection;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSDictionary *playlistEntriesByIdentifier; // @synthesize playlistEntriesByIdentifier=_playlistEntriesByIdentifier;
- (void)_reloadWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001e5b58
- (void)reloadSection:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001e5ab4
- (void)_handleMPMediaLibraryEntitiesAddedOrRemovedNotification:(id)arg1;	// IMP=0x00000000001e5aa2
- (void)reload;	// IMP=0x00000000001e5a89
- (void)loadEntriesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001e5971
- (id)newPlaylistEntryForTrack:(id)arg1;	// IMP=0x00000000001e5808
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000000001e572b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

