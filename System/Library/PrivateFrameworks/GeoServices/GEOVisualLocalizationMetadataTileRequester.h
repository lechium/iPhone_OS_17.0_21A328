//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEOSimpleTileRequester.h"

__attribute__((visibility("hidden")))
@interface GEOVisualLocalizationMetadataTileRequester : GEOSimpleTileRequester
{
}

+ (unsigned char)tileProviderIdentifier;	// IMP=0x00100000011c7624
- (CDStruct_026435ec)kindForTileKey:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000011c7b4a
- (id)urlForTileKey:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000011c76be
- (_Bool)downloadsDataToDisk;	// IMP=0x00000000011c76b6
- (id)activeTileSetForKey:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000011c762f

@end
