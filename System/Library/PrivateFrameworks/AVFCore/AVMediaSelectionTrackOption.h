//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AVMediaSelectionOption.h"

@class AVAssetTrack, AVWeakReference, NSDictionary;

__attribute__((visibility("hidden")))
@interface AVMediaSelectionTrackOption : AVMediaSelectionOption
{
    id _groupID;	// 16 = 0x10
    AVAssetTrack *_track;	// 24 = 0x18
    NSDictionary *_dictionary;	// 32 = 0x20
    AVWeakReference *_weakReferenceToGroup;	// 40 = 0x28
    _Bool _displaysNonForcedSubtitles;	// 48 = 0x30
}

- (int)trackID;	// IMP=0x000000000011c339
- (id)track;	// IMP=0x000000000011c328
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1;	// IMP=0x000000000011c1b8
- (id)metadataForFormat:(id)arg1;	// IMP=0x000000000011c19b
- (id)availableMetadataFormats;	// IMP=0x000000000011c17e
- (id)commonMetadata;	// IMP=0x000000000011c161
- (id)locale;	// IMP=0x000000000011c144
- (_Bool)isPlayable;	// IMP=0x000000000011c127
- (id)mediaSubTypes;	// IMP=0x000000000011bd63
- (id)_track;	// IMP=0x000000000011bd52
- (id)mediaType;	// IMP=0x000000000011bd35
- (_Bool)displaysNonForcedSubtitles;	// IMP=0x000000000011bd25
- (id)_groupID;	// IMP=0x000000000011bd14
- (id)group;	// IMP=0x000000000011bcf7
- (id)dictionary;	// IMP=0x000000000011bce6
- (unsigned long long)hash;	// IMP=0x000000000011bcb0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000011bc21
- (void)dealloc;	// IMP=0x000000000011bbad
- (id)initWithAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3;	// IMP=0x000000000011ba03

@end

