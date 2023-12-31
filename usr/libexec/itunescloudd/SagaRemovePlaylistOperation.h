//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface SagaRemovePlaylistOperation
{
    NSArray *_playlistSagaIDs;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00400000000b7dc3
- (void).cxx_destruct;	// IMP=0x00200000000b7a79
- (void)main;	// IMP=0x00100000000b763b
- (_Bool)isPersistent;	// IMP=0x00100000000b7633
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000b7599
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000b742a
- (id)initWithConfiguration:(id)arg1 clientIdentity:(id)arg2 playlistSagaIDs:(id)arg3;	// IMP=0x00100000000b739c
- (id)initWithClientIdentity:(id)arg1 PlaylistSagaIDs:(id)arg2;	// IMP=0x00100000000b7316

@end

