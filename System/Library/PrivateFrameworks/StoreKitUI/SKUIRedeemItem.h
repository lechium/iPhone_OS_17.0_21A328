//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIItem.h"

@class NSString;
@protocol SKUIArtworkProviding;

__attribute__((visibility("hidden")))
@interface SKUIRedeemItem : SKUIItem
{
    id <SKUIArtworkProviding> _artworks;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000109df2
- (void).cxx_destruct;	// IMP=0x000000000010a03d
@property(retain, nonatomic) id <SKUIArtworkProviding> artworks; // @synthesize artworks=_artworks;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000109f22
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000109dfa
- (id)largestArtworkURL;	// IMP=0x0000000000109d78
- (id)artworkURLForSize:(long long)arg1;	// IMP=0x0000000000109d19
- (struct _NSRange)ageBandRange;	// IMP=0x0000000000109d07

// Remaining properties
@property(nonatomic) long long itemIdentifier; // @dynamic itemIdentifier;
@property(nonatomic) long long itemKind; // @dynamic itemKind;
@property(retain, nonatomic) NSString *title; // @dynamic title;

@end
