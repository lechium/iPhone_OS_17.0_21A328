//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOLocation;

__attribute__((visibility("hidden")))
@interface GEORoadCoursePenalty : NSObject
{
    GEOLocation *_location;	// 8 = 0x8
    _Bool _useRawLocations;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000070cbe3
- (double)penaltyForCandidate:(id)arg1;	// IMP=0x000000000070c9ce
@property(nonatomic) _Bool useRawLocations;
- (id)initWithLocation:(id)arg1;	// IMP=0x000000000070c925
- (id)init;	// IMP=0x000000000070c8e1

@end

