//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GSAddition;

__attribute__((visibility("hidden")))
@interface QLThumbnailCachedAddition : NSObject
{
    GSAddition *_addition;	// 8 = 0x8
    unsigned long long _fileID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000155e6
@property(retain) GSAddition *addition; // @synthesize addition=_addition;
- (_Bool)isStillValid;	// IMP=0x0000000000015502
- (unsigned long long)hash;	// IMP=0x00000000000154ec
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000015465
- (id)initWithAddition:(id)arg1;	// IMP=0x0000000000015338

@end

