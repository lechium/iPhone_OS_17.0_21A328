//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "ML3ImportOperation.h"

@class ML3StoreItemAlbumArtistData, ML3StoreItemPlaylistData, ML3StoreItemTrackData;

__attribute__((visibility("hidden")))
@interface ML3StoreImportOperation : ML3ImportOperation
{
    ML3StoreItemTrackData *_trackData;	// 8 = 0x8
    ML3StoreItemPlaylistData *_playlistData;	// 16 = 0x10
    ML3StoreItemAlbumArtistData *_albumArtistData;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001501ed
- (_Bool)_importAlbumArtistsUsingImportSession:(void *)arg1;	// IMP=0x000000000014fb19
- (_Bool)_importPlaylistsUsingImportSession:(void *)arg1;	// IMP=0x000000000014f448
- (_Bool)_importTracksUsingImportSession:(void *)arg1;	// IMP=0x000000000014e0b5
- (_Bool)_performImportWithTransaction:(id)arg1;	// IMP=0x000000000014d733
- (void)main;	// IMP=0x000000000014d52c
- (unsigned long long)importSource;	// IMP=0x000000000014d521

@end

