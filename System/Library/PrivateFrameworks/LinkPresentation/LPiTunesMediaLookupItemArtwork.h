//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface LPiTunesMediaLookupItemArtwork : NSObject
{
    NSDictionary *_dictionary;	// 8 = 0x8
}

+ (id)colorForColorKind:(id)arg1 inColorDictionary:(id)arg2;	// IMP=0x006000000005bb13
- (void).cxx_destruct;	// IMP=0x000000000005bc5d
- (id)URLWithHeight:(long long)arg1 width:(long long)arg2 cropStyle:(id)arg3 format:(id)arg4;	// IMP=0x000000000005b678
- (id)colors;	// IMP=0x000000000005b40d
@property(readonly, nonatomic) long long width;
@property(readonly, nonatomic) long long height;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000005b289

@end

