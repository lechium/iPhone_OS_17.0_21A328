//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPMediaLibrary, MPModelAlbum, MPPropertySet;

__attribute__((visibility("hidden")))
@interface MPModelLibraryPlaylistEditAlbumDataSource
{
    MPMediaLibrary *_library;	// 8 = 0x8
    MPModelAlbum *_album;	// 16 = 0x10
    MPPropertySet *_trackPropertySet;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000010f1e1
- (void)loadEntriesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000010ef56
- (id)description;	// IMP=0x000000000010ef0e
- (id)initWithLibrary:(id)arg1 album:(id)arg2 trackProperties:(id)arg3;	// IMP=0x000000000010ec85

@end

