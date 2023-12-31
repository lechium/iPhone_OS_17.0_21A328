//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPMediaLibraryDataProviderML3.h"

@class NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPMediaLibraryDataProviderSystemML3 : MPMediaLibraryDataProviderML3
{
    long long _currentRevision;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)_localizedGeniusErrorForError:(id)arg1 geniusEnabled:(_Bool)arg2;	// IMP=0x00600000001a8724
+ (id)_localizedCloudGeniusErrorForError:(id)arg1;	// IMP=0x00600000001a81ac
- (void).cxx_destruct;	// IMP=0x00000000001a733f
- (_Bool)supportsEntityChangeTrackingForMediaEntityType:(long long)arg1 collectionGroupingType:(long long)arg2 dataProviderClass:(out Class *)arg3;	// IMP=0x00000000001a730e
- (void)updateEntitesToCurrentRevision;	// IMP=0x00000000001a728e
- (id)errorResolverForItem:(id)arg1;	// IMP=0x00000000001a7203
- (void)_seedCloudPlaylistWithTrack:(id)arg1 container:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000001a6f7a
- (void)geniusItemsForSeedItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001a6ce0
- (void)releaseGeniusClusterPlaylist:(void *)arg1;	// IMP=0x00000000001a6cd2
- (long long *)generateItemIdentifiersForGeniusClusterPlaylist:(void *)arg1 count:(unsigned long long *)arg2 error:(id *)arg3;	// IMP=0x00000000001a6bd6
- (void *)createGeniusClusterPlaylistWithSeedItemIdentifiers:(long long *)arg1 count:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000001a6a9a
- (void)seedPlaylistWithIdentifier:(long long)arg1 withItemWithIdentifier:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000001a688b
- (_Bool)isGeniusEnabled;	// IMP=0x00000000001a67f1
- (long long)_currentRevision;	// IMP=0x00000000001a6790
- (void)_initInstanceVariableOnce;	// IMP=0x00000000001a6721
- (id)initWithLibrary:(id)arg1;	// IMP=0x00000000001a66d5

@end

